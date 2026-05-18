/*6.1 Escribe un programa de ayuda para reparar objetos. 
El programa primero debe preguntar si el objeto se mueve. Después debe preguntar si el objeto 
debería moverse. A continuación, el programa debe imprimir un mensaje en pantalla dependiendo de las
 opciones introducidas:
Si el objeto se mueve y debería moverse -> No hace falta reparar.
Si el objeto se mueve y no debería moverse -> Utilizar cinta americana.
Si el objeto no se mueve y no debería moverse -> No hace falta reparar.
Si el objeto no se mueve y debería moverse -> Utilizar aceite 3 en 1.

El usuario puede repetir esta operación las veces que considere necesario. El programa termina cuando se introduce 
el número 0, debe aparecer un mensaje por pantalla indicando que se termino de ejecutar el programa.
*/
#include <stdio.h>

int main() {
    int obj, deberia, opcion;

    do {
        printf("¿El objeto se mueve? (1 = si, 2 = no, 0 = salir): ");
        scanf("%d", &obj);

        if (obj == 0) {
            break;
        }

        printf("¿El objeto debería moverse? (1 = si, 2 = no): ");
        scanf("%d", &deberia);

        if (obj == 1 && deberia == 1) {
            printf("No hace falta reparar.\n");
        }
        else if (obj == 1 && deberia == 2) {
            printf("Utilizar cinta americana.\n");
        }
        else if (obj == 2 && deberia == 2) {
            printf("No hace falta reparar.\n");
        }
        else if (obj == 2 && deberia == 1) {
            printf("Utilizar aceite 3 en 1.\n");
        }

    } while (obj != 0);

    printf("Programa finalizado\n");

    return 0;
}