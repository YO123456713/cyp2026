#include <stdio.h>

int main() {
    int n;
    double tiempos[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%lf", &tiempos[i]);
    }

    int mejor = 0;        // posición de la vuelta más rápida
    double suma = 0;

    for (int i = 0; i < n; i++) {
        suma = suma + tiempos[i];
        if (tiempos[i] < tiempos[mejor]) {
            mejor = i;
        }
    }

    printf("%d\n", mejor + 1);
    printf("%.1f\n", suma / n);

    return 0;
}