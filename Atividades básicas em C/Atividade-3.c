/*
3) Desenvolva um algoritmo para um programa que leia três valores inteiros e apresente como resultado o
valor da soma dos quadrados dos três valores lidos.
*/
#include <stdio.h>

void main () {
    int a;
    int b;
    int c;
    int soma;
    printf("Seja bem vindo(a), por favor informe a seguir tres valores inteiros.");
    printf("\nInforme o primeiro valor: ");
    scanf("%d", &a);
    printf("Informe o segundo valor: ");
    scanf("%d", &b);
    printf("Informe o terceiro valor: ");
    scanf("%d", &c);        
    soma = (a*a) + (b*b) + (c*c);
    printf("\nA soma dos quadrados dos valores informados (%d, %d, %d) e igual a: %d", a, b, c, soma);
    
}