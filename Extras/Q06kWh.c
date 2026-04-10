#include <stdio.h>

int main() {
    char tipo;
    float kWh;
    float preco;
    float total;

    printf("Para calcular o custo pelo fornecimento de energia, primeiramente digite o tipo de instalacao: (R= Residencial / C= Comercial / I = Industrial) = ");
    scanf(" %c", &tipo);

    printf("\nAgora digite o consumo em kWh: ");
    scanf("%f", &kWh);

    if (tipo == 'R' || tipo == 'r') {
        if (kWh <= 500) {
            preco = 0.40;
        } else {
            preco = 0.65;
        }
    } else if (tipo == 'C' || tipo == 'c') {
        if (kWh <= 1000) {
            preco = 0.55;
        } else {
            preco = 0.60;
        }
    } else if (tipo == 'I' || tipo == 'i') {
        if (kWh <= 5000) {
            preco = 0.55;
        } else {
            preco = 0.60;
        }
    } else {
        printf("Tipo Invalido!\n");
        return 1;
    }

    total = kWh * preco;
    printf("Valor total a pagar: R$ %.2f\n", total);

    return 0;
}