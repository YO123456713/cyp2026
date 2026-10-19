#include <stdio.h>
int main(void)
{
    int cuenta;
    scanf("%d", &cuenta);
    float propina = cuenta*(15.0/100.0);
    printf("propina: %.2f\n", propina);
    return 0;
}