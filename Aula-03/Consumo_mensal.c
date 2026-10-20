#include<stdio.h>
#include<locale.h>

int main()
{
        setlocale(LC_CTYPE, "");
        float potencia, horas_dias, consumo;

        printf("Potência do equipamento (W)?");
        scanf("%f", &potencia);

        printf("Horas de uso por dia?");
        scanf("%f", &horas_dias);

        consumo = (potencia * horas_dias * 30)/1000;

        printf("Consumo mensal: %.2f", consumo);

        return 0;
}
