/*10) Escreva um programa que verifique a validade de uma senha fornecida pelo usuário. A senha válida é a palavra
teste (em minúsculo).
Observação: Se a senha informada pelo usuário for inválida, a mensagem "ACESSO NEGADO" deve ser impressa e
repetida a solicitação de uma nova senha até que ela seja válida. Caso contrário deve ser impressa a mensagem
"ACESSO PERMITIDO" junto com um número que representa quantas vezes a senha foi informada.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define machtPass "teste"
int main()
{

    int countTry = 0;
    char pass[100] = {};
    int valid = 1;

    do
    {
        printf("Digite a senha para acesso:\t");
        scanf("%s", pass);
        valid = strcmp(machtPass, pass);
        if (valid == 0)
        {
            printf("\n\nSenha Correta!\n");
            break;
        }
        else
        {
            printf("Acesso negado!\n");
            ++countTry;
        }
    } while (valid != 0);

    printf("Total de tentativas: %d\n", countTry);

    return 0;
}