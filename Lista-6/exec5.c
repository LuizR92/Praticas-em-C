#include <stdio.h>
int main () {

float numeros[6];
int pos;
float soma = 0, media;

    for(pos = 0; pos < 6; pos++) {
        printf("Digite o %dº número: ", pos+1);
        scanf("%f", &numeros[pos]);
        soma = soma + numeros[pos];
    }
    
    media = soma / 6;
    
printf ("Media = %.2f\n", media);

return 0;
}