#include<stdio.h>
int getharing(int choice,int a,int b)
{
    int sum=0;

    switch(choice)
    {
  	    case 1:
	       sum=sum+a+b;
	       printf("sum of %d and %d is = ",a,b);
	       break;
	    case 2:
	       sum=sum+a-b;
	       printf("sub of %d and %d is = ",a,b);
	       break;
	    case 3:
	       sum=sum+a*b;
	       printf("mul of %d and %d is = %d",a,b);
	       break;
	    case 4:
	       sum=sum+a/b;
	       printf("div of %d and %d is = %d",a,b);
	       break;
	    case 5:
	       sum=sum+a%b;
	       printf("mod of %d and %d is = %d",a,b);
	   }
     return sum;
 }
int main()
{
    int i,choice,n1,n2;
    
    for(i=1;i!=0;i++)
    {
	    printf("\nPress 1 for +");
	    printf("\nPress 2 for -");
	    printf("\nPress 3 for *");
	    printf("\nPress 4 for /");
	    printf("\nPress 5 for %");
	    printf("\nPress 0 for exit");

    	printf("\nEnter your choice: ");
    	scanf("%d",&choice);
    	
    if(choice>0)
    {
		printf("\nEnter first number: ");
    	scanf("%d",&n1);

       printf("Enter secound number: ");
    	scanf("%d",&n2);
     
        printf("%d",getharing(choice,n1,n2));
    }
    else
    {
    	break;
	}
 	
	}
}
