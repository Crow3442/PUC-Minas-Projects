/*
    Faça um algoritmo para ler dois inteiros (variáveis A e B) e efetuar as operações 
    de adição, subtração, multiplicação e divisão de A por B apresentando ao final os quatro resultados obtidos.

*/

#include <stdio.h>

int main() {
    int A, B;
    float soma, subtracao, multiplicacao, divisao;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    soma = A + B;
    subtracao = A - B;
    multiplicacao = A * B;

    if (B != 0)
        divisao = (float)A / B;
    else
        printf("Erro: divisão por zero!\n");

    printf("Soma de A e B: %.2f\n", soma);
    printf("Subtração de A por B: %.2f\n", subtracao);
    printf("Multiplicação de A por B: %.2f\n", multiplicacao);

    if (B != 0)
        printf("Divisão de A por B: %.2f\n", divisao);

    return 0;
}