#include<stdio.h>

main()
{
	char a[100] = { };
	char n;
	int *p;
	
	printf("Enter any string : ");
	gets(a);
	
	int length=0;
	int i;
	
	p=a;
	
	for(i=0;*p!='\0';i++)
	{
		length++;	
		p++;
	}
	printf("the length of string is %s : %d",a,length);
}
