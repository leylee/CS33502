#include <stdlib.h>
#include <stdio.h>
#include "lex.yy.h"

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

	while (yylex() != 0);
	return 0;
}
