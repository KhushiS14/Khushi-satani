#include<stdio.h>
#include<conio.h>
main()
{
	int n ,i=0;
	clrscr();

	printf("Enter any number : ");
	scanf("%d",&n);

	while(n>0)
	{
		n=n/10;
		i++;
	}
	printf("the digit value : %d ",i);
	getch();
 }





