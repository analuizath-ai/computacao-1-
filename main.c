#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ehVogal(char c) {
	c = tolower(c);
	return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');

}

void inverter(char s[]) {
	int i = 0;
	int j = strlen(s) - 1;
	char temp;

	while (i < j) {
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}

int main() {
	char original[4][3][100];
	char modificada[4][3][100];

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			printf("Digite a string da posiC'C#o [%d][%d]: ", i, j);
			fgets(original[i][j], 100, stdin);

			original[i][j][strcspn(original[i][j], "\n")] = '\0';
			strcpy(modificada[i][j], original[i][j]);
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			char *str = modificada[i][j];

			int tam = strlen(str);

			if (tam > 0 && ehVogal(str[0]) && ehVogal(str[tam-1])) {
				inverter(str);
			}
		}
	}

	printf("\nMatriz Original:\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			printf("[%d][%d] %s\n", i, j, original[i][j]);
		}
	}

	printf("\nMatriz Modificada:\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			printf("[%d][%d] %s\n", i, j, modificada[i][j]);
		}
	}

	return 0;

}