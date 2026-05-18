#include <stdio.h>
int main(){
    int i;
    int o;
    for ( i = 10; i >= 1; i--)
    {
        for ( o = 1; o <= i; o++)
        {
            printf("%d ", o);
        }
        printf ("\n");
        
        
        
    }
    
    return 0;
}