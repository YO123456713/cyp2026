#include <stdio.h>

int main(void) {
    int total, h, m, s;
    printf("segundos: ");
    scanf("%d", &total);
    h = total  / 3600;
    m = (total % 3600) / 60;
    s = (total) % 60; 
     printf("Equivale a: %d h(s), %d m(s) y %d s(s)\n", h, m, s);

    return 0;
}
   
