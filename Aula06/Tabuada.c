#include<stdio.h>
#include<locale.h>
//tabuada usando for


int main()
{
        setlocale(LC_CTYPE, "");
        int i, num;

        printf("Digite um n�mero inteiro: ");
        scanf("%d", &num);

        printf("Tabuada do %d", num);

        for(i=0; i<=10; i++) {
            printf("\n%d * %d = %d",  num, i, (num*i));
        }
        printf("\nAgora terminou!!! O i � igual a %d:  ", i);

        return 0;
}
