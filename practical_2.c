#include<stdio.h>
main()
{
	int n;
	
	printf("Enter any number : ");
	scanf("%d",&n);
	
	int i , j;
	int a[n][n];
	
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0 || i==4 || j==0 ||j==4)
			{
				printf("%d ",a[i][j]);
			}
			else
			{
				printf("  ");
				
			}
		}
		printf("\n");
	}
	

	
}
