build: yylex

.PHONY: run
run: build
	./yylex

yylex: lex.yy.c main.c lex.yy.h syntax.tab.c syntax.tab.h node.c node.h util.h util.c
	gcc -g main.c lex.yy.c syntax.tab.c node.c util.c -o yylex -lfl

lex.yy.%: lexical.l
	flex --outfile=lex.yy.c --header-file=lex.yy.h lexical.l

syntax.tab.%: syntax.y
	bison -d syntax.y