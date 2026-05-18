/*Los alumnos de un curso se han dividido en dos grupos A y B de acuerdo al sexo y el nombre. 
El grupo A está formado por las mujeres con un nombre anterior a la M y los hombres con un 
nombre posterior a la N y el grupo B por el resto. Escribir un programa que pregunte al usuario 
su nombre y sexo, y muestre por pantalla el grupo que le corresponde.*/

#include <stdio.h>

int main(){
    char nombre [30], sexo;

    printf ("ingrese su nombre\n");
    scanf ("%s", nombre);
    printf ("ingresa el sexo\n");
    scanf (" %c", &sexo );

    if ((sexo == 'f' && nombre[0] < 'm')||( sexo == 'm'&& nombre [0] > 'n' )){
        printf ("Pertences al grupo A,\n");
    } else {
        printf("Pertecenes al grupo B\n");
    }

    
    return 0;
}