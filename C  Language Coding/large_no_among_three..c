//: Check the largest number among three numbers 

#include<stdio.h>
int main()
{
	int a=10,b=5,c=8;
	
	if(a>b && a>c)
	{
		printf("the a is big %d ",a);
	}
	else if(b>a &&b>c)
	{
		printf(" b is big %d",b);
	}
	
	else
	{
		printf(" c is big %d",c);
	}
}
