#include<stdio.h>

main()
{
	int r, c;
	
	printf("Enter row size : ");
	scanf("%d", &r);
	
	printf("Enter col size : ");
	scanf("%d", &c);
	
	int a[r][c], i, j, l;
	
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			printf("Enter a[%d][%d] : ",i ,j);
			scanf("%d", &a[i][j]);
		}
	}
	l = a[0][0];
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			if(l<a[i][j])
			{
				l = a[i][j];
			}
		}
	}
	printf("%d", l);
}
