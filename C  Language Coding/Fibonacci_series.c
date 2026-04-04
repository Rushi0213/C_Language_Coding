// Print 1 to 10 Fibonacci Series.

#include<stdio.h>
int main()
{
	int a=1;
	int b=2;
	int c,i;
	
	for(i=1;i<11;i++)
	{
	   printf(" %d",a);
		c=a+b;
		 a=b;
	   	 b=c;
		
	}
	
}
