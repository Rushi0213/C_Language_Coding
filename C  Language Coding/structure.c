
// structure 

/*
#include<stdio.h>
#include<string.h>

int  main()
{
	
	struct emp
	{
		int id;
		char name[10];
	}e1;
	
	e1.id=101;
	strcpy(e1.name,"rushi");
	
	printf(" id is %d",e1.id);
	printf("\n the nanme is %s",e1.name);
	
	
}*/

// union

#include<stdio.h>
#include<string.h>

int  main()
{
	
	union emp
	{
		int id;
		char name[10];
	}e1;
	
	e1.id=101;
	strcpy(e1.name,"rushi");
	
	printf(" id is %d",e1.id);
	printf("\n the nanme is %s",e1.name);
	
	
}
