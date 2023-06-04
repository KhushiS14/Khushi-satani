#include<stdio.h>
#include<conio.h>

void cube(int a)
	{
		printf("cubr of %d is %d \n ",a,a*a*a);
	}
void main()
	{
		int x;
		clrscr();
		
		printf("Enter x : ");
		scanf("%d",&x);
		
		cube(x);
		getch();
	}
