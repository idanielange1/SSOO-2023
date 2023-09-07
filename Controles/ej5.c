#include <stdio.h>

int main() {
    float n1, n2, n3, n4;
    float promedio;

    printf("Digite la primera nota: ");
    scanf("%f", &n1);

    printf("Digite  la segunda nota: ");
    scanf("%f", &n2);

    printf("Digite  la tercera nota: ");
    scanf("%f", &n3);

    printf("Digite  la cuarta nota: ");
    scanf("%f", &n4);

    promedio = (n1 + n2 + n3 + n4) / 4.0;

    printf("El promedio de las notas es: %.1f\n", promedio);

    return 0;
}
