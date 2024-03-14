/*
    Desenvolva um algoritmo que receba a data atual e a data de nascimento do usuário e informa a sua idade em:

    - dias
    - semanas
    - meses
    - ano

*/

#include <stdio.h>

int main() {
    int dia_atual, mes_atual, ano_atual;
    int dia_nasc, mes_nasc, ano_nasc;
    int idade_dias, idade_semanas, idade_meses, idade_anos;

    printf("Digite a data atual (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia_atual, &mes_atual, &ano_atual);

    printf("Digite a data de nascimento (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia_nasc, &mes_nasc, &ano_nasc);

    // Cálculo da idade em dias
    idade_dias = (ano_atual - ano_nasc) * 365 + (mes_atual - mes_nasc) * 30 + (dia_atual - dia_nasc);

    // Cálculo da idade em semanas
    idade_semanas = idade_dias / 7;

    // Cálculo da idade em meses
    idade_meses = (ano_atual - ano_nasc) * 12 + (mes_atual - mes_nasc);

    // Cálculo da idade em anos
    idade_anos = ano_atual - ano_nasc;

    printf("Idade em dias: %d\n", idade_dias);
    printf("Idade em semanas: %d\n", idade_semanas);
    printf("Idade em meses: %d\n", idade_meses);
    printf("Idade em anos: %d\n", idade_anos);

    return 0;
}