#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    int num1, num2, soma, subtracao, multiplicacao;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;

    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);

    return 0;
}
