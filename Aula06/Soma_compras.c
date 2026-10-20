#include <stdio.h>
#include <locale.h>
//cpf, e soma de compras

int main()
{
    setlocale(LC_CTYPE, "");

    int cpf, i;
    float preco=1, total_compra = 0;

    printf("Digite seu CPF: ");
    scanf("%d", &cpf);

    for(i = 0; i < 5; i++) {

        printf("Digite o preco %d: R$ ", i + 1);
        scanf("%f", &preco);

        total_compra = total_compra += preco;
    }

    printf("\nCPF: %d", cpf);
    printf("\nTotal da compra: R$ %.2f", total_compra);

    return 0;
}
