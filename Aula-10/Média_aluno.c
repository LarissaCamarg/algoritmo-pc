#include <stdio.h>
#include <locale.h>

float calcular_media(float nota1, float nota2) {
    return (nota1 + nota2) / 2;
}

void verificar_situacao(float media) {
    if (media >= 7) {
        printf("Situação: Aprovado\n");
    } else {
        printf("Situação: Reprovado\n");
    }
}

int main() {
    setlocale(LC_CTYPE, "");

    float nota1, nota2, media;
    char resp;

    do {
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        media = calcular_media(nota1, nota2);

        printf("Média do aluno: %.1f\n", media);

        verificar_situacao(media);

        printf("Deseja digitar notas de outro aluno (s/n)? ");
        scanf(" %c", &resp);

        printf("\n");

    } while (resp == 's' || resp == 'S');

    return 0;
}
