/*
9) Faça um algoritmo que solicite a idade de 4 pessoas. O algoritmo deve calcular a média aritmética das
idades e apresentar o resultado na tela.
*/

#include <stdio.h>

void main () {
    int a;
    int b;
    int c;
    int d;
    float media;
    printf("Seja bem vindo(a), por favor informe a seguir quatro idades.");
    printf("\nPor favor informe a primeira idade: ");
    scanf("%d", &a);
    printf("Por favor informe a segunda idade: ");
    scanf("%d", &b);
    printf("Por favor informe a terceira idade: ");
    scanf("%d", &c);
    printf("Por favor informe a quarta idade: ");
    scanf("%d", &d);
    if (a || b || c || d == 0) {
        printf("********************************************");
        printf("\t\nALERTA! Informe uma idade diferente de 0");
        printf("\n********************************************");
    }
    else {
        media = (a+b+c+d)/4;
        printf("A média aritmética das idades %d, %d, %d e %d é aproximadamente: %.2f.", a, b, c, d, media);
    }
}