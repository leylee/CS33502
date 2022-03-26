%token INT FLOAT
%token SEMI COMMA
%token RELOP
%token PLUS MINUS STAR DIV
%token AND OR
%token DOT
%token NOT
%token TYPE
%token LP RP LB RB LC RC
%token STRUCT RETURN IF ELSE WHILE
%token ID

d [0-9]
hexd [0-9a-fA-F]
octd [0-7]
w [_0-9a-zA-Z]
l [_a-zA-Z]
decuint ([1-9]{d}*|0)
octuint (0{octd}+)
hexuint (0x{hexd}+)
uint ({decuint}|{octuint}|{hexuint})
plainfloat ({d}+.{d}+)
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

[ \r\n\t]+ {/* Ignore blanks */}
{uint} {printf("INT: %s, value: %d\n", yytext, atoi(yytext));}
{float} {printf("FLOAT: %s, value: %g\n", yytext, atof(yytext));}
{semi} {printf("SEMI: %s\n");}
{comma} {printf("COMMA: %s\n", yytext);}
{relop} {printf("RELOP: %s\n", yytext);}
{plus} {printf("PLUS: %s\n", yytext);}
{minus} {printf("MINUS: %s\n", yytext);}
{star} {printf("STAR: %s\n", yytext);}
{div} {printf("DIV: %s\n", yytext);}
{and} {printf("AND: %s\n", yytext);}
{or} {printf("OR: %s\n", yytext);}
{dot} {printf("DOT: %s\n", yytext);}
{not} {printf("NOT: %s\n", yytext);}
{type} {printf("TYPE: %s\n", yytext);}
{lp} {printf("LP: %s\n", yytext);}
{rp} {printf("RP: %s\n", yytext);}
{lb} {printf("LB: %s\n", yytext);}
{rb} {printf("RB: %s\n", yytext);}
{lc} {printf("LC: %s\n", yytext);}
{rc} {printf("RC: %s\n", yytext);}
{struct} {printf("STRUCT: %s\n", yytext);}
{return} {printf("RETURN: %s\n", yytext);}
{if} {printf("IF: %s\n", yytext);}
{else} {printf("ELSE: %s\n", yytext);}
{while} {printf("WHILE: %s\n", yytext);}
{id} {printf("ID: %s\n", yytext);}
. {printf("Unkonwn character: %s\n", yytext);}

%%