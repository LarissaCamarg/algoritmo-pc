#include<stdio.h>
#include<locale.h>
#define PI 3.14159

int main()
{
        setlocale(LC_CTYPE, "");

        float perimetro, raio;

        printf("Qual a medida do raio (em cm)? ");
        scanf("%f", &raio);

        perimetro = 2 * PI * raio;
        printf("O perímetro da circunferência é: %.2f cm", perimetro);

        return 0;
}
