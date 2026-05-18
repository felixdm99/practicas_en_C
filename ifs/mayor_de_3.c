#include <stdio.h>
int main(){

    int num1, num2, num3;
    printf ("ingrese 3 numeros");
    scanf ("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2 && num2>num3)
    {
        printf ("%d es mayor", num1);
    }
    else if (num2>num3)
    {
        printf ("%d es mayor", num2);
    }
    else
    printf ("%d es mayor", num3);
    
    

    return 0;
}