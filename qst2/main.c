#include <stdio.h>
#include <stdlib.h>

int fatorial();

int main()
{
    int a;

    printf("digite o numero para ser fatoriado: "); //computa o numero a ser fatoriado

    scanf("%d",&a);
    printf("\n\n");

    fatorial(a);

}

int fatorial(int a)
{
    int b;
    int c=1;
    int d = 1;


        printf("%d! = ",a);

    for(b=a; b>=1;b--)
    {
        if(a>=1) // se o numero for maior ou igual a 1 ele faz o fatorial
        {


        c = c*d;
        printf("%d ",b);
        d++;


        }else // se nao ele apenas indica o numero
        {
            printf("%d",c);
        }

    }
        printf("= %d\n\n",c);

}
