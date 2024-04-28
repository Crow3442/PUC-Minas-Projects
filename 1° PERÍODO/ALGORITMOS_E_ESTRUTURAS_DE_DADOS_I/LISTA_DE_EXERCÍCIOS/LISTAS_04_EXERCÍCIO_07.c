/*
    7. Crie um programa que receber três valores reais, calcule e determina o segundo maior valor. 
    Utilize a estratégia de ordenar os três valores lidos. O seu programa deverá resolver esse problema de diferentes maneiras a serem implementadas:

    a) Um procedimento que recebe parâmetros por valor e mostra o resultado;
    b) Uma função que recebe parâmetros por valor e retorna o resultado para o main;
    c) Um procedimento que recebe os valores por parâmetro e retorna por referência o segundo maior para o main; 
    
    O programa deverá conter, além da função principal, as seguintes outras:
    
    d) Um procedimento para ordenar três valores reais (passagem de parâmetro por referência);
    e) Uma função para escrever o resultado (o segundo maior valor lido).
*/

#include <stdio.h>

/*
a) O objetivo do procedimento/função:
   - Este procedimento recebe três valores reais, calcula e determina o segundo maior valor.

b) O nome do procedimento/função:
   - encontrarSegundoMaior

c) Os parâmetros de entrada:
   - a (float) - primeiro valor real.
   - b (float) - segundo valor real.
   - c (float) - terceiro valor real.
   - segundoMaior (ponteiro para float) - ponteiro para a variável que armazenará o segundo maior valor.

d) O tipo de dado da saída, caso seja uma função:
   - Não se aplica, pois é um procedimento.
*/

void ordenarValores(float *x, float *y, float *z);

void encontrarSegundoMaior(float a, float b, float c, float *segundoMaior);

int main() {
    float a, b, c, segundoMaior;
    
    printf("Digite três valores reais separados por espaços: ");
    scanf("%f %f %f", &a, &b, &c);
    
    ordenarValores(&a, &b, &c);
    
    encontrarSegundoMaior(a, b, c, &segundoMaior);
    
    printf("O segundo maior valor é: %.2f\n", segundoMaior);
    
    return 0;
}

void ordenarValores(float *x, float *y, float *z) {
    float temp;
    
    if (*x > *y) {
        temp = *x;
        *x = *y;
        *y = temp;
    }
    if (*x > *z) {
        temp = *x;
        *x = *z;
        *z = temp;
    }
    if (*y > *z) {
        temp = *y;
        *y = *z;
        *z = temp;
    }
}

void encontrarSegundoMaior(float a, float b, float c, float *segundoMaior) {
    *segundoMaior = b;
}

// https://replit.com/@joaorezende500/Exericio07