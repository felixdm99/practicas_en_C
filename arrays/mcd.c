#include <stdio.h>

// FUNCION PARA CALCULAR EL MCD
int mcd(int a, int b) {

    int i;/*recorre divisores*/
    int menor;/*guardael numero mas chico entre a y b*/
    int resultado = 1;/*guardara el mcd encontrado*/

    // BUSCAR EL MENOR
    if(a < b) {
        menor = a;
    }
    else {
        menor = b;
    }

    // BUSCAR DIVISOR COMUN
    for(i = 1; i <= menor; i++) {/*recorre posibles divisores hasta dar con el menor*/

        if(a % i == 0 && b % i == 0) {/*verifica divisor.*/

            resultado = i;/*guarda el divisor*/
        }
    }

    return resultado;
}

int main() {

    int d[6] = {1, 2, 5, 10, 25, 50};

    int i, j;/*para recorrer filas y columnas*/

    printf("\nTABLA DE M.C.D\n\n");

    // MOSTRAR ENCABEZADO
    printf("%6s", " ");

    for(i = 0; i < 6; i++) {/*recorre el arreglo*/

        printf("%6d", d[i]);
    }

    printf("\n");

    // GENERAR TABLA
    for(i = 0; i < 6; i++) {/*recorre el areglo de nuevo pero esta vez como fila*/

        // PRIMER COLUMNA
        printf("%6d", d[i]);

        for(j = 0; j < 6; j++) {/*genera la columna*/

            printf("%6d", mcd(d[i], d[j]));/*calcula elmcd entrecolumna y fila*/
        }

        printf("\n");
    }

    return 0;
}