/*
Atividade 9 — Decisão com múltiplos caminhos
Situação:
•	Se tem dinheiro → compra
•	Se não tem dinheiro → pede emprestado
•	Se não conseguir empréstimo → não compra
 Pergunta:
•	Quantos níveis de decisão existem?
•	Monte a lógica completa
 Objetivo: trabalhar encadeamento de decisões
 INÍCIO
 ↓
Tem dinheiro?
 ↙        ↘
SIM        NÃO
↓           ↓
Compra     Consegue empréstimo?
            ↙        ↘
           SIM        NÃO
           ↓           ↓
       Compra       Não compra
             ↓
            FIM

*/

#include <stdio.h>
int main()
{
    int dinheiro;
    int emprestimo;

    printf("Voce tem dinheiro? (1 = Sim / 0 = Nao): ");
    scanf("%d", &dinheiro);

    if (dinheiro == 1)
    {
        printf("Pode comprar!\n");
    }
    else
    {
        printf("Consegue emprestimo? (1 = Sim / 0 = Nao): ");
        scanf("%d", &emprestimo);

        if (emprestimo == 1)
        {
            printf("Pode comprar!\n");
        }
        else
        {
            printf("Nao compra!\n");
        }
    }
    return 0;
}