/*18) Escreva um programa para determinar e escrever a soma dos números pares de 100 a 200, inclusive.*/

#include <stdio.h>

int main()
{

    for (int j = 100; j <= 200; j++)
    {

        if (j % 2 == 0)
        {
            printf("%d, ", j);
        }
        j++;
    }
}