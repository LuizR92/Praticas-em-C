#include <stdio.h>
    int main (){
        int num;
        printf ("Digite um número para atribuir categoria:\n ");
        scanf ("%d", &num);

        if (num <=10) {
            printf ("Categoria A");
        }
        else if (num <= 20) {
            printf ("Categoria B");
        }
        
        else if (num <= 30) {
            printf ("Categoria C");
            }

        else {
            printf ("Categoria Inválida");
        }
           
        return 0;
    }