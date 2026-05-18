#include <stdio.h>
int main(){
    int numeros[5];
    int i;
    int bus;
    for ( i = 0; i < 5; i++)
    {
        printf("ingresar numeros");
        scanf("%d", &numeros[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        printf("%d",numeros[i]);
    }
    printf("ingresa el numero a buscar");
    scanf("%d", &bus);
      for ( i = 0; i < 5; i++)
    {
        if (numeros[i]== bus)
        {
            printf("numero encontrado!");
        }
         else{
        printf ("no encontrado!");
    }
    
        
    }
    
    
    return 0;
}