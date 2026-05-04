//exiba apenas os números pares de 1 a 10

#include <stdio.h>
int main () {
int i;
    for (i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
        printf("%d\n", i);
        }
    }
    
return 0;
}