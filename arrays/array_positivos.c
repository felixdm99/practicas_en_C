#include <stdio.h>
int main(){
    int nums[5];
    int i;
    int cont=0;
    for ( i = 0; i< 5; i++)
    {
        printf ("ingresa numero");
        scanf("%d", &nums[i]);
    }

    for ( i = 0; i < 5; i++)
    {
       
        if (nums[i]>0)
        {
            printf ("%d\n", nums[i]);
            cont++;
        }
        
    }
    printf ("tenemos %d numeros positivos\n", cont);

    

    
    
    return 0;
}