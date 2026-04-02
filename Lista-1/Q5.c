#include <stdio.h>
int main()
{
    float temp;

    printf("Digite uma temperatura:\n");
    scanf("%f", &temp);

    if (temp <= 15)
    {
        printf("Frio!\n");
    }
    else if (temp <= 30)
    {
        printf("Agradavel!\n");
    }
    else
    {
        printf("Quente!\n");
    }
    return 0;
}