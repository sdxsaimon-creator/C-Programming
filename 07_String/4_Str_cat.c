#include<stdio.h>
#include<string.h>
main()
{
char ch1[20], ch2[10];
int length;
printf("Enter 1st String: ");
gets(ch1);

printf("Enter 2nd String: ");
gets(ch2);

printf("String name after catanation: %s \n",strcat(ch1, ch2));

length = strlen(ch1);
printf("The lenght of the Catanated string is %d",length);

return 0;
}
