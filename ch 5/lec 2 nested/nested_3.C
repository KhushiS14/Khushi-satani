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

	if(a<b)
	{
	  if (a<c)
	  {
	     if(a<d)
	     {
		  printf("a is mini");
	     }
	     else
	     {
		  printf("c is mini");
	     }
	     if(c<d)
	     {
		  printf("c is mini");
	     }
	     else
	     {
		  printf("d is mini");
	     }
	   }
	 }
	else
	{
	  if(b<d)
	     {
		  printf("c is mini");
	     }
	     else
	     {
		  printf("d is mini");
	     }
	 }
	 getch();

}