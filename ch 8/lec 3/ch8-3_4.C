#include<stdio.h>
main()
{
int r,c;
       
    printf("Enetr Row Size:");
	scanf("%d",&r);
	
	printf("Enetr Col Size:");
	scanf("%d",&c);
	
	int i,j,sum=0;
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
		  
		  for(i=0;i<r;i++)
		  {
		  	for(j=0;j<c;j++)
		  	{
		  		if(i==0 || i==4 || j==0 || j==4)
		  		{
		  		    printf("%d",a[i][j]);
					sum+=a[i][j];
				  }
				  else
				  {
				  	printf(" ");
				  }
		
			}
			printf("\n");
			 
		
		  }
		  printf("sum of boundary elements is :%d",sum);
		 	  	
		  
		  
}
