/*7.4 Diseñar un programa que ingrese las notas y legajos de un curso por teclado utilizando 
los controles de datos mediante estructuras repetitivas y determine cantidad de aprobados 
reprobados y promocionados imprimir su legajo con una leyenda A o R o P y el operador deberá 
decidir cuando termina el ingreso de datos ingresando un legajo negativo*/

#include <stdio.h>
int main(){
    int legajo, contA=0,contR=0,contP=0;
    int notas;
    printf ("ingrese legajo(ingrese un negativo para terminar)\n");
    scanf("%d", &legajo);
    while (legajo>0)
    {
        printf ("ingrese nota\n");
        scanf("%d", &notas);
        if (notas < 6)
        {
            contR +=1;
            printf ("%d desaprobado!\n", legajo);
        }
        else if (notas >=6 && notas <= 8)
        {
            contA +=1;
            printf ("%d aprobado!\n", legajo);
        }
        else{
            contP +=1;
            printf ("%d promocionado!\n", legajo);
        }
        printf ("ingrese legajo(ingrese un negativo para terminar)\n");
        scanf("%d", &legajo);
    }
        printf("lacantidad de desaprobados son %d\n"
            "la cantidad de aprobados son %d\n"
            "la cantidad de promocionados son %d\n", contR, contA, contP);
        
        return 0;
}