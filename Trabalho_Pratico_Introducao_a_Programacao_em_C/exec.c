// Fluxograma:

/*         INÍCIO
               │
               ▼
      Inicializar variáveis
               │
               ▼
        i = 0 até 9 ?
          ┌──Sim──┐
          ▼       │
 Ler idade e autorização
          │
          ▼
 idade >= 18 OU
 autorização == 1 ?
     ┌────┴────┐
    Sim       Não
     │          │
     ▼          ▼
Liberado     Negado
liberados++  negados++
     │          │
     └────┬─────┘
          ▼
 Verificar maior idade
          │
          ▼
 Somar idade na soma
          │
          ▼
       Próximo i
          │
          └──────────► volta ao teste

Após terminar o laço:
          │
          ▼
 Calcular média
          │
          ▼
 Mostrar resultados
(liberações, negações,
 maior idade e média)
          │
          ▼
            FIM
            */



// Pseudocódigo:

/*INÍCIO

  // Inicializar variáveis
  criar vetor idades[10]
  liberados <- 0
  negados <- 0
  maiorIdade <- 0
  somaIdades <- 0

  PARA i de 0 até 9 FAÇA
      // Ler dados do usuário
      ler idades[i]
      ler autorizacao (1 = SIM / 0 = NAO)

      // Verificar entrada
      SE idades[i] >= 18 OU autorizacao == 1 ENTÃO
          mostrar "Entrada LIBERADA"
          liberados <- liberados + 1
      SENÃO
          mostrar "Entrada NEGADA"
          negados <- negados + 1
      FIM SE

      // Atualizar maior idade
      SE idades[i] > maiorIdade ENTÃO
          maiorIdade <- idades[i]
      FIM SE

      // Somar idades para média
      somaIdades <- somaIdades + idades[i]
  FIM PARA

  // Calcular média
  media <- somaIdades / 10

  // Mostrar resultados
  mostrar "Total liberados: ", liberados
  mostrar "Total negados: ", negados
  mostrar "Maior idade: ", maiorIdade
  mostrar "Media das idades: ", media

FIM*/

// Código:

#include <stdio.h>

int main() {
    int idades[10];
    int autorizacao;

    int i;

    int liberados = 0;
    int negados = 0;

    int maiorIdades = 0;

    int somaIdades = 0;
    float media;

    // Implemente o sistema
    for (int i = 0; i < 10; i++) {
        printf("Digite a idade do Participante: ");
        scanf("%d", &idades[i]);
        
        printf("Você é autorizado? (1 = SIM / 0 = NÃO) ");
        scanf("%d", &autorizacao);
            
            if(idades[i] >= 18 || autorizacao == 1) {
                printf("Entrada Liberada!\n");
                liberados++;
            }
            else {
                printf("Entrada Negada!\n");
                negados++;
            }
            if (idades[i] > maiorIdades) {
                maiorIdades = idades[i];
            }
            somaIdades += idades[i];
    }
    media = somaIdades / 10;
    
    printf("===== RESULTADOS =====\n");

    printf("Total liberados: %d\n", liberados);
    printf("Total negados: %d\n", negados);

    printf("Maior idade: %d\n", maiorIdades);

    printf("Media das idades: %.2f\n", media);

    return 0;
}