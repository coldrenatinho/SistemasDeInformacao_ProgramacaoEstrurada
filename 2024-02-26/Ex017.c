/*17) Escreva um programa para que o usuário entre com três valores X, Y, Z. O programa deve verificar se esses valores
podem ser os comprimentos dos lados de um triângulo e, se forem, informar o perímetro desse triângulo ao usuário.
Se os valores não formarem um triângulo, escrever uma mensagem informando o usuário. Sendo que:
a) Propriedade: o comprimento de cada lado de um triângulo é menor do que a soma dos comprimentos dos
outros dois lados.
b) Perímetro: é a soma dos três lados*/

#include <stdio.h>

struct triangulo
{
    int v[3];
};

int main()
{
    int a, b, c;
    a = b = c = 0;
    struct triangulo Triangulo;
    for (int i = 0; i < 3; ++i)
    {
        printf("Digite o valor para o lado %d triangulo\n", i + 1);
        scanf("%d", &Triangulo.v[i]);
        if (Triangulo.v[i] <= 0)
        {
            printf("O valor do lado não pode ser zero!!!\nPrograma encerrado...\n");
            sleep(3);
            break;
        }
    }

    if (Triangulo.v[0] >= Triangulo.v[1] + Triangulo.v[2])
    {
        printf("O valor para a vertice a é invalido\n");
        return 0;
    }
    if (Triangulo.v[1] > Triangulo.v[0] + Triangulo.v[2])
    {
        printf("O valor paraq a vertice b é invalido\n");
        return 0;
    }

    if (Triangulo.v[2] > Triangulo.v[0] + Triangulo.v[1])
    {
        printf("O valor paraq a vertice b é invalido\n");
        return 0;
    }

    int sumv = Triangulo.v[0] + Triangulo.v[1] + Triangulo.v[2];

    printf("Total do lados do triangulo %d", sumv);

    return 0;
}