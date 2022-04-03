%{
#include "syntax.tab.h"
#include "node.h"
#include "util.h"

// #define MY_DEBUG
%}

%option yylineno

d [0-9]
hexd [0-9a-fA-F]
octd [0-7]
w [_0-9a-zA-Z]
l [_a-zA-Z]
decuint ([1-9]{d}*|0)
octuint (0{octd}+)
hexuint (0x{hexd}+)
uint ({decuint}|{octuint}|{hexuint})
plainfloat ({d}+\.{d}+)
exphead ({d}+\.{d}*|{d}*\.{d}+)
expfloat ({exphead}[eE][+-]?{d}+)
float ({plainfloat}|{expfloat})
id ({l}{w}*)
semi ";"
comma ","
assignop "="
relop (>|<|>=|<=|==|!=)
plus "+"
minus "-"
star "*"
div "/"
and "&&"
or "||"
dot "."
not "!"
type (int|float)
lp "("
rp ")"
lb "["
rb "]"
lc "{"
rc "}"
struct "struct"
return "return"
if "if"
else "else"
while "while"

%%

[ \r\t\n]+ {/* Ignore blanks */}
\/\/[^\n]* {
    #ifdef MY_DEBUG
    printf("Inline comments: %s\n", yytext);
    #endif
    }
{decuint}/[^0-9A-Za-z_] {
    #ifdef MY_DEBUG
    printf("INT (dec): %s, value: %d\n", yytext, atoi(yytext));
    #endif

    IntData *data = malloc(sizeof(IntData));
    data->value = atoi(yytext);
    Node *node = newNode(yylineno, T_INT, data, 0, NULL);
    yylval.node = node;
    return INT;
}
{octuint}/[^0-9A-Za-z_] {
    #ifdef MY_DEBUG
    printf("INT (oct): %s, value: %d\n", yytext, otoi(yytext));
    #endif

    IntData *data = malloc(sizeof(IntData));
    data->value = otoi(yytext);
    Node *node = newNode(yylineno, T_INT, data, 0, NULL);
    yylval.node = node;
    return INT;
}
{hexuint}/[^0-9A-Za-z_] {
    #ifdef MY_DEBUG
    printf("INT (hex): %s, value: %d\n", yytext, htoi(yytext));
    #endif

    IntData *data = malloc(sizeof(IntData));
    data->value = htoi(yytext);
    Node *node = newNode(yylineno, T_INT, data, 0, NULL);
    yylval.node = node;
    return INT;
}
{float}/[^0-9A-Za-z_] {
    #ifdef MY_DEBUG
    printf("FLOAT: %s, value: %g\n", yytext, atof(yytext));
    #endif

    FloatData *data = malloc(sizeof(FloatData));
    data->value = atof(yytext);
    Node *node = newNode(yylineno, T_FLOAT, data, 0, NULL);
    yylval.node = node;
    return FLOAT;
}
{semi} {
    #ifdef MY_DEBUG
    printf("SEMI: %s\n", yytext);
    #endif

    Node *node = newNode(yylineno, T_SEMI, NULL, 0, NULL);
    yylval.node = node;
    return SEMI;
}
{comma} {
    #ifdef MY_DEBUG
    printf("COMMA: %s\n", yytext);
    #endif

    Node *node = newNode(yylineno, T_COMMA, NULL, 0, NULL);
    yylval.node = node;
    return COMMA;
    }
{assignop} {
    #ifdef MY_DEBUG
    printf("ASSIGNOP: %s\n", yytext);
    #endif

    Node *node = newNode(yylineno, T_ASSIGNOP, NULL, 0, NULL);
    yylval.node = node;
    return ASSIGNOP;
    }
{relop} {
    #ifdef MY_DEBUG
    printf("RELOP: %s\n", yytext);
    #endif

    Node *node = newNode(yylineno, T_RELOP, NULL, 0, NULL);
    yylval.node = node;
    return RELOP;
    }
{plus} {
    #ifdef MY_DEBUG
    printf("PLUS: %s\n", yytext);
    #endif

    Node *node = newNode(yylineno, T_PLUS, NULL, 0, NULL);
    yylval.node = node;
    return PLUS;
    }
{minus} {
    #ifdef MY_DEBUG
    printf("MINUS: %s\n", yytext);
    #endif

    Node *node = newNode(yylineno, T_MINUS, NULL, 0, NULL);
    yylval.node = node;
    return MINUS;
    }
{star} {
    #ifdef MY_DEBUG
    printf("STAR: %s\n", yytext);
    #endif

    Node *node = newNode(yylineno, T_STAR, NULL, 0, NULL);
    yylval.node = node;
    return STAR;
    }
{div} {
    #ifdef MY_DEBUG
    printf("DIV: %s\n", yytext);
    #endif

    Node *node = newNode(yylineno, T_DIV, NULL, 0, NULL);
    yylval.node = node;
    return DIV;
    }
{and} {
    #ifdef MY_DEBUG
    printf("AND: %s\n", yytext);
    #endif

    Node *node = newNode(yylineno, T_AND, NULL, 0, NULL);
    yylval.node = node;
    return AND;
    }
{or} {
    #ifdef MY_DEBUG
    printf("OR: %s\n", yytext);
    #endif

    Node *node = newNode(yylineno, T_OR, NULL, 0, NULL);
    yylval.node = node;
    return OR;
    }
{dot} {
    #ifdef MY_DEBUG
    printf("DOT: %s\n", yytext);
    #endif

    Node *node = newNode(yylineno, T_DOT, NULL, 0, NULL);
    yylval.node = node;
    return DOT;
    }
{not} {
    #ifdef MY_DEBUG
    printf("NOT: %s\n", yytext);
    #endif

    Node *node = newNode(yylineno, T_NOT, NULL, 0, NULL);
    yylval.node = node;
    return NOT;
    }
{type} {
    #ifdef MY_DEBUG
    printf("TYPE: %s\n", yytext);
    #endif

    TypeData *data = malloc(sizeof(TypeData));
    data->type = strdup(yytext);
    Node *node = newNode(yylineno, T_TYPE, data, 0, NULL);
    yylval.node = node;
    return TYPE;
    }
{lp} {
    #ifdef MY_DEBUG
    printf("LP: %s\n", yytext);
    #endif

    Node *node = newNode(yylineno, T_LP, NULL, 0, NULL);
    yylval.node = node;
    return LP;
    }
{rp} {
    #ifdef MY_DEBUG
    printf("RP: %s\n", yytext);
    #endif

    Node *node = newNode(yylineno, T_RP, NULL, 0, NULL);
    yylval.node = node;
    return RP;
    }
{lb} {
    #ifdef MY_DEBUG
    printf("LB: %s\n", yytext);
    #endif

    Node *node = newNode(yylineno, T_LB, NULL, 0, NULL);
    yylval.node = node;
    return LB;
    }
{rb} {
    #ifdef MY_DEBUG
    printf("RB: %s\n", yytext);
    #endif

    Node *node = newNode(yylineno, T_RB, NULL, 0, NULL);
    yylval.node = node;
    return RB;
    }
{lc} {
    #ifdef MY_DEBUG
    printf("LC: %s\n", yytext);
    #endif

    Node *node = newNode(yylineno, T_LC, NULL, 0, NULL);
    yylval.node = node;
    return LC;
    }
{rc} {
    #ifdef MY_DEBUG
    printf("RC: %s\n", yytext);
    #endif

    Node *node = newNode(yylineno, T_RC, NULL, 0, NULL);
    yylval.node = node;
    return RC;
    }
{struct} {
    #ifdef MY_DEBUG
    printf("STRUCT: %s\n", yytext);
    #endif

    Node *node = newNode(yylineno, T_STRUCT, NULL, 0, NULL);
    yylval.node = node;
    return STRUCT;
    }
{return} {
    #ifdef MY_DEBUG
    printf("RETURN: %s\n", yytext);
    #endif

    Node *node = newNode(yylineno, T_RETURN, NULL, 0, NULL);
    yylval.node = node;
    return RETURN;
    }
{if} {
    #ifdef MY_DEBUG
    printf("IF: %s\n", yytext);
    #endif

    Node *node = newNode(yylineno, T_IF, NULL, 0, NULL);
    yylval.node = node;
    return IF;
    }
{else} {
    #ifdef MY_DEBUG
    printf("ELSE: %s\n", yytext);
    #endif

    Node *node = newNode(yylineno, T_ELSE, NULL, 0, NULL);
    yylval.node = node;
    return ELSE;
    }
{while} {
    #ifdef MY_DEBUG
    printf("WHILE: %s\n", yytext);
    #endif

    Node *node = newNode(yylineno, T_WHILE, NULL, 0, NULL);
    yylval.node = node;
    return WHILE;
    }
{id} {
    #ifdef MY_DEBUG
    printf("ID: %s\n", yytext);
    #endif

    IdData *data = malloc(sizeof(IdData));
    data->name = strdup(yytext);
    Node *node = newNode(yylineno, T_ID, data, 0, NULL);
    yylval.node = node;
    return ID;
    }
.|{w}+ {
    error = true;
    printf("Error type A at Line %d: Invalid token %s\n", yylineno, yytext);
    return YYerror;
    }

%%