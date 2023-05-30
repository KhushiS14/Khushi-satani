#include<stdio.h>
main()
{
	char a[100];
	int i,len,c=0;
	
	printf("Enter your name:");
	scanf("%s",&a);
	
	len=0;
	while(a[len]!='\0')
	{
		len++;
	}
	
	for(i=0;i<len;i++)
	{
		if(a[i] != a[len-i-1])
		{
			c=1;
			break;
		}
	}
	
	if(c)
	{
		printf("\n%s given name is not palindrome",a);
	}
	else
	{
		printf("\n%s given name is palindrome",a);
	}
	
}
