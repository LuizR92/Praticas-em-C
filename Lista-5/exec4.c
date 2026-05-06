#include <stdio.h>
int main () {

int i;
int status;
int concluidas = 0;
int pendentes = 0;
    
for (i = 1; i <= 8; i++) {
    printf("Digite o status das %dª Ativadas (1 = Concluída / 0 = Pendente): ", i);
    scanf("%d",&status);

    if (status == 1) {
        concluidas ++;
    }
    else {
        pendentes ++;
        }
    }
printf ("\nAtividades Concluidas: %d", concluidas);
printf("\nAtividades Pendentes: %d", pendentes);


return 0;   
}