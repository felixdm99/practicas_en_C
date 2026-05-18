/*6.2 6.2 Realizar un programa a partir de la siguiente información:
Entradas
a.- Cantidad de números a ingresar, será n
b.- El número a ingresar, llamaremos num.

Salidas
a.- Números menores a 15, un contador, lo denominaremos c15.
b.- Números mayores a 50, contador que se será c50.
c.- Números entre 25 y 45,  un contador se llamará c_rango.

Procesos o condiciones
a.- num < 15
b.- num  > 50; 
c.- num > 25 y num < 45;

*/
#include <stdio.h>
int main(){
  int n, num, cont_num, c15 = 0, c50, c_rango;
  printf ("ingrese la cantidad de nums a ingresar");
  scanf ("%d", &n);
  do
  {
    printf("ingrese un numero");
    scanf("%d", &num);
    cont_num +=1;

    if (num < 15)
    {
      c15 += 1;
    }
    else if (num > 50)
    {
      c50 +=1;
    }
    else if (num > 25 && num < 45)
    {
      c_rango +=1;
    }
    
    


  } while (cont_num <= n);
  printf("los numeros menores a 15 fueron %d\n ", c15);
  printf("los numeros mayores a 50 fueron %d\n ", c50);
  printf("los numeros meyores a 25 y menores a 45 fueron %d\n ", c_rango);
  


  return 0;
}