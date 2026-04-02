/*
Atividade 8 — Situação ambígua
Uma regra diz:
“Se estiver calor, vá de camiseta”
 Pergunta:
•	O que é “calor”?
•	Como transformar isso em condição lógica?
 Objetivo: transformar linguagem natural em lógica
INÍCIO
 ↓
Ler temperatura
 ↓
temp > 30 ?
 ↙        ↘
SIM        NÃO
↓           ↓
Calor      Frio
      ↓
     FIM

*/

#include <stdio.h>
int main()
{
    float temp;

    printf("Digite uma temperatura:\n");
    scanf("%f", &temp);

    if (temp > 30)
    {
        printf("Esta Calor, va de camiseta!\n");
    }
    else
    {
        printf("Esta Frio!\n");
    }
    return 0;
}