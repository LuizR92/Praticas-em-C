#include <stdio.h>
int main () {

float meta;
float valorMes;
float total = 0;
int mesesValidos = 0;
    
printf("Digite a meta de economia: ");
scanf("%f", &meta);

    while (total < meta) {
        printf("Digite seu valor Mensal: ");
        scanf("%f", &valorMes);
        
        if(valorMes > 0) {
            
            total = total + valorMes;
            mesesValidos ++;
        }
        else {
           printf("VALOR DESCONSIDERADO\n");
        }
    }

printf("Total economizado: %.2f", total);
printf("Meses validos: %d", mesesValidos);

return 0;   
}