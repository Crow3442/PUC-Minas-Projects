/*
    Construa uma função que receba a idade de uma pessoa, calcule o retorne o número de dias por ela vividos até o seu último aniversário 
    (fique à vontade para ignorar o impacto dos anos bissextos).

    Main: a função main deverá ler da tela a data no formato d/m/a e posteriormente invocar a função criada. 
    Feito isso, o algoritmo deverá exibir na tela um número inteiro.
*/

#include <stdio.h>

/*
a) O objetivo do procedimento/função:
   - Esta função calcula o número de dias vividos por uma pessoa até seu último
aniversário.

b) O nome do procedimento/função:
   - calcularDiasVividos

c) Os parâmetros de entrada:
   - idade (inteiro) - a idade da pessoa.

d) O tipo de dado da saída, caso seja uma função:
   - int - o número de dias vividos até o último aniversário.
*/


int calcularDiasVividos(int idade) {
  return idade * 365;
}

int main() {
  int idade;

  printf("Digite a idade da pessoa: ");
  scanf("%d", &idade);

  int diasVividos = calcularDiasVividos(idade);
  printf("Número de dias vividos até o último aniversário: %d\n", diasVividos);

  return 0;
}

// https://replit.com/@joaorezende500/Exercicio01
