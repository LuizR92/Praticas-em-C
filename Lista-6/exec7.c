#include <stdio.h>

int main () {

int numeros[8];
int pos;

for(pos = 0; pos < 8; pos++) {
    
    printf("Digite o %dº número: ", pos+1);
    scanf("%d", &numeros[pos]);
}
printf("\n");

for(pos = 7; pos >= 0; pos--) {
    printf("%dº número %d\n", pos+1, numeros[pos]);
}

return 0;
}