// 18/2/26
// call by value

/*
#include<stdio.h>
int main()
{
		int a=10;
		
	int update(int p)   // copy of a,(10)
	{
		printf("\n before updation p is %d ",p);
		
		p=p+10;
		
		printf("\n after updation p is %d ",p); // value is changed
	}

	printf("\n before function call a is %d ",a);
	
	update(a); //call by value .ie a
	
	printf("\n after function call a is %d ",a); //remain unchanged using call by value
}*/

// call by reference

/* 
#include<stdio.h>
int main()
{
	int a=10;
	printf(" \n before function call a is %d",a);

	int update(int *p) // address of a
	{
		printf("\n before updation p is %d",*p);
		*p=*p+10;
		printf("\n after updation value is %d",*p);
		
	}
	update(&a); // call by refrence ie &a
	printf("\n after function call a is %d",a);  // value changed  using call by reference
}
*/

// giving user input call 

#include<stdio.h>

int update(int p,int q)
{
	printf("\n before  additionof p %d",p,q);
   int 	sum=p+q;
	printf("\n after addition of p %d",sum);
}
int main()
{

	int a,b;
	printf(" \n enter two value ");
	scanf("%d",&a,&b);
	printf("\n before calling function a and b is %d",a,b);
	
	update(a,b);
	
	printf("\nafter calling function a and b is %d",a,b);
	
	
}
