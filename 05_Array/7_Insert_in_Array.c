#include<stdio.h>
main()
{
int a[10];
int i, limit, pos, item;
printf("Enter the number of elements (limit): ");
scanf("%d", &limit);
printf("Enter %d elements:\n", limit);
for (i = 0; i < limit; i++) {
    printf("a[%d]: ", i);
    scanf("%d", &a[i]);
}

if (limit == 10) {
    printf("Insertion is not possible (Array full).\n");
    return 0; 
}
printf("Enter the position to insert (1 to %d): ", limit + 1);
scanf("%d", &pos);
printf("Enter the item to insert: ");
scanf("%d", &item);

if (pos < 1 || pos > limit + 1) {
    printf("Invalid position!\n");
    return 0; 
}
int target_index = pos - 1;
for (i = limit - 1; i >= target_index; i--) {
    a[i + 1] = a[i];
}
a[target_index] = item;
limit++; 
printf("Array after insertion:\n");
for (i = 0; i < limit; i++) {
    printf("%d ", a[i]);
}
printf("\n");

return 0;
}
