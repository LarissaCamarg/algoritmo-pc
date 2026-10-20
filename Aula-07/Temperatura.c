#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    char municipio[50];
    float temperatura, soma = 0, media;
    int abaixo10 = 0;

    for (int i = 1; i <= 5; i++)
    {
        printf("\nDigite o nome do %dº município: ", i);
        scanf("%s", municipio);

        printf("Digite a temperatura média: ");
        scanf("%f", &temperatura);

        soma += temperatura;

        if (temperatura < 10)
        {
            abaixo10++;
        }
    }

    media = soma / 5;

    printf("\nTemperatura média da região: %.2f °C\n", media);
    printf("Quantidade de municípios abaixo de 10 °C: %d\n", abaixo10);

    return 0;
}
