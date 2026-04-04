// Print the sum of digits of numbers 5874979 

#include<stdio.h>
int main()
{
	int n=5874979 ;
	int digit,sum=0;
	
	while(n!=0)
	{
		digit=n%10;
		sum=sum+digit;
		n=n/10;
	}
	printf(" the sum of the no is %d ",sum);
	
}
