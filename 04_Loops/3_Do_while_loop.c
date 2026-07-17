#include <stdio.h>

int main()
{
    int i = 1, n;

    printf("Enter how many numbers to print (less than 10): ");
    scanf("%d", &n);

    do
    {
        printf("%d ", i);
        i++;
    }
    while (i <= n);

    return 0;
}
