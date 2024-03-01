/*1) Para que a divisão entre 2 números possa ser realizada, o divisor não pode ser nulo (zero).
Escreva um programa para
ler 2 valores e imprimir o resultado da divisão do primeiro pelo segundo.
OBS: O programa deve validar a leitura do
segundo valor (que não deve ser nulo).
Enquanto for fornecido um valor nulo a leitura deve ser repetida. Utilize a
estrutura while na construção da repetição de validação.*/

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