#include<stdio.h>
#include<locale.h>
//tabuada, mas no zero ele para

int main()
{
        setlocale(LC_CTYPE, "");
        int i, num;

      printf("\nDigite um n�mero inteiro (zero para sair): ");
      scanf("%d", &num);

      while(num>0) {
            printf("Tabuada do %d", num);
            for (i=0; i<=10; i++) {
                    printf("\n%d * %d = %d", num, i, (num*i));
            }
            printf("\nDigite um n�mero inteiro (zero para sair): ");
            scanf("%d", &num);
      }
      return 0;
}
