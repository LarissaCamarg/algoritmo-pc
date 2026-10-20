#include<stdio.h>
#include<locale.h>
//para ler qualquer arquivo salvo

int main()
{
    setlocale(LC_CTYPE, "");
    char linha[100];
    FILE *arquivo = fopen("consumo.txt", "r"); //no nome (consumo) troque para o nome do arquivo que voc� quer ler
    if(arquivo == NULL) {
            printf("Erro ao abrir o arquivo!\n");
            return 1;
    }

    while(fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%s", linha);
    }
    return 0;
}
