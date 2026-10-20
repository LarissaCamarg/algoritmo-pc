#include <stdio.h>
#include <locale.h>
//somar somente n�meros impares

int main()
{
    setlocale(LC_CTYPE, "");

    int numero, soma = 0;

    printf("\nDigite um n�mero: ");
    scanf("%d", &numero);

    while(numero != 0) {

        if(numero % 2 != 0) {
            soma = soma + numero;
        }

        printf("\nDigite um n�mero: ");
        scanf("%d", &numero);
    }

    printf("\nSoma dos n�meros impares: %d", soma);

    return 0;
}
