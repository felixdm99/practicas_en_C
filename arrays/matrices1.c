#include <stdio.h>

int main() {

    int matriz[3][3];
    int vector[6];/*arreglo para los 3 numeros de ladiagonal principal y secundaria*/
    int i, j;/*i: filas,j: columnas*/
    int k = 0;/*recorre el arreglo en la posicion donde guardaremos el proximo numero*/
    int repetido;
    int x;
    // CARGA MATRIZ
    for(i = 0; i < 3; i++) {/*recorre lasfilas*/

        for(j = 0; j < 3; j++) {/*recorre columnas*/

            printf("Ingrese numero [%d][%d]: ", i, j);/*el valor se guardaen el choque de las filas y las columnas*/
            scanf("%d", &matriz[i][j]);
        }
    }
        // MOSTRAR MATRIZ
    printf("\nMatriz:\n");

    for(i = 0; i < 3; i++) {

        for(j = 0; j < 3; j++) {

            printf("%4d", matriz[i][j]);
        }

        printf("\n");
    }

    // DIAGONAL PRINCIPAL
    for(i = 0; i < 3; i++) {/*recorre filas*/

        for(j = 0; j < 3; j++) {/*recorre columnas*/

            if(i == j) {/*fila y columnas son igual?*/

                vector[k] = matriz[i][j];/*si son iguales guarda ese num de la matriz en el vector*/
                k++;/*si no estuviera esto siempre sobrescribe la 1er posicion*/
            }
        }
    }

    // DIAGONAL SECUNDARIA
    for(i = 0; i < 3; i++) {

        for(j = 0; j < 3; j++) {

            if(i + j == 2) {/*la suma de la matrizy la fila da 2*/

                vector[k] = matriz[i][j];
                k++;
            }
        }
    }

    // MOSTRAR VECTOR
    printf("\nVector:\n");

    for(i = 0; i < k; i++) {

        printf("%d ", vector[i]);
    }

    return 0;
}