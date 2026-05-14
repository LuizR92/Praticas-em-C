#include <stdio.h>

int main () {

int vetorA[5], vetorB[5], vetorC[5];
int pos;

printf("Alimentando o vetor A: ");
for(pos = 0; pos < 5; pos++) {
    printf("Digite o numero da posição %d: ", pos+1);
    scanf("%d", &vetorA[pos]);
}
printf("Alimentando o vetor B: ");
for(pos = 0; pos < 5; pos++) {
    printf("Digite o numero da posição %d: ", pos+1);
    scanf("%d", &vetorB[pos]);
    }
   
printf("Alimentando o vetor C: ");
for(pos = 0; pos < 5; pos++) {
    printf("Digite o numero da posição %d: ", pos+1);
    vetorC[pos] = vetorA[pos] + vetorB[pos];
}
printf("Resultado vetor C");
for (pos = 0; pos < 5; pos++) {
    printf("%d\n", vetorC[pos]);
}
return 0;
}