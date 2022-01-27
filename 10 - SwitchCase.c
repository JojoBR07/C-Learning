#include <stdlib.h>
#include <stdio.h>

//ex3
main(){

int voto;
int c1=0, c2=0, c3=0, c4=0, cNulo=0, cBr=0;

do{ // Do do grande la�o

   do{ // Do da valida��o de entrada de dados
      printf("\nEntre com o voto: ");
      scanf("%d", &voto);

      if(voto <0 || voto>6)
         printf(" \n Dado invalido, entre novamente");

   }while(voto <0 || voto>6);

   switch(voto){

      case 1: c1 = c1 +1;
         break;

      case 2: c2 = c2 +1;
         break;

      case 3: c3 = c3 +1;
         break;

      case 4: c4 = c4 +1;
         break;

      case 5: cNulo = cNulo +1;
         break;

      case 6: cBr = cBr +1;
         break;

      default:
         break;
   }

}while(voto>=1 && voto <=6);

printf ("\n Total de votos para cada candidato: ");
printf("\n Candidato 1: %d, Candidato 2: %d, Candidato 3: %d, Candidato 4: %d ", c1, c2, c3, c4);
printf("\n Total de votos nulos: %d ", cNulo);
printf("\n Total de votos brancos: %d ", cBr);

return 0;
}
