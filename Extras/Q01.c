#include <stdio.h>
int main()
{
    float nota;
    float freq;

    printf("Digite a nota do aluno (0-7): ");
    scanf("%f", &nota);

    printf("Digite a frequencia do aluno em (%%): ");
    scanf("%f", &freq);

    if (nota <= 7)
    {
        printf("Reprovado por nota!\n");
    }

    else if (freq < 75)
    {
        printf("Reprovado, baixa frequencia\n");
    }

    else
    {
        printf("Aluno Aprovado!\n");
    }
    return 0;
}