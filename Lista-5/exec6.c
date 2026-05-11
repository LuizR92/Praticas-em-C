#include <stdio.h>
int main () {

int prioridade;
int continuar;
int baixa = 0;
int media = 0; 
int alta = 0;

do {

printf("Digite uma Prioridade de 1 a 3: ");
scanf("%d", &prioridade);
    
    if (prioridade == 1) {
        printf("Prioridade Baixa\n");
        baixa ++;
    }
    else if (prioridade == 2) {
        printf("Prioridade Média\n");
        media ++;
    }
    else if (prioridade == 3) {
        printf("Prioridade Alta\n");
        alta ++;
    }
    else {
        printf("PRIORIDADE INVÁLIDA!\n");
    }
    printf("\nDeseja Continuar? ");
    scanf("%d", &continuar);
    
} while (continuar != 0);
        

printf("Baixa: %d", baixa);
printf("Média: %d", media);
printf("Alta: %d", alta);

return 0;
}