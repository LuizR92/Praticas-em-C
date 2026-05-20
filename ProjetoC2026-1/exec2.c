#include <stdio.h>

int main() {
    float vendas[10];
    int vendaEspecial;
    int i;

    float totalVendido = 0;
    int destaque = 0;
    int comum = 0;

    // 1. Ler as 10 vendas e armazenar no vetor vendas
    
    for (int pos = 0; pos < 10; pos++) {
        printf("Digite o valor da venda: ");
        scanf("%f", &vendas[pos]);
    }
    // 2. Ler se cada venda foi especial
    
    for (int pos = 0; pos < 10; pos++) {
        printf("A venda foi especial? (1 = SIM / 0 = NÃO): ");
        scanf("%d", &vendaEspecial);
    
    // 3. Usar if com OR para classificar
            if (vendas[pos] >= 100 || vendaEspecial == 1 ) {
                printf("VENDA COM DESTAQUE!\n");
                destaque++;
            }
            else {
                printf("VENDA COMUM!\n");
               comum++;
            }
    // 4. Somar o total vendido
            totalVendido = totalVendido + vendas[pos];
    }
    // 5. Contar vendas com destaque e comuns
    printf("O total vendido foi: %.2fR$\n", totalVendido);
    printf("A quantidade de vendas com destaque: %d\n", destaque);
    printf("A quantidade de vendas comuns: %d\n", comum);

    return 0;
}