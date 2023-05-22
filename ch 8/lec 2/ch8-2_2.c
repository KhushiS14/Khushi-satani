#include<stdio.h>
main()
{
	int n1, n2, a[1000] ;
	
	printf("enter start years : ");
	scanf("%d",&n1);
	printf("Enter end years : ");
	scanf("%d",&n2);
	
	int i, j, n;
	
	for(i=n1,j=0;i<=n2;i++,j++)
	{
		if (i%4 == 0)
		{
			a[j] = i;
			printf("%d\n",a[j]);
		}
	}
}
