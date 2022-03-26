%{
#include "syntax.tab.h"
#include "node.h"

%}

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

[ \r\t]+ {/* Ignore blanks */}
\n {++yylineno;}
\/\/[^\n]* {printf("Inline comments: %s\n", yytext);}
{uint} {
    printf("INT: %s, value: %d\n", yytext, atoi(yytext));
    IntData *data = malloc(sizeof(IntData));
    data->value = atoi(yytext);
    Node *node = newNode(yylineno, T_INT, data, 0, NULL);
    yylval.node = node;
    return INT;
}
{float} {
    printf("FLOAT: %s, value: %g\n", yytext, atof(yytext));
    FloatData *data = malloc(sizeof(FloatData));
    data->value = atof(yytext);
    Node *node = newNode(yylineno, T_FLOAT, data, 0, NULL);
    yylval.node = node;
    return FLOAT;
}
{semi} {
    printf("SEMI: %s\n", yytext);
    Node *node = newNode(yylineno, T_SEMI, NULL, 0, NULL);
    yylval.node = node;
    return SEMI;
}
{comma} {
    printf("COMMA: %s\n", yytext);
    Node *node = newNode(yylineno, T_COMMA, NULL, 0, NULL);
    yylval.node = node;
    return COMMA;
    }
{assignop} {
    printf("ASSIGNOP: %s\n", yytext);
    Node *node = newNode(yylineno, T_ASSIGNOP, NULL, 0, NULL);
    yylval.node = node;
    return ASSIGNOP;
    }
{relop} {
    printf("RELOP: %s\n", yytext);
    Node *node = newNode(yylineno, T_RELOP, NULL, 0, NULL);
    yylval.node = node;
    return RELOP;
    }
{plus} {
    printf("PLUS: %s\n", yytext);
    Node *node = newNode(yylineno, T_PLUS, NULL, 0, NULL);
    yylval.node = node;
    return PLUS;
    }
{minus} {
    printf("MINUS: %s\n", yytext);
    Node *node = newNode(yylineno, T_MINUS, NULL, 0, NULL);
    yylval.node = node;
    return MINUS;
    }
{star} {
    printf("STAR: %s\n", yytext);
    Node *node = newNode(yylineno, T_STAR, NULL, 0, NULL);
    yylval.node = node;
    return STAR;
    }
{div} {
    printf("DIV: %s\n", yytext);
    Node *node = newNode(yylineno, T_DIV, NULL, 0, NULL);
    yylval.node = node;
    return DIV;
    }
{and} {
    printf("AND: %s\n", yytext);
    Node *node = newNode(yylineno, T_AND, NULL, 0, NULL);
    yylval.node = node;
    return AND;
    }
{or} {
    printf("OR: %s\n", yytext);
    Node *node = newNode(yylineno, T_OR, NULL, 0, NULL);
    yylval.node = node;
    return OR;
    }
{dot} {
    printf("DOT: %s\n", yytext);
    Node *node = newNode(yylineno, T_DOT, NULL, 0, NULL);
    yylval.node = node;
    return DOT;
    }
{not} {
    printf("NOT: %s\n", yytext);
    Node *node = newNode(yylineno, T_NOT, NULL, 0, NULL);
    yylval.node = node;
    return NOT;
    }
{type} {
    printf("TYPE: %s\n", yytext);
    TypeData *data = malloc(sizeof(TypeData));
    data->type = strdup(yytext);
    Node *node = newNode(yylineno, T_TYPE, data, 0, NULL);
    yylval.node = node;
    return TYPE;
    }
{lp} {
    printf("LP: %s\n", yytext);
    Node *node = newNode(yylineno, T_LP, NULL, 0, NULL);
    yylval.node = node;
    return LP;
    }
{rp} {
    printf("RP: %s\n", yytext);
    Node *node = newNode(yylineno, T_RP, NULL, 0, NULL);
    yylval.node = node;
    return RP;
    }
{lb} {
    printf("LB: %s\n", yytext);
    Node *node = newNode(yylineno, T_LB, NULL, 0, NULL);
    yylval.node = node;
    return LB;
    }
{rb} {
    printf("RB: %s\n", yytext);
    Node *node = newNode(yylineno, T_RB, NULL, 0, NULL);
    yylval.node = node;
    return RB;
    }
{lc} {
    printf("LC: %s\n", yytext);
    Node *node = newNode(yylineno, T_LC, NULL, 0, NULL);
    yylval.node = node;
    return LC;
    }
{rc} {
    printf("RC: %s\n", yytext);
    Node *node = newNode(yylineno, T_RC, NULL, 0, NULL);
    yylval.node = node;
    return RC;
    }
{struct} {
    printf("STRUCT: %s\n", yytext);
    Node *node = newNode(yylineno, T_STRUCT, NULL, 0, NULL);
    yylval.node = node;
    return STRUCT;
    }
{return} {
    printf("RETURN: %s\n", yytext);
    Node *node = newNode(yylineno, T_RETURN, NULL, 0, NULL);
    yylval.node = node;
    return RETURN;
    }
{if} {
    printf("IF: %s\n", yytext);
    Node *node = newNode(yylineno, T_IF, NULL, 0, NULL);
    yylval.node = node;
    return IF;
    }
{else} {
    printf("ELSE: %s\n", yytext);
    Node *node = newNode(yylineno, T_ELSE, NULL, 0, NULL);
    yylval.node = node;
    return ELSE;
    }
{while} {
    printf("WHILE: %s\n", yytext);
    Node *node = newNode(yylineno, T_WHILE, NULL, 0, NULL);
    yylval.node = node;
    return WHILE;
    }
{id} {
    printf("ID: %s\n", yytext);
    IdData *data = malloc(sizeof(IdData));
    data->name = strdup(yytext);
    Node *node = newNode(yylineno, T_ID, data, 0, NULL);
    yylval.node = node;
    return ID;
    }
. {
    yyerror("Error type A at Line %d: Mysterious character %s\n", yytext);
    }

%%