/* 1) Faça um algoritmo para calcular o volume de uma lata cilíndrica através da seguinte fórmula:
Vol = 3,14. r². h. O algoritmo deve receber o valor do raio (r) e da altura (h) e, após calcular o
volume, mostrar o resultado ao usuário. Procure empregar o conceito de constantes e variáveis neste problema */

#include <stdio.h>

float r;
float h;
float area;
int main() {
    
    printf("Seja bem vindo, por favor informe a seguir a altura e raio do cilindro a ser calculado.\n");
    printf("\t Por favor insira a altura do cilindro: ");
    scanf("%f", &h);
    printf("\t Por favor insira o raio do cilindro: ");
    scanf("%f", &r);
    
    area = r*r*h*3.14;
    
    printf("A area do cilindro e de : %f", area);
    return 0;
    
}
