#include<stdio.h>
main()
{
	int i ,j ;
	char a[10];
	
	for(i=0;i<10;i++)
	{
	printf("\n enter the element : ");
	fflush(stdin);
	scanf("%c",&a[i]);
	}
	
	for(i=0;i<10;i++)
	{
		if(a[i]>=65 && a[i]<=90)
		{
			a[i]=a[i] + 32 ;
		}
		else if(a[i] >=97  && a[i] <=122) 
		{
			a[i]= a[i] - 32; 	   
		}
		
		if(a[i]>97 && a[i]<=122)
		{
			a[i]=a[i] - 32 ;
		}
		else if(a[i] >=65  && a[i] <=90) 
		{
			a[i]= a[i] + 32; 	   
		}
		printf("\n convert string is : %c",a[i]);	
	}
	
	
}
