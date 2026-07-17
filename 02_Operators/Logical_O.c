#include <stdio.h>

int main()
{
    int a = 10, b = 20;

    printf("(a < b && b > 15) = %d\n", (a < b && b > 15));
    printf("(a > b || b > 15) = %d\n", (a > b || b > 15));
    printf("!(a > b) = %d\n", !(a > b));

    return 0;
}
