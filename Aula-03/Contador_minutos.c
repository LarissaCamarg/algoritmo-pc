#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");
    int hora, minutos, total;

    printf("Digite a hora: ");
    scanf("%d", &hora);

    printf("Digite os minutos: ");
    scanf("%d", &minutos);

    total = (hora * 60) + minutos;

    printf("Se passaram %d minutos desde 00h00.\n", total);

    return 0;
}
