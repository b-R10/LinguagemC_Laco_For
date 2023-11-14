/*
Fazer uma solução para realizar a média de notas de uma turma de alunos, para uma mesma disciplina.
Escrever a média
obs: o usuário deverá informar a quantidade de alunos e cada uma das notas.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, qntd_alunos;
    float nota, media=0;
    printf("Digite a quantidade de alunos na turma:\n");
    scanf("%d", &qntd_alunos);
    for(i=0; i<qntd_alunos; i++){
        printf("Digite a nota do aluno %d\n", i+1);
        scanf("%f", &nota);
        fflush(stdin);
        media += nota;
    }
    media = media/qntd_alunos;
    printf("Media das notas: %.2f", media);
    return 0;
}