#include <stdio.h>
#include <locale.h>

int main() {
     setlocale(LC_CTYPE, "");
    FILE *arquivo;
    int codigo;
    int quantidade = 0;
    float valor, total = 0.0, maior = 0.0;

    arquivo = fopen("vendas.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    while (fscanf(arquivo, "%d %f", &codigo, &valor) == 2) {
        quantidade++;
        total += valor;

        if (valor > maior) {
            maior = valor;
        }
    }

    fclose(arquivo);

    printf("Quantidade de vendas: %d\n", quantidade);
    printf("Total vendido: R$ %.2f\n", total);
    printf("Maior venda: R$ %.2f\n", maior);

    return 0;
}
