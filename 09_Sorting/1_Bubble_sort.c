#include<stdio.h>

main()
{
int a[10], i, limit, j, temp;

printf("Enter limit: ");
scanf("%d",&limit);

printf("Enter %d elements: ",limit);

for(i=1;i<=limit;i++)
{
	scanf("%d",&a[i]);
}

for(i=1;i<=limit;i++)
{
	for(j = 1; j <= limit - i; j++)
	{
		if(a[j] > a[j+1])
		{
			temp = a[j];
			a[j] = a[j+1];
			a[j+1] = temp;
		}
	}
}

printf("Sorted array:\n");
	for(i = 1; i <= limit; i++)
	{
		printf("%d ",a[i]);
	}	

return 0;
}
