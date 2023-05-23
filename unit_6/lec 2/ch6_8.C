#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	int n;
	i=1;
	clrscr();
		printf("Enter any number :");
		scanf("%d",&n);
	do
	{
		if(i%2==0)
		     printf("%d",i);
		     i++;
       }
		while (i<=n);

getch();

}


