/*
Imprimir os números inteiros de 1 até 15, pulando o 11.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=1; i<=15;i++)
    {
        if (i != 11)
            printf("\n\t%d", i);
    }
    return 0;
}