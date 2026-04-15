// Print 1 to 10 Fibonacci Series.

#include<stdio.h>
int main()
{
	int b=1;
	int c=2;
	int d,i;
	
	for(i=1;i<11;i++)// use this for print  0 to n number
	{
	   printf(" %d",b);// this is print here becuase we want first value of input
		d=b+c;
		 b=c;
	   	 c=d;
		
	}
	
}
