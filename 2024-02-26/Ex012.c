/*12) Escreva um programa que leia o primeiro nome e a altura das moças inscritas em um concurso de beleza.
Quando
for informada a palavra FIM para o nome da moça o programa deverá ser encerrado e imprimir: o nome e a altura da
*/

#include <stdio.h>
#include <string.h>

#define true 1
#define false 0
#define MAX_NOME 20
#define MAX_MODELOS 40

struct modelo
{
    char nome[MAX_NOME];
    int altura;
};

int encontrarModeloMaisAlta(struct modelo *Modelo, int numModelos)
{
    int indexMaxModelo = 0;

    for (int j = 1; j < numModelos; ++j)
    {
        if (Modelo[j].altura > Modelo[indexMaxModelo].altura)
        {
            indexMaxModelo = j;
        }
    }

    return indexMaxModelo;
}

int main()
{
    struct modelo Modelo[MAX_MODELOS];
    int i = 0;
    int status = true;

    do
    {
        if (i == MAX_MODELOS)
        {
            printf("Número máximo de modelos atingido.\n");
            break;
        }

        printf("Digite o nome da modelo (ou FIM para encerrar):\t");
        scanf("%s", Modelo[i].nome);

        if (strcmp(Modelo[i].nome, "FIM") == 0)
        {
            status = false;
        }
        else
        {
            printf("\nDigite a altura da modelo em centímetros:\t");
            scanf("%d", &Modelo[i].altura);
            ++i;
        }

    } while (status);

    if (i > 0)
    {
        int indexMaxModelo = encontrarModeloMaisAlta(Modelo, i);
        printf("A modelo mais alta:\t %s com %dcm\n", Modelo[indexMaxModelo].nome, Modelo[indexMaxModelo].altura);
        printf("Número total de moças no concurso: %d\n", i);
    }
    else
    {
        printf("Nenhum modelo registrado.\n");
    }

    return 0;
}
