#include <stdio.h>

int calculaDigitoVerificador(int num) {
	int x1, x2, x3, soma;

	x1 = num / 100;
	x2 = (num / 10) % 10;
	x3 = num % 10;

	soma = (1 * x1) + (2 * x2) + (3 * x3);
	return (soma % 11) % 10;
}

int main() {
	int numero;
	printf("Digite um numero de tres digitos: ");
	scanf("%d", &numero);

	printf("Digito verificador: %d\n", calculaDigitoVerificador(numero));

	return 0;
}
