//all control statement

//conditional
//// 1) if else:-

//#include<stdio.h>
//int main()
//{
//	int age ;
//	
//	printf(" enter the age:- ");
//	scanf("%d",&age);
//	
//	if(age>=18)
//	{
//		printf(" you are eligible for voting");
//	}
//	else
//	{
//		printf(" you are adult,less than 18");
//	}
//}

// 2) else if:-

//#include<stdio.h>
//int main()
//{
//	int marks ;
//	
//	printf(" enter the marks:-");
//	scanf("%d",&marks);
//	
//	if(marks>90)
//	{
//		printf(" excelant");
//	}
//	else if(marks>70)
//	{
//		printf(" good");
//	}
//	else if(marks>50)
//	{
//		printf("avrage");
//    }
//    else
//    {
//    	printf(" fail");
//	}
//		
//}

// 3) switch case

#include<stdio.h>
int main()
{

		int choice;
	printf(" enter the choice ");
	scanf(" the choice no is %d",&choice);
	

	switch(choice)
	{
		
		case 1:
		printf("addition %d",a+b);
		break;
			
		case 2:
		printf(" substraction %d",a-b);
		break;
		
		case 3:
		printf(" multiplication %d",a*b);
		
		case 4:
		printf(" division %ds",a/b);
		
		default:
		printf(" invalid choice");
			
	}
}
//	
//	
//}

//looping statement

// 1) for loop

//#include<stdio.h>
//int main()
//{
//	int i;
//	int n=5;
//	
//	for( i=0;i<n;i++)
//	{
//		printf("%d \n",i);
//		
//		
//	}
//}

// 2) while loop

//#include<stdio.h>
//int main()
//{
//	int i=1;
//	
//	while(i<5)
//	{
//		printf(" %d",i);
//	}
//}

//do while


//all looping condition not proper wroking ,so cheak again.


