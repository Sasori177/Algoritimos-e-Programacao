/*
7) Desenvolva um algoritmo para calcular a quantidade de litros de combustível que um automóvel que faz
média de 12Km/L precisa para uma viagem. O usuário deve informar a distância do trajeto e o algoritmo
deve calcular a quantidade de litros através da seguinte fórmula: LitrosUsados = distância / 12
*/

#include <stdio.h>

void main () {
    float distancia;
    float lusados;
    float eficiencia;
    printf("Seja bem vindo(a), por favor a seguir informe os dados necessários para o cálculo de combustível a ser utilizado em determinada viagem.");
    printf("\nPor favor informe a distancia em Km a ser percorrida: ");
    scanf("%f", &distancia);
    printf("Por favor informe a eficiência em Km/L para o cálculo.(Exemplo: 12) ");
    scanf("%f", &eficiencia);
    lusados = distancia/eficiencia;
    printf("Para uma viagem de %.2fKm, sob uma eficiência de %.2fKm/L, será necessário %.2f litros de combustível", distancia, eficiencia, lusados);
}