/*
Atividade 4 — Classificação por faixa
Regra:
•	Até 10 → categoria A
•	Até 20 → categoria B
•	Até 30 → categoria C
Pergunta:
•	O número 5 pertence a quantas categorias?
•	Como corrigir?
Objetivo: evitar sobreposição de intervalos

INÍCIO
 ↓
Ler número
 ↓
n <= 10 ?
 ↙        ↘
SIM        NÃO
↓           ↓
A          n <= 20 ?
            ↙        ↘
           SIM        NÃO
           ↓           ↓
          B           C
             ↓
            FIM
*/

#include <stdio.h>
int main()
{
    int num;

    printf("Digite um numero para categorizar:\n");
    scanf("%d", &num);

    if (num <= 10)
    {
        printf("Categoria A!\n");
    }
    else if (num <= 20)
    {
        printf("Categoria B!\n");
    }
    else if (num <= 30)
    {
        printf("Categoria C!\n");
    }
    else
    {
        printf("Categoria Invalida!");
    }

    return 0;
}
