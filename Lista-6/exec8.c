#include <stdio.h>

int main () {

int numeros [10];
int pos;

for(pos = 0; pos < 10; pos++) {
    printf("Digite o numero da posição %d: ", pos+1);
    scanf("%d", &numeros[pos]);
}
for(pos = 0; pos < 10; pos++) {
    if(numeros[pos] < 0) {
        numeros[pos] = 0;
    }
}   
for(pos = 0; pos < 10; pos++) {
    printf("%d\n", numeros[pos]);
}

return 0;
}