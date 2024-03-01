/*2) Altere a solução do exercício anterior para que seja impressa a mensagem Valor inválido! caso o segundo valor
informado seja zero.*/

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
            printf("Valor inválido!\n");
        }
    } while (b == 0);
    printf("O quociente da divisao é igual há: %2.f", a / (float)b);
}