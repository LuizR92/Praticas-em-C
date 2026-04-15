#include <stdio.h>

int main () {

    char tipo;
    float kWh;
    float preco;
    float total;
    
    printf("Digite o tipo de Energia (R = Residencial / C = Comercial / I = Industrial): ");
    scanf(" %c", &tipo);
    
    printf("\nDigite o consumo de kWh: ");
    scanf(" %f", &kWh);
    
    if (tipo == 'R' || tipo == 'r') {
        if (kWh <= 500)
        {
            preco = 0.40; 
            }
        else 
        {
            preco = 0.65;
        }
    }
    else if (tipo == 'C' || tipo == 'c') {
        if (kWh <= 1000)
        {
            preco = 0.55; 
            }
        else 
        {
            preco = 0.60;
        }
    }
    else if (tipo == 'I' || tipo == 'i') {
        if (kWh <= 5000)
        {
            preco = 0.55; 
            }
        else 
        {
            preco = 0.60;
        }
    }
    else {
        printf("Tipo Invalido!\n");
        return 1;
    }
    
    total = kWh * preco;
    
    printf("Preco por kWh: R$ %.2f\n", preco);
    printf("O tatal a pagar sera de: R$%.2f\n", total);

return 0;
}