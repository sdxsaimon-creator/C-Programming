#include<stdio.h>
main() {
int a[10],i,limit,max;
printf("Enter limit: ");
scanf("%d",&limit);

printf("\n Enter %d elements : ",limit);

for(i=0;i<limit;i++)
{
	scanf("%d",&a[i]);
}

max = a[0];

for(i=0;i<limit;i++)
{
	if(a[i]>max)
	{
		max = a[i];
	}
}

printf("Maximum element = %d",max);

return 0;
}
