//Escreva um algoritmo em C que lê um número inteiro, calcula e exibe na tela os valores correspondentes a 3%, 30% e 130% do valor informado.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float numero, resultado;
#define tres 0.03;
#define trinta 0.3;
#define centoEtrinta 1.3;

int main(){
 printf("Informe um numero: ");
 scanf("%f",&numero);

 resultado = numero*tres;
 printf("3: %f\n",resultado);

 resultado = numero*trinta;
 printf("30: %f\n",resultado);

 resultado = numero*centoEtrinta;
 printf("130: %f\n",resultado);

    getch();
    return 0;
}
