#include <stdio.h>
/*si quiero cargar los datos en un de un array primero lo hago con un for y luego con otro lo muestro*/
int main(){
    int nums[4];
    int i;
    int sum=0;
    for ( i = 0; i< 4; i++)
    {
        printf ("ingresa numero");
        scanf("%d", &nums[i]);
    }

    for ( i = 0; i < 4; i++)
    {
        printf ("%d ", nums[i]);
        sum = sum+nums[i];/*PARA SUMARLOSuso sumo el array con el i ya que suma el valor de esa posicion*/
    }
    printf("%d", sum);
    
    
    return 0;
}