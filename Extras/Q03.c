#include <stdio.h>
int main()
{
    float idade;
    char autorizacao;

    printf("Digite sua idade: ");
    scanf("%f", &idade);

    printf("Voce tem autorizacao? (S = Sim / N = Nao) ");
    scanf(" %c", &autorizacao);

    if (idade >= 18 && (autorizacao == 's' || autorizacao == 'S'))
    {
        printf("Pode entrar");
    }
    else
    {
        printf("Nao pode entrar!\n");
    }

    return 0;
}