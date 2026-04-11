
// print pattern

//****
//*  *
//****


/*
#include<stdio.h>
int main()
{
	int i,j,k;
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(i==0 ||i==3 || j==0 ||j==3)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			
		}
		printf("\n");
	}
}
*/

//1111
//0  0
//1  1
//0000

#include<stdio.h>
int main()
{
	
	int i,j;
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
		if(i==0||i==3||j==0||j==3)
		{
			if(i%2==0)
			{
			
			printf("1");
		
			}	
			else
			{
				printf("0");
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

//*
//**
//***
//****
//*****
