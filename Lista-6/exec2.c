#include <stdio.h>
int main () {

int numeros [8];
int i;
int soma = 0;

for (i = 0; i < 8; i++) {
    
    printf("Digite os valores: ");
    scanf("%d", &numeros[i]);
    
    soma = soma + numeros[i];
    }
    printf("A soma dos números digitados é: %d", soma);

return 0;
}