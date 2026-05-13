#include <stdio.h>
int main () {

int numeros [10];
int pos, maior = 0, posicao = 0;

    for(pos = 0; pos < 10; pos++) {
    printf("Digite o %dº número: ", pos+1);
    scanf("%d", &numeros[pos]);

       if (numeros[pos] > maior) {
           maior = numeros[pos];
           posicao = pos+1;
           
       } 
    }
    printf ("Maior valor = %d encontrado na posição %d", maior, posicao);

return 0;
}