#include <stdio.h>
int main(){
    int numeros[5];
    int cont=0;
    while (cont!=5)
    {
        printf ("ingrese nunmeros");
        
        scanf ("%d", &numeros[cont]);
        cont ++;
    }
    printf ("%d %d %d %d %d", numeros[0], numeros[1], numeros[2], numeros[3], numeros[4]);
    
    return 0;
}