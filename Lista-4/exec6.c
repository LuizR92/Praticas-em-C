//6. Peça senha até o usuário acertar (1234).

#include <stdio.h>

int main() {
    int senha;
    int senhaCorreta = 1234;
    
    printf("Informe sua senha: \n");
     scanf("%d", &senha);
     
     while (senha != senhaCorreta) {
        printf("Informe novamente a senha: \n");
        scanf("%d", &senha);
    }

    printf("login Completo\n");
    
    return 0;
}
