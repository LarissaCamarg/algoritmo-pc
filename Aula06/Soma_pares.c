#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "");
    int num, soma=0;

    while(1) {
        printf("Digite um n�mero par para sair: ");
        scanf("%d", &num);
        if(num%2 ==0)
                break;
        soma += num;
    }
    printf("soma = %d", soma);
    return 0;
}
