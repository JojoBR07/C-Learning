//4. L� dois n�meros e mostra a soma.

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

float n1, n2, resultado;

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Informe um n�mero: ");
    scanf("%f",&n1);

    printf("Informe o n�mero: ");
    scanf("%f", &n2);

    getch();
    return 0;
}
