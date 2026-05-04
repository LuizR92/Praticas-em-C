//8. Crie um menu que só encerra quando o usuário escolher 0.

#include <stdio.h>

int main() {
    int opcao;
    do {
        printf("1 - Opcao 1\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);
    } while (opcao != 0);
    
    return 0;
}