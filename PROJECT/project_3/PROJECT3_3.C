#include<stdio.h>
#include<conio.h>
main()
{
	int n ,a ,b ,sum ;
	clrscr();

	printf("enter any number : ");
	scanf("%d",&n);

	a=n%10;
	while(n>=10)
	{
	     n=n/10;
	}
	b=n;
	sum=n+a;

	printf("the sum of a and b is : %d ",sum);

	getch();

}