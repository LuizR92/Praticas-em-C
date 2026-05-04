//5. leia números até digitar 0. Conte quantos foram digitados e quantos são positivos.

#include <stdio.h>

int main() {
    int positivos = 0;
    int total = 0;
    int numero;
    
    printf("Informe o número: \n");
     scanf("%d", &numero);
     
     while (numero != 0) {
        total ++;
        
        if (numero > 0) {
            positivos++;
        }
        printf("Digite um número: \n");
        scanf("%d", &numero);
    }

    printf("Total: %d\n", total);
    printf("Positivos: %d\n", positivos);
    
    return 0;
}