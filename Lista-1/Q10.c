#include <stdio.h>
int main()
{
    int d;

    printf("Digite um dia da semana:\n");
    scanf("%d", &d);

    if (d == 1)
    {
        printf("Domingo!");
    }
    else if (d == 2)
    {
        printf("Segunda!\n");
    }
    else if (d == 3)
    {
        printf("Terca!\n");
    }
    else if (d == 4)
    {
        printf("Quarta!");
    }
    else if (d == 5)
    {
        printf("Quinta!\n");
    }
    else if (d == 6)
    {
        printf("Sexta!\n");
    }
    else if (d == 7)
    {
        printf("Sabado!\n");
    }
    else
    {
        printf("Dia Invalido!\n");
    }
    return 0;
}
