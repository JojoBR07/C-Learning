//2. Mostrar a média aritmética entre 3 números passados pelo usuário.

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

float n1, n2, n3, media;

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Informe um número: ");
    scanf("%f", &n1);

    printf("Informe outro número: ");
    scanf("%f", &n2);

    printf("Informe outro número: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    printf("Resuldado: %.2f\n", media);

    getch();
    return 0;
}
