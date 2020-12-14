#include <stdio.h>
#include <stdlib.h>

double resultado(double a);

int main()
{
   double a;


   printf("Digite um numero para ser elevado: "); //le um numero para elevar
   scanf("%lf",&a);
   printf("\n-------------------------------------\n");
   resultado(a);

}

double resultado(double a)
{

    int b = 0;
    int c = 1;
    double d = 0;

  while(b<10) // pega o numero e eleva ele até 10 e mostra o resultado
  {

      c = c * a;
      b++;
      printf("o numero %.lf elevado em %d eh igual: %d\n\n",a,b,c);



  }
        printf("-------------------------------------");
}
