#include <stdio.h>
int main()
{
    int n1;
    int n2;

    printf("Digite e compare dois numeros inteiros:\n");
    scanf("%d %d", &n1, &n2);

    if (n1 > n2)
    {
        printf("O maior: %d\n", n1);
    }
    else if (n2 > n1)
    {
        printf("O maior: %d\n", n2);
    }
    else
    {
        printf("Numeros Iguais!\n");
    }
    return 0;
}
