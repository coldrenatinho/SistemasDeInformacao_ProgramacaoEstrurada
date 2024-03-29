/*8) Escreva um programa para ler 2 notas de um aluno, calcular e imprimir a média final. Logo após escrever a mensagem
"Calcular a média de outro aluno [S]im [N]ão?" e solicitar um resposta. Se a resposta for "S", o programa deve
ser executado novamente, caso contrário deve ser encerrado imprimindo a quantidade de alunos aprovados.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int cont = 0;
    int statusRepet = 1;

    while (statusRepet == 1)
    {
        float notaAluno[2];
        char inputRepet[2] = {};

        for (int i = 0; i < 2; ++i)
        {
            printf("Digite a nota do aluno:\n");
            scanf("%f", &notaAluno[i]);
        }

        printf("Média do aluno: %.2f\n", (notaAluno[0] + notaAluno[1]) / 2);

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

    return 0;
}
