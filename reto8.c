#include <stdio.h>

int main() {
    float latitud;

    printf("Ingresa la latitud en grados: ");
    scanf("%lf", &latitud);

    if (latitud < 0) {
        printf("Estas en el hemisferio norte\n");
    } else if (latitud > 0) {
        printf("Estas en el hemisferio sur\n");
    } else {
        printf("Estas justo en el ecuador\n");
    }

    return 0;
}