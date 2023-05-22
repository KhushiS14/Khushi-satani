#include<stdio.h>
#include<conio.h>
main()
{
	int i ,j ,k ,l ;
	clrscr();

	for(i=5;i>=1;i--)
	{

		for(k=1;k<=i;k++)
		{
		     printf(" ");
		}
		for(j=i;j<=5;j++)
		{
		    printf("%d",j);
		}
		for(l=4;l>i-1;l--)
		{
		      printf("%d",l);
		}

	   printf("\n");
	}
	getch();

}