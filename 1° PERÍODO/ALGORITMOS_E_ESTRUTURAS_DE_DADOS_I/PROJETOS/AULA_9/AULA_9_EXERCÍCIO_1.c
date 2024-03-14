// Faça um algoritmo que imprima na tela os 10 primeiros números inteiros maiores que 100.

#include <stdio.h>

int main() {
    int numero = 101;
    int contador = 0;

    printf("Os 10 primeiros números inteiros maiores que 100 são:\n");
    while (contador < 10) {
        printf("%d\n", numero);
        numero++;
        contador++;
    }

    return 0;
}
