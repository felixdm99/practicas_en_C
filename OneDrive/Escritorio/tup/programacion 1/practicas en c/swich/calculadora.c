#include <stdio.h>
int main(){
    int num1, num2, op, resp;
    float resp1;
    printf ("ingrese dos numeros");
    scanf ("%d %d", &num1, &num2);
    printf("seleccione la operacion que quiere realizar\n 1) suma \n2)resta\n3) multiplicacion\n4) division");
    scanf ("%d", &op);
    switch (op)
    {
    case 1:
        resp = num1 + num2;
        printf ("%d", resp);
        break;
    case 2:
        resp = num1 - num2;
        printf ("%d", resp);
        break;
    case 3:
        resp = num1 * num2;
        printf ("%d", resp);
        break;
    case 4:
    if (num2 == 0)
    {
        printf("no se puede dividir por 0");
    }
    else{
    
        resp1 =(float) num1 / num2;
        printf ("%f", resp1); 
    }
    break; 
    default:
    printf ("ingrese una opcion valida");
        break;
    }
    return 0;
}