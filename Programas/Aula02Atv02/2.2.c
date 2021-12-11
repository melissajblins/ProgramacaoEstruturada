#include <stdio.h>
#include <stdlib.h>

void main(){
    int sony, dell, toshiba, total;

    printf("Digite a quantidade de computadores Sony: ");
    scanf("%d", &sony);
    printf("Digite a quantidade de computadores Dell: ");
    scanf("%d", &dell);
    printf("Digite a quantidade de computadores Toshiba: ");
    scanf("%d", &toshiba);

    total = sony + dell + toshiba;

    printf("%d notebook(s) da Sony \n", sony);
    printf("%d notebooks(s) da Dell \n", dell);
    printf("%d notebook(s) da Toshiba \n", toshiba);
    printf("Total de %d notebooks \n", total);
}
