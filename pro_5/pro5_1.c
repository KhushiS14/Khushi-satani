#include<stdio.h>
main()
{
	int a[1000];
	int i ,n ;
	
	
	printf("Enter array : ");
	scanf("%d",&n);
	
	printf("Enter elements in array : ");
	
	for(i=0 ;i<n ;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("all negetive number is : ");
	
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("%d",a[i]);
		}
	}
}
