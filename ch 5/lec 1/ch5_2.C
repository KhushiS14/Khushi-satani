#include<stdio.h>
#include<conio.h>
main()
{
	int a;

	clrscr();
	printf("enter any value of a is :");
	scanf("%d",&a);

	if(a<0)
	{
	printf("%d is negative",a);
	}
	else if (a>0)
	{
	printf("%d is positive",a);
	}
	else
	{
	printf("%d is neutral",a);
	}
	getch();

}