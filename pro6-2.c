#include<stdio.h>
main()
{
	char a[100] ;
	int c , i , count=0;
	
	printf("Enter any string : ");
	gets(a);
	
	for(c='a' ; c<='z' ; c++)
	{
	    count=0;	
		for(i=0 ; a[i]!=NULL ; i++)
	 	{
			if(c==a[i])
			count++;
	 	}
		if(count>0)
		printf("%c => %d \n",c,count);
	}
}

