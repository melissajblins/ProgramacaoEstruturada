#include <stdio.h>
#include <stdlib.h>

void main(){
    int x = 2, y = 5, *ponteirox = NULL, *ponteiroy = NULL;

    ponteirox = &x;
    ponteiroy = &y;

    if (ponteiroy > ponteirox){
        printf("B");
    } else{
        printf("A");
    }
}
