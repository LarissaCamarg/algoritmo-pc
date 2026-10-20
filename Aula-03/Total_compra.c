#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_CTYPE, "");
    float comprimento, largura, area, valor, total_pagar;
    int qte_caixas;

    printf("Qual é o comprimento da área (em metros?) ");
    scanf("%f", &comprimento);

    printf("Qual é a largura da área (em metros?) ");
    scanf("%f", &largura);

    printf("Qual é o valor de cada caixa? ");
    scanf("%f", &valor);

    area = comprimento * largura;
    qte_caixas = ceil(area/2.5);
    total_pagar = qte_caixas * valor;


    printf("Área total a ser revestida: %.2f m²\n ", area);
    printf("Quantidade de caixas necessárias: %.2d\n",  qte_caixas);
    printf("Custo total da compra: %.2f\n", total_pagar);

    return 0;
}
