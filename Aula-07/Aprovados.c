#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float nota;
    int aprovados = 0;

    for (int i = 1; i <= 10; i++)
    {
        printf("Digite a nota do %dº aluno: ", i);
        scanf("%f", &nota);

        if (nota >= 6.0)
        {
            aprovados++;
        }
    }

    printf("\nQuantidade de alunos aprovados: %d\n", aprovados);

    return 0;
}
