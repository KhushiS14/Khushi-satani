#include<stdio.h>
#include<conio.h>
main()
{


	int x,y;
	int z=(x+y)*(x+y);
	clrscr();
	printf("the value of x :");
	scanf("%d",&x);

	printf("the value of y :");
	scanf("%d",&y);

	z=(x+y)*(x=y);

	printf("(x+y)*(x+y) is :%d",z);

	getch();
}