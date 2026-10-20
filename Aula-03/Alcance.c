#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float velocidade, angulo, alcance;
    float gravidade = 9.8;

    printf("Qual a velocidade inicial (m/s): ");
    scanf("%f", &velocidade);

    printf("Qual o ângulo de lançamento em graus: ");
    scanf("%f", &angulo);

    angulo = angulo * M_PI / 180;

    alcance = (pow(velocidade, 2) * sin(2 * angulo)) / gravidade;

    printf("O alcance horizontal é: %.2f metros\n", alcance);

    return 0;
}
