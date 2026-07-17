#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    (a > b) ? printf("%d is Larger", a) : printf("%d is Larger", b);

    return 0;
}
