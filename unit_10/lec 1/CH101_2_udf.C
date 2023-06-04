#include<stdio.h>
#include<conio.h>
void khushi(n)
{
	if(n%3==0 && n%5==0)
	{
	    printf("the given number is divisible by both 3 & 5");
	}
	else
	{
	   printf("The given number is not divisible by both 3 & 5");
	}

}

void main()
{
	int n;
	clrscr();

	printf("Enter any number : ");
	scanf("%d",&n);

	khushi(n);
    getch();
}