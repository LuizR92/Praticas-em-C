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
int main() {

    char dinheiro;
    char emprestimo;

    printf("Tem dinheiro? (s/n): ");
    scanf(" %c", &dinheiro);

    if (dinheiro == 's' || dinheiro == 'S')
    {
        printf("Pode comprar!\n");
    }

    else{
        
        printf("Consegue emprestimo? (s/n): ");
        scanf(" %c", &emprestimo);

        if (emprestimo == 's' || emprestimo == 'S')
        {
            printf("Pode comprar!\n");
        }
        else 
        {
            printf("Nao compra.\n");
        }
    }
    return 0;
    }



