#include <stdio.h>
#include <string.h>

int main()
{
char ch[30], ch1[30], ch2[10];

printf("Enter 1st string: ");
gets(ch);
printf("The original string: %s\n", ch);

strcpy(ch1, ch); 
printf("After copying the string is: %s\n\n", ch1);

printf("Enter 2nd String: ");
gets(ch2);

printf("String name after concatenation: %s\n", strcat(ch1, ch2));

return 0;
}
