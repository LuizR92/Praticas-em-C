#include <stdio.h>

int main() {
    int codigoValido, jaUsouCupom;
    float valorCompra;

    printf("Codigo valido? (1/0): ");
    scanf("%d", &codigoValido);

    printf("Digite o valor da compra: ");
    scanf("%f", &valorCompra);

    printf("Ja usou cupom? (1/0): ");
    scanf("%d", &jaUsouCupom);

    if (codigoValido == 1) {
        if (jaUsouCupom == 0 && valorCompra >= 100) {
            printf("DESCONTO APLICADO!\n");
        }
        else {
            printf("CUPOM INVALIDO PARA USO!\n");
        } 
    }
    
    else {
        printf("CUPOM INVALIDO!\n");
    }

return 0;
}