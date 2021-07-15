#include<stdio.h>
void main()
{
	int a=b=c=10;
	a=b=c=50;
	printf("\n %d %d %d",a,b,c);
}

// o/p --> compile time error 
//  initilization of only variable a  and variable b ,c cannot get initialized in memory "," opertor needed.
//    syntax error
