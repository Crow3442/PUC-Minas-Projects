// Faça um programa para somar 10 notas e apresentar a média aritmética das notas na tela.

#include <stdio.h>

int main() {
    float notas[10];
    float soma = 0;
    float media;
    int i;

    printf("Digite as 10 notas:\n");

    for (i = 0; i < 10; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / 10;

    printf("A média das notas é: %.2f\n", media);

    return 0;
}
