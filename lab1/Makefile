.PHONY: run_yylex
run_yylex: build_yylex
	./yylex

build_yylex: yylex

yylex: lex.yy.c main.c lex.yy.h syntax.tab.c syntax.tab.h node.c node.h
	gcc -g main.c lex.yy.c syntax.tab.c node.c -o main -lfl

lex.yy.%: lexical.l
	flex --outfile=lex.yy.c --header-file=lex.yy.h lexical.l

syntax.tab.%: syntax.y
	bison -d syntax.y