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
	
	       printf("Enter array A\n");
	       
          for(i=0;i<r;i++)
		  {
		  	for(j=0;j<c;j++)
		  	{
		  		printf("Enter a[%d][%d]:",i,j);
                scanf("%d",&a[i][j]);  		
		    }
		  }
		  printf("\n\n---------------------------\n\n");
		  printf("Enter array B\n");
		  
		  int b[i][j];
         
          for(i=0;i<r;i++)
		  {
		  	for(j=0;j<c;j++)
		  	{
		  		printf("Enter b[%d][%d]:",i,j);
                scanf("%d",&b[i][j]);  		
            }
        }
        
        int C[r][c];
        for(i=0;i<r;i++)
        {
        	for(j=0;j<c;j++)
        	{
        		C[i][j]=a[i][j]+b[i][j];
        		printf("%d",C[i][j]);
			}
			printf("\n");
		}
		
		

            
		         
        
 
 
 
 
 
 
 
 
 
        
 }
