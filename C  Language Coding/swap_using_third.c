//Swap two numbers using third variables 

#include<stdio.h>
int main()
{
	
	int a,b,c;
	printf(" enter the  a and b numbers\n");
	scanf("%d \n %d",&a,&b);

	
	
	
    printf("before swapping a is %d \n",a);
    printf("before swapping b is %d\n ",b);
	
	c=a;
	a=b;
	b=c;
	
	printf("after swapping a and b  \n");
	printf(" the a is %d\n",a);
	printf(" the b is %d\n",b);
}
