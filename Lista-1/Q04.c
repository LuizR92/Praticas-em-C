#include <stdio.h>
int main () {
    float nota;
    
    printf("Digite uma nota (0 a 10): ");
    scanf ("%f", &nota);
    
    if(nota < 0 || nota > 10) {
        printf("Nota Invalida!\n");
    }
    
    else if(nota >= 7) {
        printf("Aprovado!\n");
    }
    
    else {
        printf("Reprovado\n");
    }
    
return 0;
}
