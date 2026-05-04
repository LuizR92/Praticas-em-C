#include <stdio.h>
int main()
{
    float num;

    printf("Digite um intervalo numerico:\n");
    scanf("%f", &num);

    if (num >= 10 && num <= 20)
    {
        printf("Dentro do Intervalo!\n");
    }
    else
    {
        printf("fora do intervalo!\n");
    }
    return 0;
}
