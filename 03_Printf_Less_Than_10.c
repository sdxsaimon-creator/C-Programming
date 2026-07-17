#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[10];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("\nNumbers less than 10 are:\n");
    for (int i = 0; i < n; i++) {
        if (a[i] < 10) 
	{ 
            printf("%d ", a[i]);
        }
    }
    printf("\n");
    return 0;
}
