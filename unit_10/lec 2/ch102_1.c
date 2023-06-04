#include<stdio.h>

int sum(int a[], int n)
{
	int i,sum=0;
	
	for(i=0;i<n;i++)
	{
	  sum=sum+a[i];
	}
	
	return sum;
}

int main()
{
	int n;

	printf("Enter any array size : ");
	scanf("%d",&n);
    
	int a[n];
	int i;
		
	for(i=0;i<n;i++)
	{
	  printf("Enter a[%d] : ",i);
	  scanf("%d",&a[i]);
	}
	
	printf("sum is => %d", sum(a, n));
}


