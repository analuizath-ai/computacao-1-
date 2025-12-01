#include <stdio.h>
#include <string.h>

#define QTD 100      
#define TAM 101     

float calculaMedia(char vetor[][TAM], int tamanho) {
    int i;
    int soma = 0;

    for (i = 0; i < tamanho; i++) {
        soma += strlen(vetor[i]);
    }

    return (float)soma / tamanho;
}

int main() {
    FILE *arquivo;
    char frases[QTD][TAM];
    char vetor[QTD][TAM];
    int i;
    float media;

    arquivo = fopen("frases.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return 1;
    }

    printf("Digite %d frases (até 100 caracteres):\n", QTD);

    for (i = 0; i < QTD; i++) {
        printf("Frase %d: ", i + 1);

        fgets(frases[i], TAM, stdin);

        int len = strlen(frases[i]);
        if (len > 0 && frases[i][len - 1] == '\n') {
            frases[i][len - 1] = '\0';
        }

        fprintf(arquivo, "%s\n", frases[i]);
    }

    fclose(arquivo);

    arquivo = fopen("frases.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return 1;
    }

    for (i = 0; i < QTD; i++) {
        fgets(vetor[i], TAM, arquivo);

        int len = strlen(vetor[i]);
        if (len > 0 && vetor[i][len - 1] == '\n') {
            vetor[i][len - 1] = '\0';
        }
    }

    fclose(arquivo);

    printf("\nStrings lidas do arquivo:\n");
    for (i = 0; i < QTD; i++) {
        printf("%d: %s\n", i + 1, vetor[i]);
    }

    media = calculaMedia(vetor, QTD);
    printf("\nMédia de caracteres por frase: %.2f\n", media);

    return 0;
}
