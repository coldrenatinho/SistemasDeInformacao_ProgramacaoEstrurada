/*11) A Federação Mato-grossense de Futebol contratou você para escrever um programa para fazer uma estatística do
resultado de vários jogos entre Mixto e Cuiabá. Escreva um algoritmo para ler o número de gols marcados pelo Mixto,
o número de gols marcados pelo Cuiabá em um jogo, imprimindo o nome do time vitorioso ou a palavra EMPATE.
Logo após escrever a mensagem "Novo Jogo - 1.Sim 2.Não?" e solicitar uma resposta. Se a resposta for 1, o
algoritmo deve ser executado novamente solicitando o número de gols marcados pelos times em uma nova partida,
caso contrário deve ser encerrado imprimindo:*/

/*- Quantos Jogos fizeram parte da estatística.
- O número de vitórias do Mixto.
- O número de vitórias do Cuiabá.
- O número de Empates.
- Uma mensagem indicando qual o time que venceu o maior número de Jogos (ou NÃO HOUVE VENCEDOR).
Observação: Para implementar um contador em C (incrementar):*/

#include <stdio.h>
#include <stdlib.h>

#define Time0 "Misto"
#define Time1 "Cuiaba"

int main()
{

    int contGoalTime0, contGoalTime1, status, contJogos;
    int vencTime0, vencTime1, emp0;
    vencTime0 = vencTime1 = emp0 = 0;
    status = 1;

    do
    {
        contGoalTime0 = contGoalTime1 = 0;
        printf("Digite o numero de gols efetuados pelo %s:\t", Time0);
        scanf("%d", &contGoalTime0);
        printf("\nDigite o numero de gols do %s:\t", Time1);
        scanf("%d", &contGoalTime1);
        if (contGoalTime1 == contGoalTime0)
        {
            printf("\nEpate entre os times:\n");
            emp0 += 1;
        }
        else if (contGoalTime1 > contGoalTime0)
        {
            printf("\nJogo ganho pelo %s", Time0);
            vencTime0 += 1;
        }
        else
        {
            printf("\nJogo ganho pelo %s\n", Time1);
            vencTime1 += 1;
        }
        printf("\nDeseja efetuar um novo jogo ?\n"
               "[1] - Sim\n"
               "[2] - Nao\n");
        scanf("%d", &status);

        ++contJogos;

    } while (status != 2);

    printf("\n\nTotal de jogos %d\n", contJogos);
    if (vencTime0 == vencTime1)
    {
        puts("Não houve ganhador");
    }
    else if (vencTime0 > vencTime1)
    {
        printf("Time vencedor %s\n", Time0);
    }
    else
    {
        printf("Time vencedor %s\n", Time1);
    }
}