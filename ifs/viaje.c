/*Realizar un programa que muestre los posibles destinos de viaje en pantalla, y que, mediante una selección 
por menú,muestre en pantalla la cantidad que cuesta el viaje a un destino introducido desde teclado. 
Después de esto el mismo programa debe pedir el dinero disponible por el viajero y en función de él, 
le indique el destino más lejano al que puede viajar.*/
/*Viaje	Rcia.- Tacopozo	Rcia – Villa Ángela	Rcia.-Castelli	Rcia.-San Martín
Precio	$ 40.000	$ 35.000	$ 40.500	$ 25.000
*/

#include <stdio.h>

int main (){
    int destino, dinero;
printf ("preciona uno de los siguientes numeros para elegir el destino\n1)_Rcia. a Tacopozo\n2)_Rcia a Villa Ángela\n3)_Rcia. a Castelli\n4)_Rcia. a San Martín");
scanf ("%d", &destino);
    switch (destino)
    {
    case 1:
        printf ("resistencia a tacopozo tiene un valor de $ 40.000\n Cuanto ingrese el dinero que tenga disponible para ver el destino correspondiente");
        scanf ("%d", &dinero);
        
        break;
    case 2:
        printf ("Rcia a Villa Ángela tiene un valor de $ 35.000\n Cuanto ingrese el dinero que tenga disponible para ver el destino correspondiente");
        scanf ("%d", &dinero);
        break;
    case 3:
        printf ("Rcia a Castelli tiene un valor de $ 40.500\n Cuanto ingrese el dinero que tenga disponible para ver el destino correspondiente");
        scanf ("%d", &dinero);
        break;
    case 4:
        printf ("Rcia a San Martín tiene un valor de $ 25.000\n Cuanto ingrese el dinero que tenga disponible para ver el destino correspondiente");
        scanf ("%d", &dinero);
        break;
    
    default:
        break;
    }
if (dinero >= 40500)
{
    printf ("excelente iremos a castelli");
}
else if (dinero >= 40000)
{
    printf ("excelente iremos a tacopozo");
}
else if (dinero >=35000)
{
    printf ("excelente iremos a villa angela");
}
else if (dinero >=25000)
{
    printf ("excelente iremos a san martin");
}
else {
    printf ("no te alcanza");
}
    
    return 0;
}