#include <stdio.h>
#include<locale.h>

int main() {

        setlocale(LC_CTYPE, "");
    float notas[3][4];
    float medias[3];
    float soma;
    float maiorMedia;
    int alunoMaiorMedia;

    for (int aluno = 0; aluno < 3; aluno++) {

        soma = 0;

        for (int nota = 0; nota < 4; nota++) {

            printf("Digite a %d nota do %d estudante: ",
                   nota + 1, aluno + 1);

            scanf("%f", &notas[aluno][nota]);

            soma = soma + notas[aluno][nota];
        }

        medias[aluno] = soma / 4;
    }

    maiorMedia = medias[0];
    alunoMaiorMedia = 0;

    for (int aluno = 1; aluno < 3; aluno++) {

        if (medias[aluno] > maiorMedia) {
            maiorMedia = medias[aluno];
            alunoMaiorMedia = aluno;
        }
    }

    for (int aluno = 0; aluno < 3; aluno++) {
        printf("Media do estudante %d: %.2f\n",
               aluno + 1, medias[aluno]);
    }

    printf("Maior media: estudante %d - %.2f\n",
           alunoMaiorMedia + 1, maiorMedia);

    return 0;
}
