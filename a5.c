/*
Dado um conjunto de valores numéricos (1,2,3 e 4), fazer uma solução que calcule a tabuada dos mesmos valores para os valores de 1 até 10.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, i;
    for(a=0; a<4; a++){
        printf("\n");
        for(i=0; i<10; i++){
            printf("%d\t", ((a+1)*(i+1)));
        }
    }
    return 0;
}