#include<stdio.h>
#include<string.h>
 
 int length(char a[],char n)
 
    {
    	int i,lenth=0;
    	
    	for(i=0;a[i]!='\0';i++)
    	
    	{
    		
    	lenth++;
			
		}
    	
    	return lenth;
	}


void main()
{

char a[100];
       printf("ENTER A STRING :");
       gets(a);

 int i,n,length=0;
 
 for(i=0;a[i]!='\0';i++)
 {
 	printf("a[%d]=%c\n",i,a[i]);
 	
 }
 
 length=length(a,n);
 printf("The length of an string:%d",length);
}
