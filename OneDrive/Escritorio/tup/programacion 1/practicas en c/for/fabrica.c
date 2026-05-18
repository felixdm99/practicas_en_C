/*7.1 Una planta que fabrica perfiles de hierro posee un lote de n piezas.
Confeccionar un programa que pida ingresar por teclado la cantidad de piezas
 a procesar y luego ingrese la longitud de cada perfil; sabiendo que la pieza 
 cuya longitud esté comprendida en el rango de 1.20 y 1.30 son aptas. Imprimir por 
 pantalla la cantidad de piezas aptas que hay en el lote.

*/

#include <stdio.h>
int main(){
    int cant_piezas,cont,cant_total=0;
    float long_perfiles;
    printf ("ingrese la cantidad de piezas a procesar");
    scanf("%d", &cant_piezas);
    for ( cont = 0; cont < cant_piezas; cont++)
    {
        printf("ingrese la logintud del perfil");
        scanf ("%f", &long_perfiles);
        if (long_perfiles >= 1.20 && long_perfiles <=1.30)
        {
            cant_total++;
        }
        
    }
    printf ("la cantidad de piezas aptas para el lote es de %d", cant_total);
    
    return 0 ;
}