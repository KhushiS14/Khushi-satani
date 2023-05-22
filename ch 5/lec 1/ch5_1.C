#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	int b;
	clrscr();

	printf("enter value of a is :");
	scanf("%d",&a);
	printf("enter value of b is :");
	scanf("%d",&b);

	if (a<b)
	{
	printf("first value is minimum value ");
	}
	else
	{
	printf("second value is minimum value ");
	}
	getch();
}