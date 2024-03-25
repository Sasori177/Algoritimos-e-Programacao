/*
8) Escreva um algoritmo que peça para o usuário informar a sua idade e, em seguida, calcule e apresente o
dobro e o triplo da idade informada.
*/

#include <stdio.h>
void main (){
    int idade;
    int dobroidade;
    int triploidade;
    printf("Seja bem vindo(a), por favor informe sua idade: ");
    scanf("%d", &idade);
    dobroidade = idade*2;
    triploidade = idade*3;
    printf("O dobro da sua idade(%d) e o triplo da mesma são respectivamente: %d e %d", idade, dobroidade, triploidade);
}
