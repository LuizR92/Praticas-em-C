#include <stdio.h>
int main()
{
    float nota;

    printf("Digite uma nota de 0 a 10 para saber o conceito:\n");
    scanf("%f", &nota);

    if (nota >= 9)
    {
        printf("Conceito A!");
    }
    else if (nota >= 7)
    {
        printf("Conceito B!\n");
    }
    else if (nota >= 5)
    {
        printf("Conceito C!\n");
    }
    else
    {
        printf("Conceito D!\n");
    }
    return 0;
}