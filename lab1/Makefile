.PHONY: run_yylex
run_yylex: build_yylex
	./yylex

build_yylex: yylex

yylex: lex.yy.c main.c lex.yy.h
	gcc main.c lex.yy.c -o yylex -lfl

lex.yy.%: lexical.l
	flex --outfile=lex.yy.c --header-file=lex.yy.h lexical.l
