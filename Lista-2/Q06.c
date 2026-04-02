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

    printf("Digite uma nota:\n");
    scanf("%f", &nota);

    printf("Digite a frequencia do aluno em %%:\n");
    scanf("%f", &freq);

    if (nota >= 7 && freq >= 75)
    {
        printf("Aluno aprovado!\n");
    }

    else
    {
        printf("Aluno reprovado!\n");
    }

    return 0;
}