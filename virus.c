#include <stdio.h>

int main () {
    for(int contador = 20; contador >= 1; contador-- ) {
        if (contador % 2 == 1) { 
            printf("%d\n", contador);
        }
    }

}