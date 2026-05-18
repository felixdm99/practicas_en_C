#include <stdio.h>
#include <math.h>

int main() {
    int x, N, b, s = 0, i = 0;

    printf("Ingrese un numero: ");
    scanf("%d", &N);

    printf("Ingrese la base: ");
    scanf("%d", &b);

    while (N > 0) {
        x = N % b;
        N = N / b;
        s = s + x * pow(10, i);
        i++;
    }

    printf("Resultado: %d\n", s);

    return 0;
}