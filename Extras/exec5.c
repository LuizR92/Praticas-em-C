#include <stdio.h>
int main()
{
    char passaporte;
    char visto;

    printf("Voce tem passaporte? (S = Sim / N = Nao): ");
    scanf(" %c", &passaporte);

    printf("Voce tem visto? (S = Sim / N = Nao): ");
    scanf(" %c", &visto);

    if ((passaporte == 's' || passaporte == 'S') && (visto == 's' || visto == 'S'))
    {
        printf("Pode Viajar!\n");
    }

    else
    {
        printf("Nao Pode Viajar!\n");
    }
    
    return 0;
}