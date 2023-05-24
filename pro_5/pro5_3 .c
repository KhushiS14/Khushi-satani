#include<stdio.h>
main()
{
	int r,c;
	printf("enter row size : ");
	scanf("%d",&r);
	
	printf("enter col size : ");
    scanf("%d",&c);
    
    int a[r][c];
    int i,j;
    
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		printf("enter a[%d][%d] : ",i,j);
    		scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n\ntranspose array :  \n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[j][i]);
		}
		printf("\n");
	}


}
