#include <stdio.h>

int main() {
    int alunos, monitores, total;

    printf("Digite o número de alunos: ");
    scanf("%d", &alunos);

    printf("Digite o número de monitores: ");
    scanf("%d", &monitores);

    total = alunos + monitores;

    if (total <= 50) {
        printf("É possível levar todos em uma única viagem.\n");
    } else {
        printf("Não é possível levar todos em uma única viagem.\n");
    }

    return 0;
}
