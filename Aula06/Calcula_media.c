#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float nota, soma = 0, media;
    int i;

    for(i = 0; i < 3; i++) {

        do {
            printf("Digite a nota do aluno (0-10): ");
            scanf("%f", &nota);

            if(nota < 0 || nota > 10) {
                printf("Nota invalida!!! Tente outra vez!!\n");
            }
            else {
                soma += nota;
            }

        } while(nota < 0 || nota > 10);
    }

    media = soma / 3;

    printf("\nA media do aluno e %.2f", media);

    return 0;
}
