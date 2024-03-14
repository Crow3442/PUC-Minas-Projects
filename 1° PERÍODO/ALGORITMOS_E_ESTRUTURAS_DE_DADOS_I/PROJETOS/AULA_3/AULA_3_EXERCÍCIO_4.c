// Faça um programa que receba dois números maiores que zero, calcule e mostre um elevado ao outro

#include <stdio.h>
#include <math.h>

int main() {
    float base, expoente, resultado;

    printf("Digite a base: ");
    scanf("%f", &base);

    printf("Digite o expoente: ");
    scanf("%f", &expoente);

    resultado = pow(base, expoente);

    printf("%.2f elevado a %.2f é igual a: %.2f\n", base, expoente, resultado);

    return 0;
}