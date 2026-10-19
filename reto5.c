#include <stdio.h>

int main (void)
{
int Pulsos = 4;

int total;
printf("Total de pulos:");
scanf("%d", &total);
int compases = total / Pulsos ;
int sobrante = total % Pulsos ;
printf("compases completos: %d\n", compases);
printf("Pulsos q sobran: %d\n", sobrante);
return 0;
}
