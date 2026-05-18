/*Ejercicio 5: While
5.1 Suponga que la Provincia del Chaco impone a los pescadores un límite en los Kg. 
de pesca que pueden recoger en un día, para preservar los recursos del río Paraná. 
Desarrolle un programa al que primero se le dé ese límite y luego se le vayan dando 
los pesos de lo que se va pescando y vaya mostrando el total de Kg. pescados hasta ese momento.
 Cuando supere el máximo se debe informar por pantalla en cuanto está excedido y terminar.
*/
#include <stdio.h>
int main (){
    int kl_mx;
    int kl;
    int suma = 0;
    int exceso;
    printf ("ingrese el kilo maximo aprobado por la provincia");
    scanf ("%d", &kl_mx);
    while (suma< kl_mx)
    {
        printf ("ingrese kilos pescados en este momento\n");
        scanf ("%d", &kl);
        suma +=kl;
        printf ("el total hasta ahora es de %d\n", suma);
        if (suma == kl_mx)
        {
            printf("estas en el limite ya no podes pescar mas");
        }
        
        if (suma>kl_mx)
    {
        exceso = suma-kl_mx;
        printf ("superaste la cantidad permitida de %d, te pasaste por %d no podes pescar mas", kl_mx, exceso);
        
        break;
    }

    }
    
    

    return 0;
}