#include <stdio.h>   // biblioteca para usar printf e scanf

int main()
{
    char tipo;        // guarda o tipo: R, C ou I
    float kWh;        // guarda o consumo de energia
    float preco = 0;  // guarda o preco por kWh, começa em 0
    float total;      // guarda o valor total da conta

    printf("Digite o tipo de Energia, (R=Residencial / C=Comercial / I=Industrial): ");
    scanf(" %c", &tipo);   // lê um caractere e guarda em tipo

    printf("\nDigite o Consumo de (kWh): ");
    scanf("%f", &kWh);     // lê o consumo e guarda em kWh

    if (tipo == 'R' || tipo == 'r')   // se for residencial
    {
        if (kWh <= 500)               // se consumir até 500
        {
            preco = 0.40;             // tarifa residencial baixa
            printf("O preco é igual a %.2f\n", preco);
        }
        else                          // se consumir acima de 500
        {
            preco = 0.65;             // tarifa residencial alta
            printf("O preco é igual a %.2f\n", preco);
        }
    }
    else if (tipo == 'C' || tipo == 'c')  // se for comercial
    {
        if (kWh <= 1000)                  // se consumir até 1000
        {
            preco = 0.55;
            printf("O preco é igual a %.2f\n", preco);
        }
        else                              // se consumir acima de 1000
        {
            preco = 0.60;
            printf("O preco é igual a %.2f\n", preco);
        }
    }
    else if (tipo == 'I' || tipo == 'i')  // se for industrial
    {
        if (kWh <= 5000)                  // se consumir até 5000
        {
            preco = 0.55;
            printf("O preco é igual a %.2f\n", preco);
        }
        else                              // se consumir acima de 5000
        {
            preco = 0.60;
            printf("O preco é igual a %.2f\n", preco);
        }
    }
    else
    {
        printf("Tipo Invalido!\n");  // se digitou algo diferente de R, C ou I
        return 1;                    // encerra o programa com erro
    }

    total = preco * kWh;             // calcula o valor total

    printf("Valor total a pagar é de %.2f", total);  // mostra o total

    return 0;   // encerra o programa normalmente
}