// Leia 5 números e determine o maior e o menor.

#include <stdio.h>

int main()
{
    int cont;
    float num, maior, menor;

    printf("Digite um numero: ");
    scanf("%f", &num);

    maior = num;
    menor = num;

    for (cont = 2; cont <= 5; cont++)
    {
        printf("Digite um numero: ");
        scanf("%f", &num);

        if (num > maior)
        {
            maior = num;
        }

        if (num < menor)
        {
            menor = num;
        }
    }

    printf("Maior: %.2f\n", maior);
    printf("Menor: %.2f\n", menor);

    return 0;
}