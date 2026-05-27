/*.2 Realizar un programa que defina un vector llamado “vector_numeros” de 10 enteros, 
a continuación, lo inicialice con valores aleatorios (del 1 al 10) y posteriormente 
muestre en pantalla cada elemento del vector junto con su cuadrado y su cubo. Usar la función pow.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int vec[10];
    int i;
    int j;
    int z;
    for ( i = 0; i < 10; i++)
    {
        vec[i]=(rand()%10)+1;
        printf("%d %d %d\n", vec[i], (int)pow(vec[i], 2), (int)pow(vec[i], 3));
    }
    
    
    
    return 0;
}