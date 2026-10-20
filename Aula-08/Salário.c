#include<stdio.h>
#include<locale.h>
#define TAM 5

int main() {

    setlocale(LC_CTYPE, "");
    int i, contador=0;
    float salarios[TAM];
    float soma=0, media, maior_salario;

    for (i=0; i<TAM; i++) {
                         printf("Digite o sal�rio do funcion�rio %d: ", (i+1));
                         scanf("%f", &salarios[i]);
                         soma += salarios[i];
    }

    media = soma/TAM;

    for(i=0; i<TAM; i++) {
        if(salarios[i] > media)
            contador++;
        if(salarios[i]>maior_salario)
            maior_salario=salarios[i];
    }

    printf("M�dia dos sal�rios: R$ %.2f\n", media);
    printf("Quantidade de sal�rios acima da m�dia: R$ %.d\n", contador);
    printf("Maior sal�rio: R$ %.2f\n", maior_salario);
    return 0;

}
