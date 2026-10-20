#include<stdio.h>
#include<locale.h>

int main()
{
    FILE *arquivo;
    setlocale(LC_CTYPE, "");
    int i, num;
    char rgm[10];
    float nota;

    arquivo = fopen("nota.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    printf("Digite a quantidade de registros: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        printf("\nDigite o RGM do aluno:  ");
        scanf("%10s", rgm);
        printf("Qual a nota? ", nota);
        scanf("%f", &nota);
        fprintf(arquivo, "%s %.1f\n", rgm, nota); //rgm, nota
    }
    printf("\nDados gravados com sucesso!\n");

     fclose(arquivo);
    return 0;
}
