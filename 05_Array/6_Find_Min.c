#include <stdio.h>
int main() { 

    int a[10], i, limit, min; 
    printf("Enter limit: ");
    scanf("%d", &limit);
     
    printf("\nEnter %d elements : ", limit);
     
    for(i = 0; i < limit; i++)
    {
        scanf("%d", &a[i]);
    }
     
    min = a[0]; 
     
    for(i = 0; i < limit; i++)
    {
        if(a[i] < min) 
        {
            min = a[i];
        }
    }
     
    printf("Minimum element = %d\n", min);
     
    return 0;
}
