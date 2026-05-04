#include <stdio.h>
int main()
{
    int num;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("Par!\n");
    }
    else
    {
        printf("Impar!\n");
    }
    return 0;
}
