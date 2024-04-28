/*
     Observe o código abaixo. 
    
    ...
    int a=5,
     b=2;
    troca(&a, &b);
    printf("\n%i, %i", a, b);
    ...

    void troca(int *x, int *y){
        int aux;
        aux= *x;
        *x = *y;
        *y = aux;
    }

    a) Responda que valores serão escritos na tela após a execução.
    b) Comente cada linha do programa explicando que é ela faz e quais serão os valores as variáveis envolvidas naquela linha.




    int a=5, b=2; Declaração e inicialização das variáveis 'a' e 'b' com os valores 5 e 2, respectivamente.
    troca(&a, &b); Chamada da função 'troca', passando os endereços das variáveis 'a' e 'b'.
    printf("\n%i, %i", a, b); Imprime na tela os valores das variáveis 'a' e 'b'.

    void troca(int *x, int *y){ Declaração e definição da função 'troca', que recebe dois ponteiros para inteiros como parâmetros.
        int aux; Declaração da variável 'aux' do tipo inteiro.
        aux= *x; Atribuição do valor apontado por 'x' à variável 'aux'.
        *x = *y; Atribuição do valor apontado por 'y' à variável apontada por 'x'.
        *y = aux; Atribuição do valor da variável 'aux' à variável apontada por 'y'.
    }

    
    a) Após a execução, os valores escritos na tela serão: 2, 5. Isso ocorre porque a função troca troca os valores das variáveis 'a' e 'b', e em seguida, o printf imprime os novos valores.
    b) Comentários adicionados ao código explicando cada linha foram fornecidos acima.

*/

// https://replit.com/@joaorezende500/Exercicio03


