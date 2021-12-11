#include <stdio.h>
#include <stdlib.h>

float TemperaturaCelsius(float temperatura){
    temperatura = (temperatura - 32) * (5.0/9.0);
    printf("%.2f", temperatura);
}


void main(){
    float fahrenheit;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", & fahrenheit);

    TemperaturaCelsius(fahrenheit);
}
