//Escreva um algoritmo em C que leia um número e exiba na tela: o número lido, seu antecessor e seu sucessor. Use mensagens que deixe claro para o usuário o que está sendo exibido.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float n1, n2, resultado;

int main(){


 printf("Informe um numero: ");
 scanf("%f",&n1);

 printf("Informe outro numero: ");
 scanf("%f",&n2);

 resultado = n1+n2;
 printf("Soma: %f\n",resultado);

 resultado = n1*n2;
 printf("Produto: %f\n",resultado);

 resultado = n1-n2;
 printf("Diferenca: %f\n",resultado);

  resultado = n1/n2;
 printf("Divisão: %f\n",resultado);

    getch();
    return 0;
}
