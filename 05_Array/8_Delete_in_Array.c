#include <stdio.h>

int main() 
{
    int a[10], i, limit, pos;
    
    printf("Enter limit: ");
    scanf("%d", &limit);
    
    if (limit <= 0 || limit > 10) 
    {
        printf("Invalid limit!\n");
        return 0;
    }
    
    printf("Enter %d elements:\n", limit);
    for (i = 0; i < limit; i++)
    {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    
    printf("Enter the position to delete (1 to %d): ", limit);
    scanf("%d", &pos);
    
    
    if (pos < 1 || pos > limit)
    {
        printf("Invalid position\n");
        return 0;
    }
    
    
    int target_index = pos - 1; 
    
    
    for (i = target_index; i < limit - 1; i++)
    {
        a[i] = a[i + 1];
    }
    limit--; 
    
    printf("Array after deletion: ");
   
    for (i = 0; i < limit; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    return 0;
}
