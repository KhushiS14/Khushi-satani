#include<stdio.h>

void cube(int a)
{	
	if(a%3==0 && a%5==0)
	{
		printf("%d",a);
	}
}
main()
{
	int i;
	int n;
	int a;
	
	for(a=0;a<50;a++)
	{
		cube(a);
	}
}
