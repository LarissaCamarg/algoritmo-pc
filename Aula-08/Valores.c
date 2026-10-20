#include <stdio.h>
#include<locale.h>

int main() {

        setlocale(LC_CTYPE, "");
    float valores[8];
    float soma = 0;
    float media;
    int acima = 0;

    printf("Digite os 8 valores:\n");

    for (int i = 0; i < 8; i++) {
        scanf("%f", &valores[i]);
        soma += valores[i];
    }

    media = soma / 8;

    for (int i = 0; i < 8; i++) {
        if (valores[i] > media) {
            acima++;
        }
    }

    printf("Media: %.2f\n", media);
    printf("Valores acima da media: %d\n", acima);

    return 0;
}
