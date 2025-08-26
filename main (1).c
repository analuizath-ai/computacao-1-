#include <stdio.h>
 int main() {
    float base, altura, perimetro, area;

  int codigo;
 
 
  printf("Digite o valor da base:");
  scanf ("%f", &base);

  printf("Digite o valor da altura:");
  scanf ("%f", &altura);
 
  perimetro = 2 * base + 2 * altura;
  area = base * altura;
 
  printf("Perímetro: %.2f\n", perimetro);
  printf("Área: %.2f\n", area);
  
  if (perimetro > area) {
    printf("O perímetro é maior que a área.\n");
  } else if (area > perimetro) {
    printf("A área é maior que o perímetro.\n");
  } else {
    printf("O perímetro e a área são iguais.\n");
  }
  return 0;
}