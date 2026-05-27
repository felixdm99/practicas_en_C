#include <stdio.h>
#define MAX 5
struct clientes
{
    int num;
    char tipo;
    char nombre[50];
    int num_contacto;
};
int main(){
    struct clientes cliente[MAX];
    int i;
    char tipo;
    for (i = 0; i < MAX; i++)
    {
        printf ("\ningrese numero del cliente");
        scanf (" %d", &cliente[i].num);
        do
        {
            printf ("\ningrese el tipo del cliente");
        scanf (" %c", &cliente[i].tipo);
        if (cliente[i].tipo!= 'E' && cliente[i].tipo !='P')
        {
            printf ("\ningrese un tipo del cliente valido");
        }
        } while (cliente[i].tipo!= 'E' && cliente[i].tipo !='P');
            
        printf ("\ningrese nombre del cliente");
        scanf (" %s", cliente[i].nombre);    
        printf ("\ningrese numero de contacto del cliente");
        scanf (" %d", &cliente[i].num_contacto);            
    }
    for (i = 0; i < MAX; i++)
    {
        printf("\n--- Cliente %d ---\n", i + 1);
        printf("Numero: %d\n", cliente[i].num);
        printf("Tipo: %c\n", cliente[i].tipo);
        printf("Nombre: %s\n", cliente[i].nombre);
        printf("Contacto: %d\n", cliente[i].num_contacto);
    }
    
    return 0;
}
