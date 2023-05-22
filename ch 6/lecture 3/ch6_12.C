#include<stdio.h>
#include<conio.h>
main()
{
	int i ,n ,a ;
	clrscr();

	printf("Enter any value : ");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
	  printf("%d*%d=%d\n",n,i,i*n);
	}

	getch();


}