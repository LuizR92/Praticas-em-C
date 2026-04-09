#include <stdio.h>
int main()
{
    char comprou;
    char gastou;

    printf("Voce comprou mais de 10x? (S = Sim / N = Nao): ");
    scanf(" %c", &comprou);

    if (comprou == 's' || comprou == 'S')
    {
        printf("Parabens, Cliente VIP!\n");
    }

    else
    {
        printf("Voce gastou mais de 1000? (S = Sim / N = Nao): ");
        scanf(" %c", &gastou);

        if (gastou == 's' || gastou == 'S')
        {
            printf("Parabens, Cliente VIP!\n");
        }

        else
        {
            printf("Cliente Nao VIP");
        }
    }
    return 0;
}