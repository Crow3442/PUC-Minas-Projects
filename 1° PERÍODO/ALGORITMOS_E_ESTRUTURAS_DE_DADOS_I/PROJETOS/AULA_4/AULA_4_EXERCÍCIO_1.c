// Desenvolva um algoritmo que receba dois números inteiros do usuário e apresente a soma deles

#include <stdio.h>

int main() {
    int num1, num2, soma;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("A soma dos números é: %d\n", soma);

    return 0;
}