#include<stdio.h>

int main()
{
	int x=10;
	int y;
	
	{
		y=x++;
	}
	printf("%d",x);
}

// op is 11
// post increment was carried out on x ;
