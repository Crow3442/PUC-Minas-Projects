/*
    Crie um programa que exibe se um dia é dia útil, fim de semana ou 
    dia inválido dado o número referente ao dia.
    
    Considere que domingo é o dia 1 e sábado é o dia 7.
*/

#include <stdio.h>

int main() {
    int dia;

    printf("Digite o número referente ao dia (1 para domingo, 2 para segunda, ..., 7 para sábado): ");
    scanf("%d", &dia);

    switch (dia) {
        case 1:
        case 7:
            printf("Fim de semana\n");
            break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            printf("Dia útil\n");
            break;
        default:
            printf("Dia inválido\n");
            break;
    }

    return 0;
}
