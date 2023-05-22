#include<stdio.h>
main()
{
	int n;
	printf("Enter array size : ");
	scanf("%d",&n);
	
	int i ;
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("square = ");
	for(i=0;i<n;i++)
	{
		a[i] = a[i]*a[i];
		printf("%d ",a[i]);
	}	
}
