//2. Mostrar a m�dia aritm�tica entre 3 n�meros passados pelo usu�rio.

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

float n1, n2, n3, media;

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Informe um n�mero: ");
    scanf("%f", &n1);

    printf("Informe outro n�mero: ");
    scanf("%f", &n2);

    printf("Informe outro n�mero: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    printf("Resuldado: %.2f\n", media);

    getch();
    return 0;
}
