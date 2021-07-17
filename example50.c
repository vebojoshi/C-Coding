#include<stdio.h>
void main()
{
	char x[]="hello hi";
	printf("%d  %d",  sizeof(*x), sizeof(x));
}


// op    1   9
// sizeof(*) retuens data type size   while the  sizeof(x) returns size of chaacter array with including null charachter. 
