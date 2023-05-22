#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d;
	clrscr();

	printf("value of a is :");
	scanf("%d",&a);
	printf("valu of b is :");
	scanf("%d",&b);
	printf("value of c is :");
	scanf("%d",&c);
	printf("value of d is :");
	scanf("%d",&d);

	if(a>b)
	{
	  if (a>c)
	  {
	     if(a>d)
	     {
		  printf("a is max");
	     }
	     else
	     {
		  printf("c is max");
	     }
	     if(c>d)
	     {
		  printf("c is max");
	     }
	     else
	     {
		  printf("d is max");
	     }
	   }
	 }
	else
	{
	  if(b>d)
	     {
		  printf("c is max");
	     }
	     else
	     {
		  printf("d is max");
	     }
	 }
	 getch();

}
