#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ehVogal(char c) {
	c = tolower((unsigned char)c);
	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int ehConsoante(char c) {
	c = tolower((unsigned char)c);
	if (c >= 'a' && c <= 'z' && !ehVogal(c)) {
		return 1;
	}
	return 0;
}

void inverteString(char s[]) {
	int i = 0;
	int j = (int)strlen(s) - 1;
	while (i < j) {
		char temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}

int main() {
	char original[4][3][100];
	char modificada[4][3][100];
	int i, j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("Digite a string da posicao [%d][%d]: ", i, j);
			scanf("%99s", original[i][j]);
		}
	}

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			strcpy(modificada[i][j], original[i][j]);
		}
	}

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			char *s = modificada[i][j];
			int tamanho = (int)strlen(s);

			if (tamanho == 0) {
				continue;
			}

			char primeiro = s[0];
			char ultimo = s[tamanho - 1];

			if (ehVogal(primeiro) && ehConsoante(ultimo)) {
				inverteString(s);
			}
		}
	}

	printf("\nMatriz Original:\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("%s ", original[i][j]);
		}
		printf("\n");
	}

	printf("\nMatriz Modificada:\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("%s ", modificada[i][j]);
		}
		printf("\n");
	}

	return 0;
}
