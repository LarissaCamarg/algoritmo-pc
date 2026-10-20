#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float cord1, cord2, cord3, cord4, distancia;

    printf("Digite a coordenada x do 1º ponto: ");
    scanf("%f", &cord1);

    printf("Digite a coordenada y do 1º ponto: ");
    scanf("%f", &cord2);

    printf("Digite a coordenada x do 2º ponto: ");
    scanf("%f", &cord3);

    printf("Digite a coordenada y do 2º ponto: ");
    scanf("%f", &cord4);

    distancia = sqrt(pow(cord3 - cord1, 2) + pow(cord4 - cord2, 2));

    printf("A distância entre os pontos é %.2f\n", distancia);

    return 0;
}
