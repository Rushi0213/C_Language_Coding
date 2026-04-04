// To Print Solid Square Pattern 
//AAAAA 
//BBBBB 
//CCCCC 
//DDDDD 

#include<stdio.h>
int main()
{
	int r,c;
	//int ch='A';
	
	for(r=0;r<4;r++)
	{
		for(c=1;c<6;c++)
		{	
			printf("%c",'A'+ r);// printf("%c",ch)
		}
		// ch++;
		printf("\n");
	}
 } 
