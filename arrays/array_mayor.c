#include <stdio.h>
int main(){
    int nums[4];
    int i;
    int mayor;
    for ( i = 0; i< 4; i++)
    {
        printf ("ingresa numero");
        scanf("%d", &nums[i]);
    }

    for ( i = 0; i < 4; i++)
    {
        printf ("%d ", nums[i]);
        if (nums[i]>mayor)
        {
            mayor=nums[i];
        }
        
        
    }

    
    printf("elmayor es %d",mayor);
    
    
    return 0;
}