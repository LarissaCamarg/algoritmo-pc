#include<stdio.h>
#include<locale.h>

int main()
{
    FILE *arquivo;
    setlocale(LC_CTYPE, "");
    int i, num;
    char dia_semana[4];
    float consumo;

    arquivo = fopen("consumo.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    printf("Digite a quantidade de registros: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        printf("\nDigite o dia da semana (EX: seg):  ");
        scanf("%3s", dia_semana);
        printf("Qual o consumo da %s: ", dia_semana);
        scanf("%f", &consumo);
        fprintf(arquivo, "%s %.1f\n", dia_semana, consumo);
    }
    printf("\nDados gravados com sucesso!\n");

     fclose(arquivo);
    return 0;
}
