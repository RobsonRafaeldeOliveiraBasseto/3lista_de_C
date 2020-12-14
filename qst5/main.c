#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void raiz(float a);

int main()
{
    float a;

    printf("digite um numero para usar na raiz quadrada: ");
    scanf("%f",&a);

    raiz(a);



}

void raiz(float a)
{
    double b;

    b = sqrt(a); // pega o numero e calcula a raiz dele e indica

    printf("%.2lf",b);
}
