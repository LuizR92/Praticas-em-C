//4. Leia 10 e conte quantos são maiores que 50.

#include <stdio.h>

int main() {
    int i;
    int maiorQ50 = 0;
    int num;
    
    for(i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &num);

        if (num > 50) {
            maiorQ50++;
        }
    }

    printf("Total de números maiores que 50: %d\n", maiorQ50);
    
    return 0;
}
