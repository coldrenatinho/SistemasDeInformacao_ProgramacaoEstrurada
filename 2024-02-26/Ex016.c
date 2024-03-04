/*16) Escreva um programa que calcule o fatorial de N (N!), sendo que o valor inteiro de N deve ser escolhido pelo usuário.
Sendo que:
N! = 1 * 2 * 3 * ... * (N - 1) * N
0! = 1 (por definição)*/

int fatorial(int f)
{
    int s;

    if (f == 0 || f == 1)
    {
        return 1;
    }

    return f * fatorial(f - 1);
}

int main()
{
    int fator, resultado;
    fator = resultado = 0;
    printf("Digite um valor:\t");
    scanf("%d", &fator);
    resultado = fatorial(fator);
    printf("Fatorial de %d é igual há: %d", fator, resultado);
}
