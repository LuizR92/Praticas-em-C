/*
Atividade 10 — Identificando redundância
Regra:
•	Se idade ≥ 18 → maior
•	Senão → menor
•	Se idade < 18 → menor
 Pergunta:
•	Existe repetição?
•	O que pode ser simplificado?
 Objetivo: otimização lógica
INÍCIO
 ↓
Ler idade
 ↓
idade >= 18 ?
 ↙        ↘
SIM        NÃO
↓           ↓
Maior      Menor
      ↓
     FIM

*/

#include <stdio.h>
int main()
{
    int idade;

    printf("Digite uma idade:\n");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("Maior de idade\n");
    }
    else
    {
        printf("Menor de idade\n");
    }

    return 0;
}