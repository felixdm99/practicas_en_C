
/*Calcular la edad de una persona de acuerdo al algoritmo elaborado en el TP1.*/

#include <stdio.h>


int main() {
int anio_nac, mes_nac, dia_nac, anio, mes, dia;
printf ("ingrese el año, mes y dia de nacimiento");
scanf ("%d %d %d", &anio_nac, &mes_nac, &dia_nac);
printf ("ingrese el año, mes y dia de hoy");
scanf ("%d %d %d", &anio, &mes, &dia);

int edad = anio-anio_nac;
if (anio_nac > anio)
{
    printf("usted aun no a nacido");
}

if (mes > mes_nac || (mes == mes_nac && dia >= dia_nac)){
printf("Edad: %d", edad);}
else {
        printf ("%d", edad-1);
    }

return 0;
}