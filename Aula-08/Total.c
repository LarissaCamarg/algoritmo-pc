#include <stdio.h>
#include<locale.h>

int main() {

        setlocale(LC_CTYPE, "");
    int vendas[3][4];
    int totalProduto;
    int totalGeral = 0;


    for (int produto = 0; produto < 3; produto++) {

        for (int dia = 0; dia < 4; dia++) {

            printf("Digite a quantidade do produto %d no dia %d: ",
                   produto + 1, dia + 1);

            scanf("%d", &vendas[produto][dia]);
        }
    }

    for (int produto = 0; produto < 3; produto++) {

        totalProduto = 0;

        for (int dia = 0; dia < 4; dia++) {
            totalProduto = totalProduto + vendas[produto][dia];
        }

        printf("Produto %d: %d unidades\n", produto + 1, totalProduto);

        totalGeral = totalGeral + totalProduto;
    }

    printf("Total geral: %d unidades\n", totalGeral);

    return 0;
}
