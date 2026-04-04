//: Count the digits of given number 768547

#include<stdio.h>
int main()
{
	int n=768547;
	int count=0;
	
	while(n!=0)
	{
      n=n/10;
	 count++;
		
		
	}
	printf("the count is %d",count);

	
	
	
}
