#include <stdio.h>
#include<locale.h>

int main() {

        setlocale(LC_CTYPE, "");
    const char *produtos[] = {"cafe", "bolos", "coxinhas"};
    const char *dias_semana[] = {"seg", "ter", "qua", "qui"};

    int vendas[3][4];
    int totalProduto;
    int totalGeral = 0;

    for (int produto = 0; produto < 3; produto++) {

        totalProduto = 0;

        for (int dia = 0; dia < 4; dia++) {

            printf("Digite a qtd de %s vendidos na %s: ",
                   produtos[produto], dias_semana[dia]);

            scanf("%d", &vendas[produto][dia]);

            totalProduto = totalProduto + vendas[produto][dia];
        }

        printf("\n");
    }

    for (int produto = 0; produto < 3; produto++) {

        totalProduto = 0;

        for (int dia = 0; dia < 4; dia++) {
            totalProduto = totalProduto + vendas[produto][dia];
        }

        printf("%s: %d unidades\n",
               produtos[produto], totalProduto);

        totalGeral = totalGeral + totalProduto;
    }

    printf("Total geral: %d unidades\n", totalGeral);

    return 0;
}
