/*

Para resolver essa situação faça essas 3 perguntas:

1 - Quais dados eu tenho?
--> Consumo
--> Tipo

2 - O que preciso descobrir (exercício pede) ?
--> O preco

3. De que depende a resposta (como eu descubro o preço)
O preço depende de:
-> tipo da instalação
-> faixa de consumo


-->>>>>> Resumindo o Raciocínio <<<<<<--

---> primeiro descubro o tipo
---> depois descubro a faixa
---> depois calculo o preço<

*/

//===========================================================================================================================//

#include <stdio.h>
int main()
{

    float consumo; // Quantidade de kWh consumida.
    char tipo;     // tipo de instação : R = Residencial C = Comercial I = Industrial.
    float preco;   // Valor final.
    
    printf("Digite o consumo em kWh: ");
    scanf("%f", &consumo);
    
    
    printf("Digite o tipo de instacao (R = Residencial C = Comercial I = Industrial): ");
    scanf(" %c", &tipo);

    if (tipo == 'R' || tipo == 'r')
    {
        if (consumo <= 500)
        {
            preco = consumo * 0.40;
        }
        else
        {
            preco = consumo * 0.65;
        }
    }

    else if (tipo == 'C' || tipo == 'c')
    {

        if (consumo <= 1000)
        {
            preco = consumo * 0.55;
        }
        else
        {
            preco = consumo * 0.60;
        }
    }

    else if (tipo == 'I' || tipo == 'i')
    {
        if (consumo <= 5000)
        {
            preco = consumo * 0.55;
        }
        else
        {
            preco = consumo * 0.60;
        }
    }

    else
    {
        printf("Tipo Invalido!\n");
        return 1;
    }

    printf("Valor a pagar: R$ %.2f\n", preco);

    return 0;
}