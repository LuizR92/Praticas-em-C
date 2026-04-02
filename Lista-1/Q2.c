#include <stdio.h>
int main()
{
    int num;

    printf("Digite uma idade:\n");
    scanf("%d", &num);

    if (num >= 18)
    {
        printf("Maior de idade!\n");
    }
    else
    {
        printf("Menor de idade!\n");
    }
    return 0;
}