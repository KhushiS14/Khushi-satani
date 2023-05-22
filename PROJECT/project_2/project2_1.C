#include<stdio.h>
#include<conio.h>
main()
{
	int number;
	int value;
	clrscr();

	printf("Enter value of number : ");
	scanf("%d",&number);

	(value=number%2)
	?printf("number is odd.."):printf("number is even..");

      getch();
}