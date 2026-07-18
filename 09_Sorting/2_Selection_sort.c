#include <stdio.h>

int main()
{
int a[10], limit, temp, i, j, min;

printf("Enter limit: ");
scanf("%d",&limit);

printf("Enter %d elements: ",limit);
for(i=1;i<=limit;i++)
{
	scanf("%d",&a[i]);
}

for(i=1;i<=limit;i++)
{
	min = i;
	
	for(j = i+1 ; j <= limit ; j++)
	{
		if(a[min] > a[j])
		{
				min = j;
		}
	}

	temp = a[min];
	a[min] = a[i];
	a[i] = temp;
}

printf("Sorted array:\n");
for(i=1;i<=limit;i++)
{
	printf("%d ",a[i]);
}
printf("\n");

return 0;
}
