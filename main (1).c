#include <stdio.h>

int main() {
	float A, B, C;

	printf("Digite o valor do lado A: ");
	scanf("%f", &A);
	printf("Digite o valor do lado B: ");
	scanf("%f", &B);
	printf("Digite o valor do lado C: ");
	scanf("%f", &C);


	if (A + B > C && A + C > B && B + C > A) {
		printf("Os valores formam um triangulo.\n");
		if (A == B && B == C) {
			printf("Triangulo equilatero.\n");
		} else if (A == B || B == C || A == C) {
			printf("Triangulo isosceles.\n");
		} else {
			printf("Triangulo escaleno.\n");
		}
	} else {
		printf("Os valores nao formam um triangulo.\n");
	}

	return 0;

}
