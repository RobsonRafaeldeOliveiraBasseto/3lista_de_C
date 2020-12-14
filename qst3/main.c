#include <stdio.h>
#include <stdlib.h>

int sf();

int main()
{
    int a;

    printf("Digite um numero da sequencia fibonacci: ");
    scanf("%d",&a);

    sf(a);

    printf("O proximo numero da sequencia fibonacci: %d",sf(a));

}


int sf(int a) //pega o numero soma com o anterior assim para indicar o fibonacci
{
    int b;
    int c = 1;
    int d;

    for(b=0; b <= a; )
        {

            d = b + c;
            c = b;
            b = d;
        }

    return b;
}
