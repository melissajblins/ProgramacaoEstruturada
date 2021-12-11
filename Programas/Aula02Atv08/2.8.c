#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    float a, b, hipotenusa;

    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);

    hipotenusa = (a*a)+(b*b);
    printf("A hipotenusa eh: %f", sqrt(hipotenusa));
}
