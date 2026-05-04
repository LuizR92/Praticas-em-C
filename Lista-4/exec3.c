//3. Leia 5 números e calcule a soma apenas dos  positivos.

#include <stdio.h>

int main() {
    int i;
    int num;
    int soma = 0;
    
    for (i = 1; i <= 5; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &num);

        if (num > 0) {
            soma += num;
        }
    }

    printf("Soma dos números positivos: %d\n", soma);
    
    return 0;
}
