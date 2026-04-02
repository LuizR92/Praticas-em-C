/*
Atividade 3 — Classificação com erro escondido
Regra:
•	Nota ≥ 5 → recuperação
•	Nota ≥ 7 → aprovado
Pergunta:
•	Essa regra funciona corretamente?
•	O que acontece com nota 8?
Objetivo: perceber ordem incorreta das condições
INÍCIO
 ↓
Ler nota
 ↓
nota >= 7 ?
 ↙        ↘
SIM        NÃO
↓           ↓
Aprovado   nota >= 5 ?
            ↙        ↘
           SIM        NÃO
           ↓           ↓
      Recuperação   Reprovado
             ↓
            FIM
*/

#include <stdio.h>
int main()
{
    float nota;

    printf("Digite uma nota:\n");
    scanf("%f", &nota);

    if (nota >= 7)
    {
        printf("Aprovado!\n");
    }

    else if (nota >= 5)
    {
        printf("Recuperacao!\n");
    }

    else
    {
        printf("Reprovado!\n");
    }

    return 0;
}