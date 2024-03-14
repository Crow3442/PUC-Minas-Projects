/*
    Desenvolva um algoritmo que receba a nota de um aluno, entre 0 e 100, e o nome de uma 
    disciplina, depois exiba uma mensagem na tela informando se ele foi aprovado ou reprovado na disciplina. 
    
    Para ser aprovado sua nota deve ser >=60.

*/

#include <stdio.h>

int main() {
    float nota;
    char disciplina[50];

    printf("Digite o nome da disciplina: ");
    scanf("%s", disciplina);

    printf("Digite a nota do aluno na disciplina %s: ", disciplina);
    scanf("%f", &nota);

    if (nota >= 60) {
        printf("O aluno foi aprovado na disciplina %s!\n", disciplina);
    } else {
        printf("O aluno foi reprovado na disciplina %s.\n", disciplina);
    }

    return 0;
}