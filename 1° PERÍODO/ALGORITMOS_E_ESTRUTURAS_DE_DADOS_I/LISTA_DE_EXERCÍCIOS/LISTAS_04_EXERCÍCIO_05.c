/*
    5. Implemente um procedimento chamado primo que recebe como parâmetro um inteiro m, passado por valor, e dois outros inteiros, p1 e p2, passados por referência. 
    O procedimento deve armazenar em p1 o maior número primo menor do que m e deve armazenar em p2 o menor número primo maior do que m.
    
    Implemente também uma função main que solicita ao usuário o valor de m, chama procedimento primo e depois imprime o resultado.
*/

#include <stdio.h>

/*
a) O objetivo do procedimento/função:
   - Este procedimento encontra o maior número primo menor que m e o menor número primo maior que m.

b) O nome do procedimento/função:
   - primo

c) Os parâmetros de entrada:
   - m (inteiro) - o número inteiro m.
   - p1 (ponteiro para inteiro) - ponteiro para a variável que armazenará o maior número primo menor que m.
   - p2 (ponteiro para inteiro) - ponteiro para a variável que armazenará o menor número primo maior que m.

d) O tipo de dado da saída, caso seja uma função:
   - Não se aplica, pois é um procedimento.
*/

void primo(int m, int *p1, int *p2);


int ehPrimo(int num);

int main() {
    int m, p1, p2;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &m);
    
    primo(m, &p1, &p2);
    
    printf("O maior número primo menor que %d é: %d\n", m, p1);
    printf("O menor número primo maior que %d é: %d\n", m, p2);
    
    return 0;
}

void primo(int m, int *p1, int *p2) {
    *p1 = *p2 = -1;
    
    for (int i = m - 1; i >= 2; i--) {
        if (ehPrimo(i)) {
            *p1 = i;
            break;
        }
    }
    
    for (int i = m + 1;; i++) {
        if (ehPrimo(i)) {
            *p2 = i;
            break;
        }
    }
}

int ehPrimo(int num) {
    if (num <= 1) return 0; 
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    
    return 1;
}

// https://replit.com/@joaorezende500/Exercicio05