#include <stdio.h> 

int main () {
    float nota;
    
    printf ("Digite uma nota:\n");
    scanf ("%f", &nota);
    
    if (nota >= 7) {
        printf ("Aprovado!\n");
    }
    else if (nota >= 5) {
        printf ("Recuperação!!\n");
    }
    else {
        printf ("Reprovado!\n");
    }
    return 0;
}