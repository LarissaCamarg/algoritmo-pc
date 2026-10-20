#include<stdio.h>
#include<locale.h>

int main()
{
    FILE *arquivo;
    setlocale(LC_CTYPE, "");
    int i, num;

    arquivo = fopen("tabuada.txt", "a");
    if(arquivo == NULL) {
        printf("Erro ao criar o arquivo!\n");
        return 1;
    }

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &num);

    fprintf(arquivo, "\nTabuada do %d\n", num);
    for(i=0; i<11; i++) {
        fprintf(arquivo, "\nTabuada do %d = %d\n ", num, i, (num*i));
    }
    fclose(arquivo);
    return 0;
}
