/*
    Faça um algoritmo que receba um número positivo e maior que zero, calcule e mostre:

    - o número digitado ao quadrado;
    - o número digitado ao cubo;
    - a raiz quadrada do número digitado;
    - a raiz cúbica do número digitado.

*/

#include <stdio.h>
#include <math.h>

int main() {
    float numero, quadrado, cubo, raiz_quadrada, raiz_cubica;

    printf("Digite um número positivo e maior que zero: ");
    scanf("%f", &numero);

    quadrado = pow(numero, 2);
    cubo = pow(numero, 3);
    raiz_quadrada = sqrt(numero);
    raiz_cubica = cbrt(numero);

    printf("Número ao quadrado: %.2f\n", quadrado);
    printf("Número ao cubo: %.2f\n", cubo);
    printf("Raiz quadrada do número: %.2f\n", raiz_quadrada);
    printf("Raiz cúbica do número: %.2f\n", raiz_cubica);

    return 0;
}
