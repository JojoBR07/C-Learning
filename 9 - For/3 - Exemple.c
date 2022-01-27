#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

float notas, notas2, notas3, media;

int main(){
    setlocale(LC_ALL, "Portuguese");

    for(int i = 1; i <= 30; i++){
        printf("Aluno %d\n\n", i);

        do{
            printf("Informe a primeira nota (0 - 10): ");
            scanf("%f", &notas);
        }while((notas < 0) || (notas > 10));

        do{
            printf("Informe a segunda nota (0 - 10): ");
            scanf("%f", &notas2);
        }while((notas2 < 0) || (notas2 > 10));

        do{
            printf("Informe a terceira nota (0 - 10): ");
            scanf("%f", &notas3);
        }while((notas3 < 0) || (notas3 > 10));

        media = (notas + notas2 + notas3)/3;
        printf("\n\nNota 1: %.2f | Nota 2: %.2f | Nota 3: %.2f | Média: %.2f \n\n", notas, notas2, notas3, media);
    }

getch();
return 0;
}
