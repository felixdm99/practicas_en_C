#include <stdio.h>

int main(){
    int num;
    printf ("ingrese un numero");
    scanf ("%d", &num);

    if (num == 0)
    {
        printf("no se puede dividir por 0");
    }
    if (num != 0 && num % 3 == 0){
        printf ("el numero %d es divisible por 3", num );
    }
    else {
        printf ("no es divisible por 3");
    }



    return 0;
}