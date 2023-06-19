#include<stdio.h>
main()
{
	int a;
	int b;
	int c;
	
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf("enter c:");
	scanf("%d",&c);
	
	
	
	(a>b)
		?(a>c)
			?	printf("a is max")
			:	printf("c is max")
		:(b>a)
			?	printf("c is max")
			:	printf("a is max");
			
			
		

}
