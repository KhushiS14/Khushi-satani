#include<stdio.h>
main()
{
	int n;
	
	printf("enter array number : ");
	scanf("%d",&n);

	int a[n];
	int i;
	
	printf("Enter element : ");
	
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("%d",n);
	
	return 0;
}
