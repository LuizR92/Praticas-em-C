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
    char dinheiro;
    char emprestimo;

    printf("Você tem dinheiro? (S = SIM / N = Não): ");
    scanf(" %c", &dinheiro);

    if (dinheiro == 'S' || dinheiro == 's')
    {
        printf("Pode Comprar!\n");
    }

    else
    {
        printf("\nConsegue Emprestimo? (S == SIM / N == Não): ");
        scanf(" %c", &emprestimo);

        if (emprestimo == 'S' || emprestimo == 's')
        {
            printf("Pode Comprar!\n");
        }

        else
        {
            printf("Não pode comprar!\n");
        }
    }

    return 0;
}
