#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
	# expected values
	int tokenSize = 16;
	int tokenCount = 128;

	char expr[tokenSize * tokenCount];
	int ind = 0;

	for (int i = 1; i < argc; i++) {
		int argSize = strlen(argv[i]);

		for (int j = 0; j < argSize; j++) {
			char currChar = argv[i][j];

			if (isspace(currChar)) {
				continue;
			}

			printf("%c", argv[i][j]);
			ind++;
		}
	}

	// print out the expression without spaces
	printf("Expression without spaces: ");
	for (int i = 0; i < ind; i++) {
		printf("%c", expr[i]);
	}

	printf("\n");

	# tokenize

	# list of token as strings
	char tokens[tokenCount][tokenSize]

	int tokInd = 0;
	int chrInd = 0;
	bool isNeg = True;

	for (int i = 0; i < ind; i++) {
		if () {
			
		}
		else if () {
			# next token
		}
	}
} 
