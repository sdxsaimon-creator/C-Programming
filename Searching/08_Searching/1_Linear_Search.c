#include<stdio.h>

main()
{
int a[10], limit, i, found=0, loc=0, item;

printf("Enter limit: ");
scanf("%d",&limit);

printf("Enter %d elements:\n", limit);

	for(i = 1; i <= limit; i++)
	{
		scanf("%d",&a[i]);
	}

	printf("Enter item:\n");
	scanf("%d",&item);
	
	for(i = 1; i <= limit; i++)
	{
		if(a[i] == item)
		{
			found = 1;
			loc = i;
			
			printf("Item found at location: %d\n",loc);
		}
	}
		if(found == 0)
	{
		printf("Item not found");
	}

return 0;
}
