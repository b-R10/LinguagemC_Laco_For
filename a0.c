/*
    Escreva um programa em C que solicita ao usuário um número inteiro positivo N e
    calcula a soma dos primeiros N números pares.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int N;
    printf("Digite um número inteiro positivo: ");
    scanf("%i", &N);
    int num, soma = 0, i;
    for(i = 1; i <= N; i++){              // for(inicialização; condição; incremento/decremento){}
        num = 2;
        soma = (soma + num);
        num = (num + 2);
    }
    printf("%i", soma);
    return 0;
}