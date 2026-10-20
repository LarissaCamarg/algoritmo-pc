#include<stdio.h>
#include<locale.h>
//tabuada usando while

int main()
{
        setlocale(LC_CTYPE, "");
        int i=0, num;

        printf("Digite um n�mero inteiro: ");
        scanf("%d", &num);

        printf("Tabuada do %d", num);

        while(i<=10) {
            printf("\n%d * %d = %d",  num, i, (num*i));
                i++;
        }
        printf("\nAgora terminou!!! O i � igual a %d:  ", i);

        return 0;
}
