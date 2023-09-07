#include <stdio.h>

#include <stdio.h>

int main() {
    float n1, n2, n3;
    float promedio;


    printf("Ingresa la primera nota junto con su ponderación (en porcentaje): ");
    scanf("%f %f", &n1, &n2);

    printf("Ingresa la segunda nota junto con su ponderación (en porcentaje): ");
    scanf("%f %f", &n2, &n3);

    promedio= (n1 * 0.4 + n2 * 0.3 + n3 * 0.3);

    if (promedio >= 4.95) {
        printf("aprobó con un promedio ponderado de :) %.3f\n", promedio);
    } else {
        printf(" reprobó con un promedio ponderado de :(  %.3f\n", promedio);
    }

    return 0;
}
