/*6) Reescreva o programa para o exercício 5 para que no final seja impressa a mensagem Novo cálculo (1.sim 2.não)
solicitando ao usuário que informe um código (1 ou 2) indicando se ele deseja ou não executar o programa
novamente. Se for informado o código 1 deve ser repetida a execução de todo o programa para permitir um novo
cálculo, caso contrário ele deve ser encerrado.*/
#include <stdio.h>
#include <stdlib.h>

int valirdaNota(float note0)
{
    if (note0 <= 0 || note0 >= 10)
    {
        printf("Valor de nota inválido!!!\n\n");
        return 1;
    }
}

int main()
{

    int repestStatus = 1;

    while (repestStatus == 1)
    {

        {
            float note[2] = {};

            for (int i = 0; i < 2; ++i)
            {

                do
                {
                    printf("Digite o valor para a %dº nota do aluno:\n", i);
                    scanf("%f", &note[i]);

                } while (valirdaNota(note[i]) == 1);
            }

            printf("Media de nota do aluno: %f\n", note[0] / (float)note[1]);
        }

        sleep(2);

        printf("Deseja repetir para o proximo aluno?\n"
               "[1] - Sim.\n"
               "[2] - Nao.\n");
        scanf("%d", &repestStatus);
    }
}