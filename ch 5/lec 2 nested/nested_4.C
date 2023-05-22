#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d,e;
	clrscr();

	printf("value of a is :");
	scanf("%d",&a);
	printf("valu of b is :");
	scanf("%d",&b);
	printf("value of c is :");
	scanf("%d",&c);
	printf("value of d is :");
	scanf("%d",&d);
	printf("value of e is :");
	scanf("%d",&e);

	if(a>b)
	{
	      if (a>c)
	      {
		     if(a>d)
		     {
			    if(a>e)
			    {
				printf("a is max");
			    }
			    else
			    {
			       printf("e is max");
			    }
		     }
	      }
	}
	if(b>c)
	{
	       if(b>d)
		   {
			 if(b>e)
			 {
				printf("c is max");
			 }
			 else
			 {
				printf("d is max");
			 }
		   }

	}
	if(b>c)
	{
		   if(b>d)
		   {
			 if(b>e)
			 {
			     printf("b is max");
			 }
			 else
			 {
			     printf("e is max");
			 }
		   }
	}
	    else
	    {
	       if(c>d)
	       {
	       if(c>e)
	       {
		      printf("c is max");
	       }
	       else
	       {
		      printf("e is max");
	       }
	       }
	       if(d>e)
	       {
		      printf("d is max");
	       }
	       else
	       {
		      printf("e is max");
	       }
	    }
	       getch();
	}









