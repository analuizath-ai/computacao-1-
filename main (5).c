#include <stdio.h>

int arredonda(float x) {
	int inteiro = (int)x;
	float frac = x - inteiro;

	if (x >= 0) {

		return (frac >= 0.5f) ? inteiro + 1 : inteiro;
	} else {

		return (frac <= -0.5f) ? inteiro - 1 : inteiro;
	}
}

int main() {
	float num;

	printf("Digite um numero: ");
	scanf("%f", &num);

	printf("O valor arredondado de %.2f eh %d\n", num, arredonda(num));

	return 0;
}
