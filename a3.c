/*
Fazer uma solução para o reajuste salarial em (10%) para 20 funcionarios de uma empresa
    obs: os funcionarios possuem um salário diferente do outro
         Para cada funcionário, mostrar o salário reajustado na tela
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    float salario;
    for(i=1; i<=20; i++)
    {
        printf("Digite o salario do funcionário %d: \n", i);
        scanf("%f", &salario);
        fflush(stdin);
        salario = salario*1.1;
        printf("O salário reajustado do funcionário %d é: %.2f\n", i, salario);
    }
    return 0;
}