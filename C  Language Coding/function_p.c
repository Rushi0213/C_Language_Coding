//13/2/26
//function
//function have two types:- 1) default, 2) parameterized
// 1) default function

// print string using function

/*#include<stdio.h>
int main()
{
//	int a=10;
	
	int value()
	{
		printf(" rushi this side\n ");
	}
	value();
	value();
}*/

// arithematic operation using function

//#include<stdio.h>
//int main()
//{
//	int a=30;
//	int b=20;
//	int c;
//	
//	int add()
//	{
//	 c=a+b;
//	 printf("addition of a and b %d\n",c);	
//	}
//	int sub()
//	{
//		c=a-b;
//		printf("ths substraction of c is %d \n",c);
//	}
//		int mul()
//	{
//		c=a*b;
//		printf("ths multiplication of c is %d\n",c);
//	}
//		int div()
//	{
//		c=a/b;
//		printf("ths division of c is %d",c);
//	}
//	add();
//	sub();
//	mul();
//	div();
//}


// 2) parameterized function

#include<stdio.h>
int main()
{
	int add(int a,int b)  //parameter
	{
		int c=a+b;
		printf(" addition of a and b :-%d\n",c);
	}
	int sub(int a,int b)
	{
		int c=a-b;
		printf(" substraction of a and b :-%d\n",c);
	}
	int mul(int a,int b)
	{
		int c=a*b;
		printf(" multiplication of a and b :-%d\n",c);
	}
	int div(int a,int b)
	{
		int c=a/b;
		printf(" division of a and b :-%d\n",c);
	}
	add(10,20); //argument
	sub(20,10);`
	mul(5,5);
	div(50,5);
}
