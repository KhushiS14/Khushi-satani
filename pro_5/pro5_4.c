#include<stdio.h>
main()
{
	int r,c;
	printf("enter row size : ");
	scanf("%d",&r);
	
	printf("enter col size : ");
	scanf("%d",&c);
	
	int a[r][c];
	int i,j,n1,n2,sum1=0,sum2=0;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
    }
    
    printf("enter row number :  ");
    scanf("%d",&n1);
    printf("elements of row : ");
    
    for(i=n1;i<=n1;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		printf("%d",a[n1][j]);
    		sum1=sum1+a[n1][j];
		
		}
	}
	printf("\nthe sum of row : %d",sum1);
	
	printf("\n\nenter col number :  ");
    scanf("%d",&n2);
    printf("elements of col : ");
    
    for(i=0;i<r;i++)
    {
    	for(j=n2;j<=n2;j++)
    	{
    		printf("%d",a[i][n2]);
    		sum2=sum2+a[i][n2];
		
		}
	}
	printf("\nthe sum of row : %d",sum2);
	
	

	
}
