#include <stdio.h>
#include <conio.h>
int main (){
    int elem [10];
    int i;
    int j;
    for (i = 0; i < 10; i++)
    {
        printf ("ingrese un numero");
        scanf("%d", &elem[i]);
    }
    for (i = 0; i < 10; i++){
        printf ("posicion : %d elemento: %d\n", i, elem[i] );
    }
    
return 0;
}