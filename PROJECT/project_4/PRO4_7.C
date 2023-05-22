#include<stdio.h>
#include<conio.h>
main()
{
	int i ,j ,k ;
	clrscr();

	for(i=1;i<=5;i++)
	{
		if(i==1 || i==5)
		{
		    printf("********");
		}
		else
		{
		    printf("*");
		}
	   printf("\n");
	}
	getch();

}