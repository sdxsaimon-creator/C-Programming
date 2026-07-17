#include <stdio.h>

int main()
{
    int a[100], i, limit;

    printf("Enter array size: ");
    scanf("%d", &limit);

    printf("Enter %d elements:\n", limit);

    for(i = 0; i < limit; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Array elements are:\n");

    for(i = 0; i < limit; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
