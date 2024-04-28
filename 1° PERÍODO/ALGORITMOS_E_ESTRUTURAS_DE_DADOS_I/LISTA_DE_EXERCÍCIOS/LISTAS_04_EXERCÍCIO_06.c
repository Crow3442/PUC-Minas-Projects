/*
    Escreva um procedimento chamado teste que recebe um valor n passado “por valor” e dois inteiros b e k passados “por referência". 
    Seu procedimento deve armazenar em b e k valores tais que bk = n e b seja o menor valor possível.

    Implemente também uma função main que solicita ao usuário o valor de n, chama o procedimento criado e depois imprime o resultado.
*/

#include <stdio.h>

/*
a) O objetivo do procedimento/função:
   - Este procedimento recebe um valor n e calcula dois inteiros b e k de forma que b * k = n e b seja o menor valor possível.

b) O nome do procedimento/função:
   - teste

c) Os parâmetros de entrada:
   - n (inteiro) - o valor n passado por valor.
   - b (ponteiro para inteiro) - ponteiro para a variável que armazenará o valor de b, passado por referência.
   - k (ponteiro para inteiro) - ponteiro para a variável que armazenará o valor de k, passado por referência.

d) O tipo de dado da saída, caso seja uma função:
   - Não se aplica, pois é um procedimento.
*/

void teste(int n, int *b, int *k);

int main() {
    int n, b, k;
    
    printf("Digite um valor inteiro n: ");
    scanf("%d", &n);
    
    teste(n, &b, &k);
    
    printf("b = %d, k = %d\n", b, k);
    
    return 0;
}

void teste(int n, int *b, int *k) {
    *b = 1;
    *k = n;
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            *b = i;
            *k = n / i;
            break;
        }
    }
}


// https://replit.com/@joaorezende500/Exercicio06