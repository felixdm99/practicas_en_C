/*4.4 Escribir un programa que permita determinar si un número entero que se ingresa por  
 teclado es perfecto. Un número es perfecto si es igual a la suma de sus divisores propios*/


#include <stdio.h>

int main(){
    int n, i= 1, suma = 0;
    
    printf ("ingrese un numero");
    scanf ("%d", &n);
    while (i<n)
    {
        if (n%i==0)
        {
            suma += i;
        }
        i++;
        
    }
    if (suma == n)
        {
            printf ("es un numero perfecto");
        }
        else{
            printf ("no es perfecto");
        }
    
    
    return 0;
}