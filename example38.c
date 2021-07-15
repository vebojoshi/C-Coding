#include<stdio.h>

int main()
{
	static int i;
	int j;
	for(j=0;j<10;j++)
	{
			i+=2;
			i-=j;
	}
	printf("%d",i);
}

// op -25

//concept-> looping
// remember static i;  then default value of i is 0;
// no static then garbage value.
