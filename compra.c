#include <stdio.h> 

int main () {
    float valor;

    printf ("Digite o valor para consultar o desconto:\n");
    scanf ("%f", &valor);

    if (valor >= 100.00) {
        printf ("Recebe Desconto");
    }

    else {
        printf ("Sem Desconto");
    }

    return 0;
}