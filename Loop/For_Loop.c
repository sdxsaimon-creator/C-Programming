#include <stdio.h>

int main() {
int a,i;
printf("Enter how many numbers to print (less than 10): ");
scanf("%d", &a);

for( i = 1; i <= a; i++)
{
    printf("%d ", i); 
}

return 0;    
}
