//Do while loop

// 1) print hello world
//
//#include<stdio.h>
//int main()
//{
//	int i=1;
//	
//	do
//	{
//		printf("hello world \n");
//		i++;
//	}
//	
//	while(i<=10);// this is used for first execute one line then come to condition
//}
		

// 2) print number


//#include<stdio.h>
//int main()
//{
//	int i=1;
//	
//	do
//	{
//		printf("%d\n",i);
//		i++;
//	}
//	
//	while(i<10);
//}	

// 3) print both string and number one time


#include<stdio.h>
int main()
{
	int i=1;
	int n;
	printf(" enter the input");
	scanf("%d",&n);
	
	do
	{
		printf("hello world %d\n",i);
		i++;
	}
	
	while(i<n); // this is  show first run one time  then come to condition
}	
			
	

