/*
5) Elabore um programa que leia dois valores e apresente os resultados das quatro operações aritméticas
básicas realizadas entre eles.
*/

#include <stdio.h>

void main () {
    float a;
    float b;
    float r;
    printf("Seja bem vindo, por favor informe a seguir dois valores para a realização das operacoes aritmeticas basicas.");
    printf("\nInforme o primeiro numero: ");
    scanf("%f", &a);
    printf("Informe o segundo numero: ");
    scanf("%f", &b);
    r = a+b;
    printf("\nA soma dos números %.0f e %.0f é: %.0f", a, b, r);
    r = a-b;
    printf("\nA diferença dos números %.0f e %.0f é: %.0f", a, b, r);
    r = a*b;
    printf("\nO produto entre os números %.0f e %.0f é: %.0f", a, b, r);
    r = a/b;
    printf("\nO resultado da divisão entre os números %.0f e %.0f é: %.0f", a, b, r);
}