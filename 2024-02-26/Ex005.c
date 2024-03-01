/*5) Escreva um programa para ler as notas da 1a e 2a avaliações de um aluno, calcular e imprimir a média semestral.
Faça com que o algoritmo só aceite notas válidas (uma nota válida deve pertencer ao intervalo [0,10]). Cada nota deve
ser validada separadamente. Deve ser impressa a mensagem "Nota inválida" caso a nota informada não pertença
ao intervalo [0,10].*/

int valirdaNota(float note0)
{
    if (note0 < 0 || note0 > 10)
    {
        printf("Valor de nota inválido!!!\n\n");
        return 1;
    }
}

int main()
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

    printf("Media de nota do aluno: %f", note[0] / (float)note[1]);
}