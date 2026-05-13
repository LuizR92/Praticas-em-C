#include <stdio.h>
int main () {
    int numeros [10];
    int pos;

    for (pos = 0; pos < 10; pos++) {
        printf("Digite o número da posição %d: ", pos+1);
        scanf("%d", &numeros[pos]);
    }
    for (pos = 0; pos < 10; pos++) { 
        printf("O número digitado na posição [%d] foi: %d\n", pos+1, numeros[pos]);
    } 

return 0;
}