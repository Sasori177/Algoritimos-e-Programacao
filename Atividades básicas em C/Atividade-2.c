/* 
2) Escreva um algoritmo para ler dos valores para as variáveis A e B. O algoritmo deve efetuar a troca dos
valores, de forma que a variável A passe a possuir o valor de B e a variável B passe a possuir o valor de
A. O algoritmo deve apresentar os valores ao usuário, antes e depois da troca
*/

#include <stdio.h>
float a;
float b;
float aux;

void main () {
    printf("Seja bem vindo ao exercicio de numero 2.");
    printf("\nPor favor, a seguir informe o valor de A: ");
    scanf("%f", &a);
    printf("Por favor, a seguir informe o valor de B: ");
    scanf("%f", &b);
    printf("Os valores de A e B eram, respectivamente: %f, %f. Apos a troca os valores sao respectivamente: %f, %f", b, a, a, b); 
    getch();
}   