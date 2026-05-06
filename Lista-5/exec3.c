#include <stdio.h>
int main () {
    float opcao;
    float saldo = 1000.00;
    float deposito;
    
        do {
            printf("------Menu------:\n\n");
            
            printf("Digite 1 para consultar o Saldo:\n");
            printf("Digite 2 para Depositar:\n");
            printf("Digite 0 para Sair\n\n");
            
            scanf("%f", &opcao);
            
            if (opcao == 1) {
                printf("Saldo atual %.2f\n", saldo);
            }
            else if (opcao == 2) {
                printf("Digite o valor do Depositvo: ");
                scanf("%f", &deposito);
                if (deposito > 0) {
                    saldo = saldo + deposito;
                }
                else {
                    printf("Valor do Depositvo não pode ser 0\n");
                }
            }
            else {
                printf("Opcao Invalido!\n");
            }
        } 
        while (opcao != 0);
        
    printf("Programa Encerrado.\n");

return 0;   
}