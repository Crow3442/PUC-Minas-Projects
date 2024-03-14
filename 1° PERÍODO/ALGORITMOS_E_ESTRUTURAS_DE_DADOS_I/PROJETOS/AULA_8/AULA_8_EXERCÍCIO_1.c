/*
     Criar um programa que leia dois números inteiros, e que solicite ao usuário qual a operação deseja 
     realizar entre esses números. Caso o usuário digitar o caractere “*” será realizada uma multiplicação, 
     caso seja digitado o caractere “/” será realizada uma divisão, caso seja digitado o caractere “+” 
     será realizado uma adição, e caso seja digitado o caractere “-” será realizada uma subtração.
*/

#include <stdio.h>

int main() {
    int num1, num2;
    char operacao;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    printf("Escolha a operação desejada (+ para adição, - para subtração, * para multiplicação, / para divisão): ");
    scanf(" %c", &operacao); // Espaço antes do %c para consumir o caractere de nova linha

    switch (operacao) {
        case '+':
            printf("Resultado da adição: %d\n", num1 + num2);
            break;
        case '-':
            printf("Resultado da subtração: %d\n", num1 - num2);
            break;
        case '*':
            printf("Resultado da multiplicação: %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Resultado da divisão: %.2f\n", (float)num1 / num2);
            } else {
                printf("Erro: divisão por zero!\n");
            }
            break;
        default:
            printf("Operação inválida!\n");
            break;
    }

    return 0;
}