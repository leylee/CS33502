#include <stdlib.h>
#include <stdio.h>
#include "lex.yy.h"
#include "syntax.tab.h"

extern YYSTYPE yyval;

int main(int argc, char* argv[]) {
	if (argc > 2) {
		printf("Usage: %s [src_file]\n", argv[0]);
		return 1;
	}
	if (argc == 2) {
		if (!(yyin = fopen(argv[1], "r"))) {
			perror(argv[1]);
			return 1;
		}
	}

	int type;
	while (type = yyparse()) {
		printf("%d\n", type);
	};
	return 0;
}
