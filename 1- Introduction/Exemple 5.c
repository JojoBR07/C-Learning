//5. L� um n�mero e mostra a ter�a parte deste n�mero.

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

float numero, resultado;

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Informe um numero: ");
    scanf("%f", &numero);

    resultado = numero / 3;
    printf("Resultado: %.2f\n", resultado);

    getch();
    return 0;
}
