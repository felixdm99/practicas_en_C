#include <stdio.h>
#define MAX 5
void mostrar(int a[]);
int pares (int a[]);
int main (){
    int vec [MAX], p;
    int i;
    for ( i = 0; i < MAX; i++)
    {
        printf ("ingrese un numero entero\n");
        scanf("%d", &vec[i]);
    }
    mostrar(vec);
    pares(vec);
    printf("la cantidad de elementos pares es de %d\n",p);
    return 0;
    
}