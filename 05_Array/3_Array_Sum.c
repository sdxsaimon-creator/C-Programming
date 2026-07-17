#include <stdio.h>

int main()
{
    int a[100], i, limit, sum = 0;

    printf("Enter array size: ");
    scanf("%d", &limit);

    printf("Enter %d elements:\n", limit);

    for(i = 0; i < limit; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("Sum = %d", sum);

    return 0;
}
