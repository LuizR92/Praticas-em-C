#include <stdio.h>
int main()
{
    float nota;

    printf("Digite uma nota (0 a 10):\n");
    scanf("%f", &nota);

    if (nota >= 7 && nota <= 10)
    {
        printf("Aprovado!\n");
    }
    else if (nota >= 0 && nota < 7)
    {
        printf("Reprovado!\n");
    }
    else
    {
        printf("Nota invalida!\n");
    }
    return 0;
}
