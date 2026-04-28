
// create file
#include<stdio.h>
int main(){
	 FILE *fp;
     char str[255];   // creating char array to store data of file

     fp = fopen("fct.txt", "r");   // open file in read mode

    while(fscanf(fp, "%s", str) != EOF)
    {
    printf("%s ", str );
    }

    fclose(fp);
}
