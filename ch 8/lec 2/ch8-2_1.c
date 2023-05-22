#include<stdio.h>
main()
{
	int n1;
	
	printf("enter array A size : ");
	scanf("%d",&n1);
		
	int a[n1];
	int i;
	
	for (i=0;i<n1;i++)
	{
			printf("Enter a[%d]",i);
			scanf("%d",&a[i]);
	}
	
	int n2;
	
	printf("Enter array b : ");
	scanf("%d",&n2);
	
	int b[n2];
	
	for (i=0;i<n2;i++)
	{
			printf("Enter b[%d]",i);
			scanf("%d",&b[i]);
	}
	
	for(i=0;i<n1;i++)
	{
		printf("%d",a[i]);
	}
	for(i=0;i<n2;i++)
	{
		printf("%d",b[i]);
	}
	
}
