/*
Atividade 6 — Condição dupla obrigatória
Situação:
Um aluno só passa se:
•	nota ≥ 7
•	frequência ≥ 75%
 Pergunta:
•	Quantas decisões precisam ser feitas?
•	Escreva a lógica corretamente
 Objetivo: introduzir condições compostas (AND)

INÍCIO
 ↓
Ler nota e frequência
 ↓
nota >= 7 E freq >= 75 ?
 ↙        ↘
SIM        NÃO
↓           ↓
Aprovado   Reprovado
      ↓
     FIM
*/

#include <stdio.h>
int main()
{
    float nota;
    float freq;

    printf("Digite uma nota e a frequência do aluno em %%: ");
    scanf("%f %f", &nota, &freq);

    if (nota < 7)
    {
        printf("Reprovado por nota!\n");
    }
    else if (freq < 75)
    {
        printf("Reprovado por frequencia!\n");
    }
    else
    {
        printf("Aluno aprovado!\n");
    }

    return 0;
}