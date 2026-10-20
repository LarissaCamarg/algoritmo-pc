#include<stdio.h>
#include<locale.h>

int main()
{
        setlocale(LC_CTYPE, "");

        float comprimento, largura;
        float perimetro, area;

        printf("Qual o comprimento do jardim (m)? ");
        scanf("%f", &comprimento);

        printf("Qual a largura do jardim (m)? ");
        scanf("%f", &largura);

        perimetro = 2 * (comprimento + largura);
        area = comprimento * largura;

        printf("O perímetro do jardim é: %.2f\n", perimetro);
        printf("Área do jardim é: %.2f", area);

        return 0;

}
