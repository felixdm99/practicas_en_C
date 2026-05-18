#include <stdio.h>
/*si quiero cargar los datos en un de un array primero lo hago con un for y luego con otro lo muestro*/
int main(){
    int nums[4];
    int i;
    int sum=0;
    int prom;
    for ( i = 0; i< 4; i++)
    {
        printf ("ingresa numero");
        scanf("%d", &nums[i]);
    }

    for ( i = 0; i < 4; i++)
    {
        printf ("%d ", nums[i]);
        sum = sum+nums[i];
        prom = sum/4;
    }
    printf(" lasuma de todos es %d y el promedio es de %d", sum, prom);
    
    
    return 0;
}