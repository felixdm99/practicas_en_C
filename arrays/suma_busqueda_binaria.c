#include <stdio.h>
#include <conio.h>
#define MAX 10
void ordenar(int a[]);/*le pasamos parametros osea datos que la funcncion o procedimiento necesita para trabajar*/
int busqueda_binaria(int a[], int j);
void mostrar(int a[], int n);
void aparece(int a[]);


int main (){
int arregloA[] = {20,33,42,55,90,1,5,2,8,10};
int arregloB[MAX];
int i;
for ( i = 0; i < MAX; i++)
{
    printf("ingrese un numero para el arreglo B");
    scanf("%d", &arregloB[i]);
    printf("posc %d cont %d", i, arregloB[i]);
}
int arregloC[MAX];
for (i = 0; i < MAX; i++)
{
    arregloC[i]= arregloA[i]+arregloB[i];
}
ordenar(arregloA);
ordenar(arregloB);


int arregloD[20];
int j = 0;
int k;
int encontrado;

for (i = 0; i < MAX; i++)
{
    arregloD[j] = arregloA[i];
    j++;
}

for (i = 0; i < MAX; i++)/*este for recorre TODO B*/
{
    encontrado = 0;

    for (k = 0; k < j; k++) /*este for recorre TODO D*/
    {
        if (arregloD[k] == arregloB[i])/*en este if si el el contenido del arreglod esta en b solo suma al contador*/
        {
            encontrado = 1;
        }
    }

    if (encontrado == 0)/*si el contador esta en 0 entonces suma ese numero al arreglo d*/
    {
        arregloD[j] = arregloB[i];
        j++;
    }
}
int arregloE[20];
int i = 0, k = 0, j = 0;

while (i < MAX && k < MAX)/*suma y ordenamineto alternativo*/
{
    if (arregloA[i] == arregloB[k])
    {
        arregloD[j++] = arregloA[i];
        i++;
        k++;
    }
    else if (arregloA[i] < arregloB[k])
    {
        arregloD[j++] = arregloA[i];
        i++;
    }
    else
    {
        arregloD[j++] = arregloB[k];
        k++;
    }
}

ordenar(arregloD);
busqueda_binaria(arregloD, j);
mostrar(arregloA, MAX) ;
mostrar(arregloB, MAX); 
mostrar(arregloC, MAX); 
mostrar (arregloD, j);
aparece(arregloC);

return 0;
}
int busqueda_binaria(int a[],int j){/*j es igual a cantidad de elementos*/

    int in=0;/*esta y la siguientes variables guardan posiciones*/
    int fn=j-1;/*j-1 es la ultima posicion valida del array ya que ejemplo tenes 5 elementos van del 0 al 4 entonces -1 se pondria en 4*/
    int med;
    int num;
    printf("ingrese un numero para buscar en el arregloD");
    scanf("%d", &num);
    while (in<=fn)
    {
        med=(in+fn)/2;/*como el arreglo tiene 20 posiciones eso da 10 y va a ir cambiando dependiendo de las iteraciones*/
        if (num==a[med])/*aqui interactuas con el arreglo, el med tiene posicion 10 en este caso*/
        {
            return 1; /*encontrado*/
            
        }
        else if (num<a[med])/*aqui interactuas con el arreglo, el med tiene posicion 10 en este caso*/
        {
            fn=med-1;/*si no lo entientra el nuevo final es antes del medio*/
            
        }
        else {/*si no lo encunetra el nuevo final es despues del medio y asi*/
            in = med + 1;
        }
    }
    return 0; //no encontrado
}



void ordenar(int a[]){
    int i;
    int j;
    int aux;/*se crea una variable aux que sirve para guardar un valor mientras otro se cambia de posicion*/
    for (i = 0; i < MAX; i++)
    {/*el primer for recorre y el otro compara posiciones*/
        for ( j = 0; j < MAX; j++)
        {
            if (a[i]< a[j])/*si el valor que esta en i es menor al que esta n j*/
            {
                aux=a[i];/*aux va a tomar el valor de i*/
                a[i]=a[j];/*el valor que estaba en j va a ir a i*/
                a[j]=aux;/*el valor que esta guardado en aux se pone en j*/
            }
            
        }
        
        
    }
    
}
void mostrar(int a[], int n){
    int i;
    for (i = 0; i < n; i++)
    {
        printf ("%d ", a[i]);
    }
    printf ("\n");
}
void aparece(int a[]){
    int cont=0;
    int i;
    int num;
    printf("ingresa un valor y lo buscaremos en el arreglo c");
    scanf("%d", &num);
    for (i = 0; i < MAX; i++)
    {
        if (num==a[i])
        {
            cont++;

        }
        
        
        

    }
    printf ("el numero ingresado %d aparece %d veces\n", num, cont);
    
}


