#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float venda, total = 0;

    for (int i = 1; i <= 7; i++)
    {
        printf("Digite o valor das vendas do %dº dia: ", i);
        scanf("%f", &venda);

        total += venda;
    }

    printf("\nTotal vendido na semana: R$ %.2f\n", total);

    return 0;
}
