/*
    Crie uma nova versão para a questão que calcula o número de dias vividos por uma pessoa até o último aniversário. 
    Modifique a função que implementa a leitura da idade pelo teclado. 
    Nela, substitua a estratégia de retornar o valor lido pela seguinte: o valor lido deverá ser armazenado na variável parametrizada por referência. 
    Teste a sua solução a partir da implementação de um main.
*/

#include <stdio.h>

/*
a) O objetivo do procedimento/função:
   - Esta função calcula o número de dias vividos por uma pessoa até seu último aniversário.

b) O nome do procedimento/função:
   - calcularDiasVividos

c) Os parâmetros de entrada:
   - idade (ponteiro para inteiro) - ponteiro para a variável que armazenará a idade da pessoa.

d) O tipo de dado da saída, caso seja uma função:
   - Não se aplica, pois é um procedimento.
*/
void calcularDiasVividos(int *idade) {
    // Solicita a idade da pessoa ao usuário
    printf("Digite a idade da pessoa: ");
    scanf("%d", idade);
}

int main() {
    int idade;
    
    calcularDiasVividos(&idade);
    
    int diasVividos = idade * 365;
    
    printf("Número de dias vividos até o último aniversário: %d\n", diasVividos);
    
    return 0;
}

// https://replit.com/@joaorezende500/Exercicio04
