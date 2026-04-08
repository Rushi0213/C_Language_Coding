// Print 1 to 10 Fibonacci Series.

#include<stdio.h>
int main()
{
	int b=1;
	int c=2;
	int d,i;
	
	for(i=1;i<11;i++)
	{
	   printf(" %d",b);
		d=b+c;
		 b=c;
	   	 c=d;
		
	}
	
}
