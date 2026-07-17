#include <stdio.h>

int main()
{
    int i = 1, n;

    printf("Enter how many numbers to print (less than 10): ");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d ", i);
        i++;
    }

    return 0;
}
