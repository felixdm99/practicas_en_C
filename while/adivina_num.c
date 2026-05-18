/*Usar un bucle para que el programa le pida un entero al usuario por lo menos una vez 
y se repita hasta que sea encontrada el entero n. El programa tiene que imprimir los 
mensajes adecuados para informarle al usuario qué hacer y qué pasó.*/ 
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
