#include <stdio.h>
#include <stdlib.h>

int teste();

int main()
{
    int a;

    printf("digite um numero: ");
    scanf("%d",&a);

    teste(a);

}

int teste(int a)
{
    int b;
    int c;
    int d;

    if(a>=0) // se o numero for positivo ele faz todas as possibilidades que dao o resultado
    {


    for(b=0; b<=a; b++)
    {
        for(c=0; c<=a; c++)
        {
            d = b * c;
            if(d==a)
            printf("%d x %d = %d\n",b,c,d);
        }

    }
    }else if(a<=0) // e se o numero for negativo tambem mostra todas as possibilidades
    {
        for(b=100; b>=a; b--)
    {
        for(c=100; c>=a; c--)
        {
            d = b * c;
            if(d==a)
            printf("%d x %d = %d\n",b,c,d);
        }

    }
    }


}
