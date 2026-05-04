// Leia 10 números e conte positivos, negativos e zeros.

#include <stdio.h>
int main()
{

    int contador, positivos = 0, negativos = 0, zeros = 0;
    float numeros;

    for (contador = 1; contador <= 10; contador++)
    {

        printf("Digite um número: ");
        scanf("%f", &numeros);

        if (numeros > 0)
        {
            positivos++;
        }
        else if (numeros < 0)
        {
            negativos++;
        }
        else
        {
            zeros++;
        }
    }

    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Zeros: %d\n", zeros);

    return 0;
}