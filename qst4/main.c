#include <stdio.h>
#include <stdlib.h>

int primo();

int main()
{
   int a;

   printf("Digite um numero: ");
   scanf("%d",&a);

   primo(a);

    printf("\nO numero primo mais proximo do digitado: %d\n", primo(a));


}

int primo(int a)
{
    int b;
    int c;
    int primo;

    for (b=a;b > 0; b--) {


        primo = 1;
        for (c=2; c<b; c++) { //ele verifica se o numero é primo se o numero for primo ele da um break e retorna o valor

            if (b % c == 0)
                primo = 0;
}

                if (primo == 1) {

            break;
        }
    }
        return b;

}
