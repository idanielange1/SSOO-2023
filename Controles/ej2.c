#include <stdio.h>
#include <string.h>

int main() {
    char palabra[30];

    printf("Ingrese una cadena de texto: ");
    gets(palabra);

    int length = strlen(palabra);

    for (int a = 0, b = length - 1; a < b; a++, b--) {
        // Intercambia los caracteres en las posiciones a y b
        char temp = palabra[a];
        palabra[a] = palabra[b];
        palabra[b] = temp;
    }

    printf("palabra: %s\n", palabra);
    printf("palabrainv: %s\n", palabra);

    return 0;
}
