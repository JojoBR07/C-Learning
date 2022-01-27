//Exercicio 2 - do while

#include <stdlib.h>
#include <stdio.h>

main(){
float chico, ze;
int ano;

chico = 1.50;
ze = 1.10;
ano=0;

while(ze<=chico){
   ze = ze + 0.03;

   chico = chico + 0.02;

   ano = ano+1;
}

printf("\n E preciso %d anos. Ze tera % .2f e Chico %.2f ", ano, ze, chico);
}