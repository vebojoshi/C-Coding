// Operators precedence concept
// >= will executed first then ! .

#include<stdio.h>
int main()
{
	int a=500 , b=100 , c;
	if(!a>=400)
	b=300;
	c=200;
	printf("b=%d c=%d\n ",b,c);
	return 0;	
}



//output=>  b=100 c=200
