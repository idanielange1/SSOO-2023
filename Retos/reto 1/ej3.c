#include <stdio.h>

int main() {
    int matriz[3][3] = {
        {2, 7, 3},
        {5, 6, 9},
        {1, 4, 8}
    };
    printf("Matriz:\n");

    for (int fila = 0; fila < 3; fila++) {
        for (int columna = 0; columna < 3; columna++) {
            printf("%d\t", matriz[fila][columna]);
        }
        printf("\n");
    }

    return 0;
}
