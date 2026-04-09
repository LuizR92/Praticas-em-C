#include <stdio.h>
int main()
{
    char dinheiro;
    char cartao;

    printf("Voce tem dinheiro? (S = Sim / N = Nao): ");
    scanf(" %c", &dinheiro);

    if (dinheiro == 's' || dinheiro == 'S')
    {
        printf("Pode Comprar!\n");
    }

    else
    {
        printf("Voce tem cartao? (S = Sim / N = Nao): ");
        scanf(" %c", &cartao);

        if (cartao == 's' || cartao == 'S')
        {
            printf("Pode Comprar!\n");
        }

        else
        {
            printf("Nao pode Comprar!\n");
        }
    }
    return 0;
}