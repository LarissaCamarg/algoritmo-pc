#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");
    float peso, altura, imc;

    printf("Qual é o peso da pessoa em kg? ");
    scanf("%f", &peso);

    printf("Qual a altura da pessoa em metros? ");
    scanf("%f", &altura);

    imc = peso/(altura*altura);
      printf("O índice de massa corporal é: %f\n ", imc);

    return 0;
}
