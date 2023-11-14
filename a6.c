/*
Uma faculdade possui vários cursos de graduação.
Cada curso possui várias disciplinas
Cada disciplina tem o mesmo número de turmas.
Todos os alunos de um curso estão matriculados nas mesmas disciplinas.

Faça uma solução usando laços “for” para calcular e escrever a média das notas em cada disciplina, para cada um dos alunos, em todas as turmas.

O usuário deverá informar
    a quantidade de disciplinas daquele curso,
    a quantidade de turmas (que é a mesma em todas as disciplinas),
    a quantidade de alunos no curso,
    a quantidade de notas (que é a mesma para todas as disciplinas)
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int qntd_turmas, qntd_alunos, qntd_disciplinas, qntd_notas, a, b, c, d;
    float notas, media=0;
    printf("Digite a quantidade de disciplinas dos cursos:\n");
    scanf("%d", &qntd_disciplinas);
    for(a=0; a<qntd_disciplinas; a++)
    {
        printf("Digite a quantidade de turmas dos nas disciplinas:\n");
        scanf("%d", &qntd_turmas);
        for(b=0; b<qntd_turmas; b++)
        {
            printf("Digite quantos alunos existem:\n");
            scanf("%d", &qntd_alunos);
            for(c=0; c<qntd_alunos; c++)
            {
                printf("Digite a quantidade de notas:\n");
                scanf("%d", qntd_notas);
                for(d=0; d<qntd_notas; d++)    
                {
                    printf("Digite a nota de cada aluno:\n");
                    scanf("%f", &notas);
                    media += (notas/qntd_alunos);
                    fflush(stdin);
                }
            }
        }
    }

    return 0;
}