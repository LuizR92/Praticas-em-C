#include <stdio.h>

int main() {
    float distancia;
    int premium, chuva;

    printf("Digite a distancia da entrega: ");
    scanf("%f", &distancia);

    printf("Cliente premium? (1/0): ");
    scanf("%d", &premium);

    printf("Esta chovendo? (1/0): ");
    scanf("%d", &chuva);
        
    if (premium == 1 && distancia <= 20) {
            printf("Entrega Gratuita!\n");
        }
    
    else if (premium == 0) {
        if (distancia <= 10 && chuva == 0){
            printf("Entrega Normal!\n");
        }
    
        else {
            printf("Entrega com Taxa!\n");
        }
    }

    else {
        printf("Entrega com Taxa!\n");
    }
    
return 0