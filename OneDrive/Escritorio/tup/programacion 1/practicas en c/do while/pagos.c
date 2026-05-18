#include <stdio.h>
int main(){
    int pago, suma = 0;
    printf ("ingrese el primer pago:");
    scanf ("%d", &pago);
    suma = suma + pago;
    do
    {
        printf ("ingrese el siguiente pago. presione 0 para terminar:");
        scanf ("%d", &pago);
        suma = suma + pago;
    } while (pago != 0);
    printf ("el total de pagos del mes es de: %d", suma);
    
  return 0;
}