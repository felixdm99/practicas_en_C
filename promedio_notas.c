/*Reto: Contador de Notas de Examen
El objetivo es procesar las notas de un grupo de alumnos para obtener estadísticas básicas.
1. Validación de Inicio
El programa debe pedir un PIN de seguridad (ejemplo: 99) para comenzar. Si el usuario se equivoca, 
debe insistir hasta que el PIN sea el correcto.
2. Carga de Notas
Una vez dentro, el programa preguntará: "¿Desea ingresar una nota? (1=Sí / 0=No)".
Mientras el usuario elija 1, se pedirá una nota (del 1 al 10).
Si la nota es menor a 4, el programa debe mostrar el mensaje "Reprobado". De lo contrario, mostrará "Aprobado".
El programa debe contar cuántas notas se ingresaron en total y sumarlas.
3. Cierre y Promedio
Cuando el usuario decida no ingresar más notas (presionando 0):
El programa debe mostrar el Promedio Final (Suma de notas / Cantidad de notas).
Para finalizar, el programa debe imprimir una fila de 10 puntos (.) seguidos como un separador decorativo.*/

#include <stdio.h>

int main() {
    printf ("ingresa el pin de seguridad");
    int pin;
    int nota ;
    int cantidad_notas = 0;
    int notas = 0;
    scanf ("%d", &pin);
    while (pin != 99)
    {
        printf ("porfavor ingresa el pin correcto");
        scanf ("%d", &pin);
    }
    printf ("¿desea cargar una nota? presione 1 para si o 0 para no");
    int cargar_nota;
    scanf ("%d", &cargar_nota);
    while (cargar_nota == 1 )
    {
    switch (cargar_nota)
    {
    case 1:
        printf ("ingrese nota ");
        scanf ("%d",&nota);
        if (nota < 4){
            printf ("reprobado");
        }
        else {
            printf("aprobado!!");
        }
        cantidad_notas++;
        notas += nota;
        
        
        break;
    default:
    printf ("okey no va a cargar mas notas chau");
        break;
    }
    printf ("¿desea cargar  nota? presione 1 para si o 0 para no");
    scanf ("%d", &cargar_nota);
    }
    float promedio = (float)notas / (float)cantidad_notas;
    printf ("el promedio es de %f", promedio);

    return 0;

    
}