#include <stdio.h>
int main () {

int numeros[12];
int pos, pares = 0;
   
    for(pos = 0; pos < 12; pos++) {
        printf("Digite o %dº número: ", pos+1);
        scanf("%d", &numeros[pos]);
    
    if (numeros[pos] % 2 == 0) {
        pares = pares + 1;
    }
    
    
}

printf ("Quantidade de pares = %d\n", pares);

return 0;
}