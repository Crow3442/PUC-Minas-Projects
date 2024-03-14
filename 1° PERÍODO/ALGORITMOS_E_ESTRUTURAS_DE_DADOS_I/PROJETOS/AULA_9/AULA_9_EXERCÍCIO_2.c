// Faça um algoritmo que imprima os números ímpares existentes de entre 1(inclusive) e 9 (inclusive).

#include <stdio.h>

int main() {
    int numero = 1;

    printf("Números ímpares de 1 a 9:\n");
    while (numero <= 9) {
        if (numero % 2 != 0) {
            printf("%d\n", numero);
        }
        numero++;
    }

    return 0;
}
