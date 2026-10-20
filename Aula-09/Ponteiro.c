#include<stdio.h>

int main()
{
    int idade = 18;
    int *p; //o s�mbolo * representa ponteiro (que � onde est� guardado o valor da variavel por tras de tudo)

    p = &idade;

    printf("%d\n",  idade);
    printf("%p\n", &idade);

    printf("%p\n",  p);
    printf("%p\n",  *p);

    return 0;

}
