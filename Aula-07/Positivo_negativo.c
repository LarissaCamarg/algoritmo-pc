#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    int quantidade;
    int positivos = 0;
    int negativos = 0;
    float numero, maior;

    printf("Quantos números serão digitados? ");
    scanf("%d", &quantidade);

    for (int i = 1; i <= quantidade; i++)
    {
        printf("Digite o %dº número: ", i);
        scanf("%f", &numero);

        if (i == 1)
        {
            maior = numero;
        }

        if (numero > 0)
        {
            positivos++;
        }
        else if (numero < 0)
        {
            negativos++;
        }

        if (numero > maior)
        {
            maior = numero;
        }
    }

    printf("\nQuantidade de positivos: %d\n", positivos);
    printf("Quantidade de negativos: %d\n", negativos);
    printf("Maior valor: %.2f\n", maior);

    return 0;
}
