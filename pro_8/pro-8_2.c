#include<stdio.h>

void cube(int n)
{
	int a[n][n];
    int i, j ,*q ;
	
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
			q=&a[i][j];
			printf("%d\n",(*q)*(*q)*(*q));
		}	
	}
}

int main()
 {
	int n;
	
	printf("Enter array size : ");
	scanf("%d",&n);
	
	cube(n);	
}	


