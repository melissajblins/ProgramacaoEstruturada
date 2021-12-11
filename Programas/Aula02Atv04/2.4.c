#include <stdio.h>
#include <stdlib.h>

void main(){
    float baseA, baseB, alturaA, alturaB, areaA, areaB;

    printf("Digite a base do retângulo A: ");
    scanf("%f", &baseA);
    printf("Digite a altura do retângulo A: ");
    scanf("%f", &alturaA);

    printf("Digite a base do retângulo B: ");
    scanf("%f", &baseB);
    printf("Digite a altura do retângulo B: ");
    scanf("%f", &alturaB);

    areaA = (baseA * alturaA);
    areaB = (baseB * alturaB);

    if (baseA == alturaA || baseB == alturaB){
        printf("Os dados informados nao formam o retangulo A ou o retangulo B!");
    }
    else{
        printf("A area do retangulo A eh: %f \n", areaA);
        printf("A area do retangulo B eh: %f \n", areaB);
        if (areaA > areaB){
            printf("A area do retangulo A eh maior do que a do retangulo B! \n");
        }
        else if (areaA < areaB){
            printf("A area do retangulo B eh maior do que a do retangulo A! \n");
        }
        else {
            printf("A area do retangulo A eh igual ao do retangulo B! \n");
        }


    }


}
