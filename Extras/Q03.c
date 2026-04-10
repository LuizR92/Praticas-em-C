#include <stdio.h>
int main()
{
    float idade;
    char autorizacao;
    
    printf("Para entrar, precisa-se de dois requesistos: (Idade 18+ e Autorizacao)\n");

    printf("\nDigite sua idade: ");
    scanf("%f", &idade);

    printf("\nVoce tem autorizacao? (S = Sim / N = Nao) ");
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