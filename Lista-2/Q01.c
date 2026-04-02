/*

Atividade 1 — Regra conflitante
Um sistema tem as seguintes regras:
•	Se a idade ≥ 18 → pode entrar
•	Se a idade ≥ 16 → pode entrar com responsável
 Pergunta:
•	Existe conflito nessa regra?
•	Como você organizaria corretamente usando lógica?
 Objetivo: entender ordem de avaliação (else if)
INÍCIO
 ↓
Ler idade
 ↓
idade >= 18 ?
 ↙        ↘
SIM        NÃO
↓           ↓
Pode entrar  idade >= 16 ?
              ↙        ↘
             SIM        NÃO
             ↓           ↓
       Com responsável  Não entra
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
        printf("Pode entrar!\n");
    }
    else if (idade >= 16)
    {
        printf("Pode entrar com responsavel!\n");
    }
    else
    {
        printf("Nao pode entrar!\n");
    }
    return 0;
}
