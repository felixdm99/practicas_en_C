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
