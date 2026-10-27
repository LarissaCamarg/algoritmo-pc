#include <stdio.h>
#include <locale.h>

float calcularArea(float largura, float comprimento) {
    return largura * comprimento;
}

int main() {
    setlocale(LC_CTYPE, "");

    float largura, comprimento, area;
    char resp;

    do {
        printf("Digite a largura (m): ");
        scanf("%f", &largura);

        printf("Digite o comprimento (m): ");
        scanf("%f", &comprimento);

        area = calcularArea(largura, comprimento);

        printf("Area: %.1f m2\n", area);

        printf("Deseja calcular outra area (s/n)? ");
        scanf(" %c", &resp);

        printf("\n");

    } while (resp == 's' || resp == 'S');

    return 0;
}
