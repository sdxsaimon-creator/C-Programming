#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 10)
    {
        printf("%d", num);
    }

    return 0;
}
