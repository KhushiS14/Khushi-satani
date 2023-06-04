#include<stdio.h>
main()
{

	char a[100];
	int i,iscapital=0,issmall=0,isdigit=0,issymbol=0;
	int length;
	
    printf("enter the password:");
    gets(a);
    
   for(i=0;a[i]!='\0';i++)
   {
      if(a[i]>=65 && a[i]<=90)
      {   iscapital=1;	     }
	   if(a[i]>=97 &&a[i]<=122)
	     {    issmall=1;    }
	         if(a[i]>=48&&a[i]<=57)
	         {    isdigit=1;   }
	            else 
				{  issymbol=1;  } 
				length++;
	}
	
	if(iscapital==1 && issmall==1 && isdigit==1 && issymbol==1 && length>=6 )
	{
		printf("your password is strong");
	}
	else
	{
		printf("your password is weak");
	}
}
