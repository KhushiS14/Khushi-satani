#include<stdio.h>
main()
{
int r,c;
       
    printf("Enetr Row Size:");
	scanf("%d",&r);
	
	printf("Enetr Col Size:");
	scanf("%d",&c);
	
	int i,j;
	int a[r][c];
	
          for(i=0;i<r;i++)
		  {
		  	for(j=0;j<c;j++)
		  	{
		  		printf("Enter a[%d][%d]:",i,j);
                scanf("%d",&a[i][j]);  		
		    }
		  }
		  printf("\n\n---------------------------\n\n");
	       
	       int sum=0;
	       float len;
		   float ave;
	       
	      for(i=0;i<r;i++)
		  {
		  	for(j=0;j<c;j++)
		  	{
		  		sum+=a[i][j];	    
		 	    len=r*c;
		        ave=sum/len;
		    }
		}
	      printf("Average is %f",ave); 
	
	       
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	   
}


