#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct coordenadas{
    float x;
    float y;
};

void main(){
    struct coordenadas c[2];
    float distancia;

    for(int linha = 0; linha < 2; linha++){
        printf("Digite o ponto x: ");
        scanf("%f", &c[linha].x);
        printf("Digite o ponto y: ");
        scanf("%f", &c[linha].y);
    }

    distancia = sqrt(pow(c[1].x - c[0].x, 2) + pow(c[1].y - c[0].y, 2));
    printf("%.1f", distancia);
}
