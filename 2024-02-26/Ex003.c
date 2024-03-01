/*3) Reescreva o programa para o exercício 1 utilizando a estrutura do-while na construção da repetição de validação.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, b;
    a = b = 0;

    printf("Realizar a divisao entre dois valores inteiros\n");
    printf("Digite o valor do dividendo\n");
    scanf("%d", &a);
    do
    {
        printf("Digite o valor do divisor\n");
        scanf("%d", &b);
        if (b == 0)
        {
            printf("O divisor nao pode ser 0!!!\n");
        }
    } while (b == 0);
    printf("O quociente da divisao é igual há: %2.f", a / (float)b);
}