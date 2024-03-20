/*
    Faça um programa para receber 15 números digitados por um usuário, identificar o 
    maior e o menor número digitado. Mostre na tela o maior e o menor número.
*/

#include <stdio.h>

int main() {

    int numeros[15];
    int maior, menor;
    int i;

    printf("Digite 15 números:\n");

    for (i = 0; i < 15; i++) {
        scanf("%d", &numeros[i]);
    }

    maior = menor = numeros[0];

    // Encontrando o maior e o menor número
    for (i = 1; i < 15; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    printf("O maior número é: %d\n", maior);
    printf("O menor número é: %d\n", menor);

    return 0;
}
