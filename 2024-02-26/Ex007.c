/*7) Reescreva o programa do exercício 6 validando a resposta do usuário para a pergunta Novo Cálculo (1.sim 2.não)?
(aceitar apenas o código 1 ou 2).*/
#include <stdio.h>
#include <stdlib.h>

int validaNota(float note0)
{
    if (note0 <= 0 || note0 >= 10)
    {
        printf("Valor de nota inválido!!!\n\n");
        return 1;
    }
    return 0;
}

int validaRepetStatus(int status0)
{
    if (status0 != 1 && status0 != 2)
    {
        return 1;
    }
    return 0;
}

int main()
{

    int repetStatus = 1;

    while (repetStatus == 1)
    {

        {
            float note[2] = {};

            for (int i = 0; i < 2; ++i)
            {

                do
                {
                    printf("Digite o valor para a %dº nota do aluno:\n", i);
                    scanf("%f", &note[i]);

                } while (validaNota(note[i]) == 1);
            }

            printf("Media de nota do aluno: %f\n", (note[0] + note[1]) / 2);
        }

        sleep(2);

        do
        {
            printf("Deseja repetir para o proximo aluno?\n"
                   "[1] - Sim.\n"
                   "[2] - Nao.\n");
            scanf("%d", &repetStatus);
        } while (validaRepetStatus(repetStatus) == 1);
    }
}