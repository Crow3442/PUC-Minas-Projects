/*
    Construa um algoritmo que realize a soma de dois números reais. Nele, construa as seguintes funções:
    
    (a) um procedimento que se encarrega de apresentar o programa na tela;
    (b) uma função float que receba dois valores reais e retorna a soma dos dois parâmetros recebidos;
    (c) um procedimento que receba um valor real relativo ao resultado da soma e o escreva na tela;
    (d) uma função main que se encarregue de estabelecer o fluxo das chamadas das funções acima para atender ao propósito desta questão.
*/

#include <stdio.h>

/*
a) O objetivo do procedimento/função:
   - Este procedimento tem como objetivo apresentar o programa na tela.

b) O nome do procedimento/função:
   - apresentarPrograma

c) Os parâmetros de entrada:
   - Não há parâmetros de entrada para este procedimento.

d) O tipo de dado da saída, caso seja uma função:
   - Não se aplica, pois é um procedimento.
*/
void apresentarPrograma() {
    printf("Este programa realiza a soma de dois números reais.\n");
}

/*
a) O objetivo do procedimento/função:
   - Esta função recebe dois valores reais e retorna a soma dos dois parâmetros recebidos.

b) O nome do procedimento/função:
   - somarNumerosReais

c) Os parâmetros de entrada:
   - num1 (float) - primeiro número real
   - num2 (float) - segundo número real

d) O tipo de dado da saída, caso seja uma função:
   - float - a soma dos dois números reais.
*/
float somarNumerosReais(float num1, float num2) {
    return num1 + num2;
}

/*
a) O objetivo do procedimento/função:
   - Este procedimento recebe um valor real relativo ao resultado da soma e o escreve na tela.

b) O nome do procedimento/função:
   - escreverResultadoSoma

c) Os parâmetros de entrada:
   - resultadoSoma (float) - o resultado da soma dos dois números reais.

d) O tipo de dado da saída, caso seja uma função:
   - Não se aplica, pois é um procedimento.
*/
void escreverResultadoSoma(float resultadoSoma) {
    printf("O resultado da soma é: %.2f\n", resultadoSoma);
}

int main() {
    float num1, num2;
    
    apresentarPrograma();
    
    printf("Digite o primeiro número real: ");
    scanf("%f", &num1);
    printf("Digite o segundo número real: ");
    scanf("%f", &num2);
    
    float resultadoSoma = somarNumerosReais(num1, num2);
    
    escreverResultadoSoma(resultadoSoma);
    
    return 0;
}

// https://replit.com/@joaorezende500/Exercicio02
