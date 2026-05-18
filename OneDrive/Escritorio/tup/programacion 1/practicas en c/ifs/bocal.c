#include <stdio.h>
#include <ctype.h>
int main (){

    char letra;
    printf ("ingrese una letra \n");
    scanf (" %c", &letra);
    letra = tolower(letra);
    if ((letra == 'a') || (letra == 'e') || (letra == 'i') || (letra == 'o') ||(letra == 'u')){
        printf (" %c es una vocal\n", letra);
    }
    else {
        printf (" %c no es una vocal\n", letra);
    }
    return 0;
}