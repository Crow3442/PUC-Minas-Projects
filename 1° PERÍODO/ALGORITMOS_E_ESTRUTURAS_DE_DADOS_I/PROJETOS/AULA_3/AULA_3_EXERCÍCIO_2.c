// Faça um programa que calcule e mostre a área de um círculo.

#include <stdio.h>

int main() {
    float raio, area;
    const float PI = 3.14159;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    area = PI * raio * raio;

    printf("A área do círculo é: %.2f\n", area);

    return 0;
}