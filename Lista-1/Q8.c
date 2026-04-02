#include <stdio.h>
int main()
{
    float num;

    printf("Informe um Salario:\n");
    scanf("%f", &num);

    if (num <= 1500)
    {
        printf("Salario Baixo!\n");
    }
    else if (num <= 3000)
    {
        printf("Salario Medio!\n");
    }
    else
    {
        printf("Salario Alto!\n");
    }
    return 0;
}