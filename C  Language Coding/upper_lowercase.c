// Check whether the given character is uppercase or lowercase. 

#include<stdio.h>
int main()
{
	int ch;
	printf("enter the letter");
	scanf("%c",&ch);

	
	if(ch>='A' && ch<='Z')
	{
		printf(" this is uppercase letter");
	}
	else  
	{
		printf("this is lowercase letter");
	}
	
	
}
