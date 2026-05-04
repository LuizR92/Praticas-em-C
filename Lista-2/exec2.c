/*
Atividade 2 — Regra de desconto
Uma loja diz:
•	Clientes com compra acima de 100 recebem desconto
Pergunta:
•	O que acontece com quem compra exatamente 100?
•	A regra está completa? Ajuste.
Objetivo: trabalhar limites (>=, >, <=)

INÍCIO
 ↓
Ler valor
 ↓
valor >= 100 ?
 ↙        ↘
SIM        NÃO
↓           ↓
Desconto   Sem desconto
      ↓
     FIM
*/

#include <stdio.h>
int main()
{
    float valor;

    printf("Digite o valor da compra:\n");
    scanf("%f", &valor);

    if (valor > 100)
    {
        printf("Tem desconto!\n");
    }
    else
    {
        printf("Sem desconto!\n");
    }

    return 0;
}