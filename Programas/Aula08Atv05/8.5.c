#include <stdio.h>
#include <stdlib.h>

void main(){
    int raio;
    float *ponteiroarea = NULL, *ponteirovolume = NULL;
    float area = 5, volume = 5;

    scanf("%d", &raio);

    ponteiroarea = &area;
    ponteirovolume = &volume;

    calculo(raio, ponteiroarea, ponteirovolume);

    printf("Area: %.2f\n", *ponteiroarea);
    printf("Volume: %.2f", *ponteirovolume);

}

void calculo(int raiodaesfera, float *areadaesfera, float *volumedaesfera){
    *areadaesfera = (4*3.14*raiodaesfera*raiodaesfera);
    *volumedaesfera = ((4*3.14*raiodaesfera*raiodaesfera*raiodaesfera)/3);
}
