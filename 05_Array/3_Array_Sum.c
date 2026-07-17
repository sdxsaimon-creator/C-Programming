#include <stdio.h>
int main() {
int limit, i, value;
int sum = 0;
printf("Enter the number of elements: ");
scanf("%d", &limit);


for (i = 0; i < limit; i++) {
    printf("Enter value %d: ", i + 1);
    scanf("%d", &value);
    sum += value; 
}

printf("Total Sum = %d\n", sum);
return 0;
}
