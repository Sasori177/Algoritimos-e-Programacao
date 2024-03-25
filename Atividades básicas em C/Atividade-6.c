/*
6) Escreva um algoritmo que receba um valor em Real e a cotação do Dólar, calcule a conversão do valor e,
como saída, apresente o valor a ser convertido (R$), a cotação do Dólar e o valor da conversão ($). 
*/
#include <stdio.h>

void main () {
    float real;
    float cotacao;
    float conversao;
    printf("Seja bem vindo(a), por favor a seguir informe a cotação do dólar e o valor em R$ a ser convertido para $.");
    printf("\nPor favor informe a cotação do dólar: ");
    scanf("%f", &cotacao);
    printf("\nPor favor informe o valor em R$: ");
    scanf("%f", &real);    
    conversao = real/cotacao;
    printf("\nPara o valor em real de R$%.2f, sob uma cotação do dólar no valor de %.2f, se obtem o resultado aproximado de $%.2f doláres.", real, cotacao, conversao);
}