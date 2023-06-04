#include<stdio.h>
#include<string.h>
main()
{
	char b[100];
	char a[100];
	
    printf("enter your email:");
    gets(a);
    
    printf("enter your password:");
    gets(b);
    
     printf("\n\n--------------------------------------\n\n");
    if(strcmp(a,"admin@123")==0)
    {
         if(strcmp(b,"123456")==0)	
	     	{
	        	printf("login succsessful");
	       }
    }
   else
   {
   	  printf("login failed");
   }


	
}
