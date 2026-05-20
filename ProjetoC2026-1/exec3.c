#include <stdio.h>

int main() {
    float temperaturas[7];
    int i;

    int seguras = 0;
    int foraFaixa = 0;

    float soma = 0;
    float media;

    // 1. Ler as 7 temperaturas e armazenar no vetor temperaturas
    for (i = 0; i < 7; i++) {
        printf("Digite a temperatura: ");
        scanf("%f", &temperaturas[i]);
    // 2. Usar if com AND para verificar a faixa segura
    // 3. Contar temperaturas seguras e fora da faixa
        
        if (temperaturas[i] >= 20 && temperaturas[i] <= 30) {
            printf("Temperatura Segura!\n");
            seguras++;
        }
        else {
            printf("Temperatura Fora da Faixa!\n");
            foraFaixa++;
        }
        soma = soma + temperaturas[i];
        
    }
        
    // 4. Calcular a média
        media = soma / 7;
        printf("\nQuantidade de temperaturas seguras %d\n", seguras);
        printf("Quantidade de temperaturas fora da faixa %d\n", foraFaixa);
        printf("Média das temperaturas %.2f", media);

    return 0;
}
