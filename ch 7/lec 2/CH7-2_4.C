#include<stdio.h>
#include<conio.h>
main()
{
	int i ,j ,k ;
	clrscr();

	for(i=1;i<=5;i++)
	{
		for(k=1;k<i;k++)
		{
		   printf(" ");
		}
		for(j=i;j<=5;j++)
		{
		  (j%2==1)
			? printf("1")
			: printf("0");
		}

	     printf("\n");
	}
	getch();
}
