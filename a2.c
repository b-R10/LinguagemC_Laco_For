/*
Faça uma solução para imprimir todos os inteiros entre os dois valores informados pelo usuário
O usuário poderá repetir o processo de escolha até que informe dois valores iguais.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, aux;
    do{
        printf("\nDigite dois números inteiros \n");
        scanf("%d %d", &a, &b);
        if(a > b) {
            aux = a;
            a = b;
            b = aux;
        }
        for(int i=a; i<=b; i++)
            printf("\n\t\a %d", i);                       // \a reproduz um som
    } while(a != b);
    return 0;
}