#include<stdio.h>
main()
{
	int n;
	
	printf("enter array size : ");
	scanf("%d",&n);
	
	int a[n],b[n],c[n],i;
		
			printf("Enter any array A's element : \n");
			
		for(i=0;i<n;i++)
		{
			printf("enter a[%d]",i);
			scanf("%d",&a[i]);
		}
		
			printf("Enter any array B's element : \n");
			
		for(i=0;i<n;i++)
		{
			printf("enter b[%d]",i);
			scanf("%d",&b[i]);
		}ss
		for(i=0;i<n;i++)
		{
			c[i] = a[i] + b[i];
			printf("%d ",c[i]);
		}
		
}
