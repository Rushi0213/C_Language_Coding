#include<stdio.h>
int main()
{
	FILE *fp;

	char str[255];
	
	fp=fopen("fct.txt","r");
		
	while(fscanf(fp,"%s",str)!=EOF)
	{
		printf("%S ",str);
	}
	fclose(fp);
}

