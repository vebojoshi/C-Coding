#include<stdio.h>

void main()
{
	char a[]="Hello World";
	char *p;
	p=a;
	printf("\n %d %d %d	%d",sizeof(a),sizeof(p),strlen(a),strlen(p));
}

//op    12  2  11  11

//concept  sizeof(a) is 12 including null charachter
//concept  sizeof(p) is 2  because it is pointer of type character
//concept  strlen(a) , strlen(p) is actual string length without null chracter included.
