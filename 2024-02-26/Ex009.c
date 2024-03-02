/*9) Reescreva o programa do exercício 8, para que seja impressa no final, a quantidade de alunos aprovados,
reprovados e que ficaram em exame.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int cont, apv, rep, exm;
    cont = apv = rep = exm = 0;
    int statusRepet = 1;

    while (statusRepet == 1)
    {
        float notaAluno[2] = {};
        float media = 0;
        char inputRepet[2] = {};

        for (int i = 0; i < 2; ++i)
        {
            printf("Digite a nota do aluno:\n");
            scanf("%f", &notaAluno[i]);
        }

        media = (notaAluno[0] + notaAluno[1]) / 2;
        printf("Média do aluno: %.2f\n", media);

        if (media >= 7)
        {
            ++apv;
        }
        if (media == 5)
        {
            ++exm;
        }
        else
        {
            ++rep;
        };
        if (media == 5)
        {
            ++exm;
        }
        while (toupper(inputRepet[0]) != 'N' && toupper(inputRepet[0]) != 'S')
        {
            printf("Deseja inserir a média para um novo aluno?\n"
                   "[S] - Sim\n"
                   "[N] - Não\n");
            scanf(" %c", inputRepet);

            if (toupper(inputRepet[0]) == 'N')
            {
                statusRepet = 0;
            }
        }

        cont++;
    }

    printf("Total de alunos: %d\n", cont);
    printf("Total de alunos aprovados: %d\n", apv);
    printf("Total de alunos de exame: %d\n", exm);
    printf("Total de reprovados: %d\n", rep);

    return 0;
}
