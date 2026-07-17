#include <stdio.h>

int main()
{
    int a[100], i, limit, sum = 0;
    float average;

    printf("Enter array size: ");
    scanf("%d", &limit);

    printf("Enter %d elements:\n", limit);

    for(i = 0; i < limit; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    average = (float)sum / limit;

    printf("Average = %.2f", average);

    return 0;
}
