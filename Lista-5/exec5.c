#include <stdio.h>
int main () {

int codigo;

printf("Digite o Codigo de Acesso: ");
scanf("%d", &codigo);

while (codigo != 4321) {
    printf("Codigo: %d incorreto, digite novamente. \n", codigo);
    printf("Digite o codico de Acesso: ");
    scanf("%d", &codigo);
}

return 0;
}