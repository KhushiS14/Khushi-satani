#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	clrscr();

	printf("enter value of a is :");
	scanf("%d",&a);
	printf("enter value of b is :");
	scanf("%d",&b);
	printf("enter value of c is :");
	scanf("%d",&c);

	if(a<b)
	{
	  if(a<c)
	  {
	  printf("a is minimum");
	  }
	  else
	  {
	  printf("b is minimum");
	  }
	}

	else
	{
	  if(b<c)
	  {
	  printf("b is minimum");
	  }
	  else
	  {
	  printf("c is minimum");
	  }
	}
	getch();
}