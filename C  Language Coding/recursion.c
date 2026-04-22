//17/2/26
//recursion

// factorial
// find factoral number
/* #include<stdio.h>
int main()
{
		


   int fact(int n)
   	{
	
     	if(n==1||n==0)
	    {
	return n*fact(n-1);
	    }
     	else
    	{
         return n*fact(n-1);
	    }
    }

   printf(" the factoral is %d",fact(4));


		
}*/

// find factorial using addition
/* #include<stdio.h>
int main()
{
 int add(int n)
 {
	   if(n==1||n==0)
	    {
		return 1;
	    }
     	else
    	{
	    return n+add(n-1);
	    }
  }

   printf(" the factoral is %d",add(10));


}
*/

#include <stdio.h>

int change(int x)
{
    x = 50;   // changes only local copy
}

int main()
{
    int a = 10;
    change(a);
    printf("%d", a);   // Output: 10
    return 0;
}



