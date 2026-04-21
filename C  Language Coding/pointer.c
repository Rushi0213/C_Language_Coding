//25-2-2026
// pointer storring the address 
/*
#include<stdio.h>
int main()
{
	int num=10;
	
		printf(" value of a %d",num);
	int *p=&num;
	*p=*p+1;
	

	printf("\n value of pointer  %d",*p);
}
*/

// null pointer

/*
#include<stdio.h>
int main()
{
	int *p=NULL;
	
	if(p!=NULL)
	{
		printf(" the address is %d",*p);
	}
	else
	{
		printf(" null pointer");
	}
}
*/

//addition using pointer

/*
#include<stdio.h>
int main()
{
	int a=10;
	int b=20;
	
	int *p=&a;
	int *q=&b;
	
	int add=*p+*q;
	
	printf(" the addition of pointer is %d",add);
}
*/

// size of operation

/*
#include<stdio.h>
int main()
{
	char c='a';
	int a=10;
	
	printf(" size of charecter is %d",sizeof(c));
	printf("\n size of  interger is %d",sizeof(a));
}
*/

// function pointer

#include<stdio.h>


int add(int p,int q)
{
	int c=p+q;
	return c;
}

int main()
{
	int a,b;
	printf(" enter the two number ");
	scanf("%d %d",&a,&b);
	
	int (*ptr)(int ,int); // call pointer
	
	ptr=add;
	int result=(*ptr)(a,b);
	printf("addition %d ",result);
	
	
}
