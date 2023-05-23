#include<stdio.h>
#include<conio.h>
main()
{
	int a=0,b=1,n,i,c;
	clrscr();
	   printf("Enter any number : ");
	   scanf("%d",&n);

	   for(i=1;i<=n;i++)
	   {
		printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;
	   }
	getch();

}


