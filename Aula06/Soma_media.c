#include<stdio.h>
#include<locale.h>
//soma e m�dia das notas

int main()
{
     setlocale(LC_CTYPE, "");
    int i;
    float nota, soma=0, media, maior_nota=0;

    for(i=0; i<5; i++) {

        printf("Digite a nota do aluno: ");
        scanf("%f", &nota);

        soma = soma += nota;

        if(nota > maior_nota) {
                maior_nota = nota;
        }
    }
    media = soma/5;
    printf("\nA m�dia %.2f", media);
    printf("\A maior nota %.2f", maior_nota);

    return 0;
}
