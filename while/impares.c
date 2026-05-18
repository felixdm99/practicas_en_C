#include <stdio.h>
int main (){
    int cont;
    int n;

    printf ("dame un numero: ");
    scanf ("%d", &n);
    cont = 1;
    while (cont <=n)
    {
        printf("%d\n", cont);
        cont = cont+2;
    }
    return 0;

    printf ("dame un numero: ");
    scanf ("%d",&n);
    for (cont = 1; cont <= n; cont ++)
    {
        if (n%2 == 0){
            printf ("%d \n", cont);
        }
    }
    
}