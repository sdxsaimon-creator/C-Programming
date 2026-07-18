#include <stdio.h>
#include <string.h>

int main()
{
    char str[10];

    printf("Enter a string: ");
    gets(str);

    printf("Length = %d", strlen(str));

    return 0;
}
