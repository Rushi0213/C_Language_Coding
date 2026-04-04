//To Print Left Angle Triangle 
//   * 
//  **      
// ***

#include<stdio.h>
int main()
{
	int r,c,s;
	
	for(r=1;r<=3;r++)
	{
		for(s=1;s<=3-r;s++)
		{
		printf(" ");
	}
		for(c=1;c<=r;c++)
		{
			printf("*");
		}
	
		printf("\n");
	}
}
