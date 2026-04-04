// To Print Reverse Right Angle Triangle 
//  *** 
//  ** 
//  *

#include<stdio.h>
int main()
{
	int r,c;
	for(r=0;r<3;r++)
	{
		for(c=2;c>=r;c--)
		{
			printf("*");
		}
		printf("\n");
	}
}
