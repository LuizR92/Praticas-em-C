/*Atividade 5 — Número inteiro
Regra:
•	Se número > 0 → positivo
•	Se número < 0 → negativo
 Pergunta:
•	O que acontece com o número 0?
•	Qual condição está faltando?
 Objetivo: identificar casos não tratados

INÍCIO
 ↓
Ler número
 ↓
n > 0 ?
 ↙        ↘
SIM        NÃO
↓           ↓
Positivo    n < 0 ?
            ↙        ↘
           SIM        NÃO
           ↓           ↓
        Negativo      Zero
             ↓
            FIM
*/

#include <stdio.h>
int main()
{
    int num;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("Positivo!\n");
    }
    else if (num < 0)
    {
        printf("Negativo!\n");
    }
    else
    {
        printf("Zero!\n");
    }

    return 0;
}