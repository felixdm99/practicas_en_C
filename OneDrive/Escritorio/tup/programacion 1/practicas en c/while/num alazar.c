/*7.3 En este ejercicio se debe programar un juego donde la computadora elige un número al azar entre 
1 y 10, y el jugador tiene que adivinarlo. La estructura del programa es la siguiente: 
1. el programa elige al azar un número n entre 1 y 10 
2. el usuario ingresa un número u
3. si u no es el número exacto, el programa dice si n es más grande o más chiquito que el número ingresado
4. repetir desde 2. hasta que u sea igual a n

Usar un bucle para que el programa le pida un entero al usuario por lo menos una vez y se repita hasta que 
sea encontrada el entero n. El programa tiene que imprimir los mensajes adecuados para informarle al usuario 
qué hacer y qué pasó. 

Para conseguir un número aleatorio dentro de un programa en C, usar las siguientes sentencias: 
srand(time(0)); n = rand(); Para que ese número aleatorio sea entre 1 y 10 (inclusive), reemplazar 
la segunda sentencia por: n = (rand() % 10) + 1;
*/
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>   
int main(){
    int n,u;
    srand(time(0));
    n = (rand() % 10) + 1;
    printf ("ingresa un numero!");
    scanf("%d", &u);
    
    while (u!=n)
    {
        if (u<n)
        {
            printf ("un pocomasarriba\n");
        }
        else if (u>n) {
            printf("un poco mas abajo\n");
        }
        printf ("ingresa nuevamente un numero!\n");
        scanf("%d", &u);
    }
    printf ("felicidades, acertaste!!!");
    
    return 0;
}