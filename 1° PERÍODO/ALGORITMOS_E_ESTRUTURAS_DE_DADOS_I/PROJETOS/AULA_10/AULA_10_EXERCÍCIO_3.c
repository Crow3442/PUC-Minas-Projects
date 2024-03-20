// Faça um programa que leia um número N e mostre na tela o valor lido e o fatorial desse valor.

#include <stdio.h>

int main() {

    int n;
    int fatorial = 1;
    int i;

    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &n);

    // Calculando o fatorial
    for (i = 1; i <= n; i++) {
        fatorial *= i;
    }

    printf("O fatorial de %d é: %d\n", n, fatorial);

    return 0;
}

