// file handling

// enter data in file

#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("rushi.txt","w");
	fprintf(fp,"rushi this side");
	fclose(fp);
}





