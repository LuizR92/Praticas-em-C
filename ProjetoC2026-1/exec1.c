#include <stdio.h>

int main() {
    float notas[8];
    float frequencia;
    int i;

    int aprovados = 0;
    int reprovados = 0;

    float maiorNota = 0;
    // 1. Ler as 8 notas e armazenar no vetor notas
    for (int pos = 0; pos < 8; pos++) {
        printf("Digite a nota: ");
        scanf("%f", &notas[pos]);
    }
    // 2. Ler a frequência de cada participante
    for (int pos = 0; pos < 8; pos++) {
        printf("Digite a frequência do participante: ");
        scanf("%f", &frequencia);
    //3. Usar if com AND para classificar
    //4. Contar aprovados e reprovados
            if (notas[pos] >= 7 && frequencia >= 75) {
                printf("APROVADO!\n");
                aprovados ++;
            }
            else {
                printf("REPROVADO!\n");
                reprovados++;
            }
    }
    // 5. Descobrir a maior nota
    for (int pos = 0; pos < 0; pos++) {
        if (notas[pos] > maiorNota) {
            maiorNota = notas[pos];
        }
    }
    
    printf("Quantidade de aprovados: %d\n", aprovados);
    printf("Quantidade de reprovados: %d\n", reprovados);
    printf("A maior nota foi: %.2f\n", maiorNota);
    
return 0;
}
