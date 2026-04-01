#include <stdio.h>

int main() {
    int idade;
    
    printf("Digite uma idade para consulta de entrada\n");
    scanf("%d", &idade);
    
        if (idade >= 18) {
        printf("Pode entrar!\n");
        }
    
        else if (idade >= 16) {
        printf("Pode entrar com responsavel!\n");
        }
    
        else {
            printf("Nao pode entrar!\n");
        }

return 0;

    
}