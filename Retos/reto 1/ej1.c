#include <stdio.h>
#include <string.h>

int main() {
    char nombre[] = "anakin";
    char nombres[][10] = {"juan", "pedro", "liana", "sara"};

    for (int i = 0; i < 4; i++) {
        printf("%s\n", nombres[i]);
        if (strcmp(nombre, nombres[i]) == 0) {
            printf("Se encontró el nombre en la lista\n");
            break;
        }
    }

    getchar();
    return 0;
}