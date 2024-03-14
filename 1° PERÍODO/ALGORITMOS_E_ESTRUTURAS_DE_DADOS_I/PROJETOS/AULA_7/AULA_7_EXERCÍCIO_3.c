// Faça um algoritmo que leia 3 números inteiros e exiba os 3 números em ordem crescente.

#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número inteiro: ");
    scanf("%d", &num3);

    if (num1 <= num2 && num1 <= num3) {
        if (num2 <= num3) {
            printf("Os números em ordem crescente são: %d, %d, %d\n", num1, num2, num3);
        } else {
            printf("Os números em ordem crescente são: %d, %d, %d\n", num1, num3, num2);
        }
    } else if (num2 <= num1 && num2 <= num3) {
        if (num1 <= num3) {
            printf("Os números em ordem crescente são: %d, %d, %d\n", num2, num1, num3);
        } else {
            printf("Os números em ordem crescente são: %d, %d, %d\n", num2, num3, num1);
        }
    } else {
        if (num1 <= num2) {
            printf("Os números em ordem crescente são: %d, %d, %d\n", num3, num1, num2);
        } else {
            printf("Os números em ordem crescente são: %d, %d, %d\n", num3, num2, num1);
        }
    }

    return 0;
}