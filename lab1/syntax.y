%code requires {
#include "node.h"
// #define YYDEBUG 1
}

%{
#include <stddef.h>
#include <stdio.h>

#include "lex.yy.h"
%}
/* %define parse.trace */
%union {
    Node *node;
}

%token <node> INT
%token <node> FLOAT
%token <node> SEMI COMMA
%token <node> ASSIGNOP
%token <node> RELOP
%token <node> PLUS MINUS STAR DIV
%token <node> AND OR
%token <node> DOT
%token <node> NOT
%token <node> TYPE
%token <node> LP RP LB RB LC RC
%token <node> STRUCT RETURN IF ELSE WHILE
%token <node> ID

%type <node> Program ExtDefList ExtDef ExtDecList
%type <node> Specifier StructSpecifier OptTag Tag
%type <node> VarDec FunDec VarList ParamDec
%type <node> CompSt StmtList Stmt
%type <node> DefList Def DecList Dec
%type <node> Exp Args

%%
Program: ExtDefList {$$ = newNode(yylineno, T_PROGRAM, NULL, 1, (Node*[]) {$1}); printTree($$, 0);}
    ;
ExtDefList: ExtDef ExtDefList {$$ = newNode(yylineno, T_EXTDEFLIST, NULL, 2, (Node*[]) {$1, $2});}
    | {{$$ = newNode(yylineno, T_EXTDEFLIST, NULL, 0, (Node*[]) {});}}
    ;
ExtDef: Specifier ExtDecList SEMI {$$ = newNode(yylineno, T_EXTDEF, NULL, 3, (Node*[]) {$1, $2, $3});}
    | Specifier SEMI {$$ = newNode(yylineno, T_EXTDEF, NULL, 2, (Node*[]) {$1, $2});}
    | Specifier FunDec CompSt {$$ = newNode(yylineno, T_EXTDEF, NULL, 3, (Node*[]) {$1, $2, $3});}
    ;
ExtDecList: VarDec {$$ = newNode(yylineno, T_EXTDECLIST, NULL, 1, (Node*[]) {$1});}
    | VarDec COMMA ExtDecList {$$ = newNode(yylineno, T_EXTDECLIST, NULL, 3, (Node*[]) {$1, $2, $3});}
    ;


Specifier: TYPE {$$ = newNode(yylineno, T_SPECIFIER, NULL, 1, (Node*[]) {$1});}
    | StructSpecifier {$$ = newNode(yylineno, T_SPECIFIER, NULL, 1, (Node*[]) {$1});}
    ;
StructSpecifier: STRUCT OptTag LC DefList RC {$$ = newNode(yylineno, T_STRUCTSPECIFIER, NULL, 5, (Node*[]) {$1, $2, $3, $4, $5});}
    | STRUCT Tag {$$ = newNode(yylineno, T_STRUCTSPECIFIER, NULL, 2, (Node*[]) {$1, $2});}
    ;
OptTag: ID {$$ = newNode(yylineno, T_OPTTAG, NULL, 1, (Node*[]) {$1});}
    | {$$ = newNode(yylineno, T_OPTTAG, NULL, 0, (Node*[]) {});}
    ;
Tag: ID {$$ = newNode(yylineno, T_TAG, NULL, 1, (Node*[]) {$1});}
    ;


VarDec: ID {$$ = newNode(yylineno, T_VARDEC, NULL, 1, (Node*[]) {$1});}
    | VarDec LB INT RB {$$ = newNode(yylineno, T_VARDEC, NULL, 3, (Node*[]) {$1, $2, $3});}
    ;
FunDec: ID LP VarList RP {$$ = newNode(yylineno, T_FUNDEC, NULL, 4, (Node*[]) {$1, $2, $3, $4});}
    | ID LP RP {$$ = newNode(yylineno, T_FUNDEC, NULL, 3, (Node*[]) {$1, $2, $3});}
    ;
VarList: ParamDec COMMA VarList {$$ = newNode(yylineno, T_VARLIST, NULL, 3, (Node*[]) {$1, $2, $3});}
    | ParamDec {$$ = newNode(yylineno, T_VARLIST, NULL, 1, (Node*[]) {$1});}
    ;
ParamDec: Specifier VarDec {$$ = newNode(yylineno, T_PARAMDEC, NULL, 2, (Node*[]) {$1, $2});}
    ;


CompSt: LC DefList StmtList RC {$$ = newNode(yylineno, T_COMPST, NULL, 4, (Node*[]) {$1, $2, $3, $4});}
    | error RC
    ;
StmtList: Stmt StmtList {$$ = newNode(yylineno, T_STMTLIST, NULL, 2, (Node*[]) {$1, $2});}
    | {$$ = newNode(yylineno, T_STMTLIST, NULL, 0, (Node*[]) {});}
    ;
Stmt: Exp SEMI {$$ = newNode(yylineno, T_STMT, NULL, 2, (Node*[]) {$1, $2});}
    | RETURN Exp SEMI {$$ = newNode(yylineno, T_STMT, NULL, 3, (Node*[]) {$1, $2, $3});}
    | IF LP Exp RP Stmt {$$ = newNode(yylineno, T_STMT, NULL, 5, (Node*[]) {$1, $2, $3, $4, $5});}
    | IF LP Exp RP Stmt ELSE Stmt {$$ = newNode(yylineno, T_STMT, NULL, 7, (Node*[]) {$1, $2, $3, $4, $5, $6, $7});}
    | WHILE LP Exp RP Stmt {$$ = newNode(yylineno, T_STMT, NULL, 5, (Node*[]) {$1, $2, $3, $4, $5});}
    | error SEMI
    ;

DefList: Def DefList {$$ = newNode(yylineno, T_DEFLIST, NULL, 2, (Node*[]) {$1, $2});}
    | {$$ = newNode(yylineno, T_DEFLIST, NULL, 0, (Node*[]) {});}
    ;
Def: Specifier DecList SEMI {$$ = newNode(yylineno, T_DEF, NULL, 3, (Node*[]) {$1, $2, $3});}
    ;
DecList: Dec {$$ = newNode(yylineno, T_DECLIST, NULL, 1, (Node*[]) {$1});}
    | Dec COMMA DecList {$$ = newNode(yylineno, T_DECLIST, NULL, 3, (Node*[]) {$1, $2, $3});}
    ;
Dec: VarDec {$$ = newNode(yylineno, T_DEC, NULL, 1, (Node*[]) {$1});}
    | VarDec ASSIGNOP Exp {$$ = newNode(yylineno, T_DEC, NULL, 3, (Node*[]) {$1, $2, $3});}
    ;

Exp: Exp ASSIGNOP Exp {$$ = newNode(yylineno, T_EXP, NULL, 3, (Node*[]) {$1, $2, $3});}
    | Exp AND Exp {$$ = newNode(yylineno, T_EXP, NULL, 3, (Node*[]) {$1, $2, $3});}
    | Exp OR Exp {$$ = newNode(yylineno, T_EXP, NULL, 3, (Node*[]) {$1, $2, $3});}
    | Exp RELOP Exp {$$ = newNode(yylineno, T_EXP, NULL, 3, (Node*[]) {$1, $2, $3});}
    | Exp PLUS Exp {$$ = newNode(yylineno, T_EXP, NULL, 3, (Node*[]) {$1, $2, $3});}
    | Exp MINUS Exp {$$ = newNode(yylineno, T_EXP, NULL, 3, (Node*[]) {$1, $2, $3});}
    | Exp STAR Exp {$$ = newNode(yylineno, T_EXP, NULL, 3, (Node*[]) {$1, $2, $3});}
    | Exp DIV Exp {$$ = newNode(yylineno, T_EXP, NULL, 3, (Node*[]) {$1, $2, $3});}
    | LP Exp RP {$$ = newNode(yylineno, T_EXP, NULL, 3, (Node*[]) {$1, $2, $3});}
    | MINUS Exp {$$ = newNode(yylineno, T_EXP, NULL, 2, (Node*[]) {$1, $2});}
    | NOT Exp {$$ = newNode(yylineno, T_EXP, NULL, 2, (Node*[]) {$1, $2});}
    | ID LP Args RP {$$ = newNode(yylineno, T_EXP, NULL, 4, (Node*[]) {$1, $2, $3, $4});}
    | ID LP RP {$$ = newNode(yylineno, T_EXP, NULL, 3, (Node*[]) {$1, $2, $3});}
    | Exp LB Exp RB {$$ = newNode(yylineno, T_EXP, NULL, 4, (Node*[]) {$1, $2, $3, $4});}
    | Exp DOT ID {$$ = newNode(yylineno, T_EXP, NULL, 3, (Node*[]) {$1, $2, $3});}
    | ID {$$ = newNode(yylineno, T_EXP, NULL, 1, (Node*[]) {$1});}
    | INT {$$ = newNode(yylineno, T_EXP, NULL, 1, (Node*[]) {$1});}
    | FLOAT {$$ = newNode(yylineno, T_EXP, NULL, 1, (Node*[]) {$1});}
    /* | error RP */
    ;
Args: Exp COMMA Args {$$ = newNode(yylineno, T_ARGS, NULL, 3, (Node*[]) {$1, $2, $3});}
    | Exp {$$ = newNode(yylineno, T_ARGS, NULL, 1, (Node*[]) {$1});}
    ;
%%
#include <stdio.h>

void yyerror(char *msg) {
    error = true;
    fprintf(stderr, "Error type B at line %d: %s.\n", yylineno, msg);
}