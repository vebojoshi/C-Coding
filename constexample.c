#include<stdio.h>
int main()
{
	const int a;
	a=32;                     // const cannot be declared on serperate line , must be initialized at the time of declaration
	printf("a is %d",a);
	return 0;
}
