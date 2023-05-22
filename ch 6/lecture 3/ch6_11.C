#include<stdio.h>
#include<conio.h>
main()
{
	int i=1 ,k ,l ;
	clrscr();

	printf("Enter any value : ");
	scanf("%d",&k);
	for(l=1;l<=k;l++)
	{
		i=i*l;
	}
	printf("the fectorial is : %d",i);
	getch();


}