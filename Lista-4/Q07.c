//Leia números até a soma ultrapassar 100.

#include <stdio.h>

int main() {
    int numero;
    int soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while (soma <= 100) {
        soma = soma + numero;

        
        if (soma <= 100) {
            printf("A soma ainda esta em %d. Digite outro: ", soma);
            scanf("%d", &numero);
        }
        
    }
        printf("\nPronto! A soma final foi %d e ultrapassou 100.\n", soma);

return 0;
}