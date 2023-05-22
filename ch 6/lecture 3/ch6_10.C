#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	int n;
	int sum=0;
	clrscr();

	printf("Enter any value : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}

	  printf("the of all number : %d\n",sum);
	getch();


}