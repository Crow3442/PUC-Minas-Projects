// Faça um algoritmo para ler o raio de um círculo e calcular a sua área.

#include <stdio.h>

int main() {
    float raio, area;
    const float PI = 3.14159;

    printf("Digite o valor do raio do círculo: ");
    scanf("%f", &raio);

    area = PI * raio * raio;

    printf("A área do círculo é: %.2f\n", area);

    return 0;
}