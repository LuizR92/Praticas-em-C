#include <stdio.h>
#include <ctype.h>

    int main () {
    char c;

        printf("Digite uma Letra ou Número: ");
        scanf(" %c", &c);

        if(isalpha (c)) {
            printf("É uma letra ");
        
            if(isupper (c)) {
                printf("maiúscula!\n");
            }

            else if(islower (c)) {
                printf("minúscula!\n");
            }

        }
        
        else if (isdigit (c)) {
            printf("É um número!\n");
        }

        else {
            printf("É outra coisa!\n");
        }

        return 0;

    }


        
        










    return 0;    
}
