#include <stdio.h>

int main() {
    char texto[100];
    int k;

    scanf("%s %d", texto, &k);

    for (int i = 0; texto[i] != '\0'; i++) {
        printf("%c", (texto[i] - 'A' + k) % 26 + 'A');
    }
    printf("\n");

    return 0;
}