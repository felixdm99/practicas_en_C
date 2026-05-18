#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793

int main() {
    float grados, rad, resultado;
    int opcion;

    printf("Ingrese un angulo en grados: ");
    scanf("%f", &grados);


    printf("Elija la funcion:\n");
    printf("1) Seno\n");
    printf("2) Coseno\n");
    printf("3) Tangente\n");
    scanf("%d", &opcion);

    rad = grados * PI / 180;

  
    switch(opcion) {
        case 1:
            resultado = sin(rad);
            printf("Seno = %f\n", resultado);
            break;

        case 2:
            resultado = cos(rad);
            printf("Coseno = %f\n", resultado);
            break;

        case 3:
            if ((int)grados % 180 == 90) {
                printf("Error: la tangente no esta definida para ese angulo\n");
            } else {
                resultado = tan(rad);
                printf("Tangente = %f\n", resultado);
            }
            break;

        default:
            printf("Opcion invalida\n");
    }

    return 0;
}