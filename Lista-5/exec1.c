#include <stdio.h>
int main () {

int i;
int codigo;
int validos = 0;
int invalidos = 0;
    
for (i = 1; i <= 10; i++) {
    printf("Digite o codigo");
    scanf("%d", codigo);

    if (codigo >= 1000 && codigo <= 9999) {
        
        validos ++;
    }
    else {
        invalidos ++;
    }
    
}

printf ("Codigos validos: %d", validos);
printf("Codigos inválidos: %d", invalidos);

return 0;   
}