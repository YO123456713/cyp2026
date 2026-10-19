#include <stdio.h>

int main(void)
{
    float t;
    float m;
    float g = 9.8;

    printf("Ingrese el tiempo (s): ");
    scanf("%f", &t);
    printf("Ingrese la masa (kg): ");
    scanf("%f", &m);

    float altura = 0.5 * g * t * t;
    float velocidad = g * t;
    float energia = 0.5 * m * velocidad * velocidad;

    printf("Altura de la caida: %.1f m\n", altura);
    printf("Energia cinetica: %.1f J\n", energia);
    return 0;
}

