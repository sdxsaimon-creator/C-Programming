#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10], str2[20];

    printf("Enter a string: ");
    gets(str1);

    strcpy(str2, str1);

    printf("Copied String: %s", str2);

    return 0;
}
