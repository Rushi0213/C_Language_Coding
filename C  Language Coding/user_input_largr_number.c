//: Take an input from users and find out the largest number among three numbers. 

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the three numbers\n");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b && a>c)
	{
		printf("the a is big %d",a);
	}
	
	else if(b>a && b>c)
	{
		printf(" the b is big %d",b);
	}
	else
	{
		printf("the c is big %d",c);
	}
}
