// Faça um algoritmo que receba dois número e mostre o maior.

#include <stdio.h>

int main() {
    float num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    if (num1 > num2) {
        printf("O primeiro número (%.2f) é maior.\n", num1);
    }

    if (num2 > num1) {
        printf("O segundo número (%.2f) é maior.\n", num2);
    }

    if (num1 == num2) {
        printf("Os números são iguais.\n");
    }

    return 0;
}