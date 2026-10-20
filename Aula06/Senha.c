#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    int conta, senha;
    int tentativas = 0;

    do {

        printf("\nConta: ");
        scanf("%d", &conta);

        printf("Senha: ");
        scanf("%d", &senha);

        tentativas++;

    } while ((conta != 12345 || senha != 123) && tentativas < 3);

    if (conta == 12345 || senha == 123) {
        printf("\nAcesso autorizado.");
    }
    else {
        printf("\nAcesso bloqueado.");
    }

    return 0;
}
