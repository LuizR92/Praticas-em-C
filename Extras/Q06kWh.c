#include <stdio.h>

int main() {
    char tipo;
    float consumo, preco, total;

    // Entrada de dados
    printf("Digite o tipo da instalacao (R, C ou I): ");
    scanf(" %c", &tipo);

    printf("Digite o consumo em kWh: ");
    scanf("%f", &consumo);

    // Verifica o tipo de instalacao
    if (tipo == 'R' || tipo == 'r') {

        // Regra para residencial
        if (consumo <= 500) {
            preco = 0.40;
        } else {
            preco = 0.65;
        }

    } else if (tipo == 'C' || tipo == 'c') {

        // Regra para comercial
        if (consumo <= 1000) {
            preco = 0.55;
        } else {
            preco = 0.60;
        }

    } else if (tipo == 'I' || tipo == 'i') {

        // Regra para industrial
        if (consumo <= 5000) {
            preco = 0.55;
        } else {
            preco = 0.60;
        }

    } else {
        // Caso o tipo digitado seja inválido
        printf("Tipo invalido!\n");
        return 1;
    }

    // Calcula o valor total
    total = consumo * preco;

    // Mostra o resultado
    printf("Valor a pagar: R$ %.2f\n", total);

    return 0;
}