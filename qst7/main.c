#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int teste();

int main()
{
    int a;
    int b;

    printf("digite um numero: ");
    scanf("%d",&a);

    teste(a);

    printf("\n\n---------------------\n");
    printf("O menor numero eh: %d",teste(b));
    printf("\n---------------------\n\n");
}

int teste(int a)
{
    int b;
    int k;
    int resp;

    for(k=0; k<= a; k++)
    {
        for(b=0; b<= a; b++)
            {
                resp = pow(b,k);// faz a elevação do numero

               if(resp == a) // se o resultado for igual ao numero ele printa

                {
                    printf("\n%d sobre %d eh igual a %d\n",b,k,a);

                }
            }

    }
        return resp; // retorna o menor numero
}
