//Swap two numbers without using third variables.

#include<stdio.h>
int main()
{
	int a=10;
	int b=20;
	
	printf(" swap two number\n");
	
	 a=a+b;
	 b=a-b;
	 a=a-b;
	 
	 printf(" after swapping a is %d\n",a);
	 printf("after swapping b is %d \n",b);
	 
	
	

}
