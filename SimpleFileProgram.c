// simple file program   // just to understand syntax of it 
#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *fp;
char  ch,file_name[20];
printf("Enter the file name");
gets(file_name);

fp=fopen(file_name,"r");

if(fp==NULL)
{
	printf("Error while opening file");
	exit(0);
}

while(ch=fgetc(fp)!=EOF)
{
	printf("%c",ch);
}

fclose(fp);
return 0;
}