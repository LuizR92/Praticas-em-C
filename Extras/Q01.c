
#include <stdio.h>
int main()
{
    float nota;
    float freq;

    printf("Digite a nota do aluno (0-10): ");
    scanf("%f", &nota);

    printf("Digite a frequencia do aluno em (%%): ");
    scanf("%f", &freq);

    if (nota < 7 && freq < 75) {
        printf("Reprovado por nota e frequencia!\n");
    } 
    else if (nota < 7) {
        printf("Reprovado por nota!\n");
    } 
    else if (freq < 75) {
        printf("Reprovado por baixa frequencia!\n");
    } 
    else {
        printf("Aluno Aprovado!\n");
    }
    
return 0;
}
