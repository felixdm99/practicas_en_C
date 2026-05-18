/*4.4 Escribir un programa que permita determinar si un número entero que se ingresa por   teclado es perfecto.
 Un número es perfecto si es igual a la suma de sus divisores propios*/


#include <stdio.h>
int main(){
    int num;
    int i;
    int suma= 0;
    printf ("ingrese un numero");
    scanf ("%d", &num);
    for ( i = 1; i <= num-1; i++)
    {
        if (num % i == 0)
        {
            suma +=i;
        }
    }
    if (suma == num){
        printf("es perfecto");
    }
    else {
        printf("no es perfecto");
    }
    
    return 0;
}