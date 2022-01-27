//Escreva um algoritmo em C que leia um número e imprima o seu quadrado no formato “Quadrado: valor”.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int numero, quadrado;


int main(){
          printf("Informe um valor inteiro: ");
          scanf("%d",&numero);


          quadrado = numero*numero;


          printf("Quadrado: %d\n",quadrado);

   getch();
   return 0;
}
