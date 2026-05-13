#include <stdio.h>
int main () {

int numeros[10];
int pos; 
int valor = 0, encontrado = 0;

for(pos = 0; pos < 10; pos++) {
    printf("Digite o %dº valor: ", pos+1);
    scanf("%d", &numeros[pos]);
}
printf("Digite o valor a ser buscado: ");
scanf("%d", &valor);

for (pos = 0; pos < 10; pos++) {
    if (numeros[pos] == valor) {
        encontrado ++;
    }
}
if (encontrado) {
    printf("Valor encontrado!\n");
}
else {
    printf("Valor não encontrado!\n");
}
return 0;
}