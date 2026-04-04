//// To Print Hollow Square Pattern 
////1111 
////0  0 
////1  1 
////0000
//
#include<stdio.h>
int main()
{
	int r,c,s;
	
	for(r=0;r<4;r++)
	{
		
		for(c=0;c<4;c++)
		{
			if(r==0||r==3||c==0||c==3)
			{
			   if(r%2==0)
			   {
			  	printf("0");
			   }
			   else
			    {
			 	 printf("1");
			    }
			
		    }
		    else
			 {
			 
			 printf(" ");
			
			}
	    }
	    printf("\n");
	}
}


