#include<stdio.h>

void func()
{
	int x=0;
	static int y=0;
	x++;
	y++;
	
	printf("\n %d---->%d \n",x,y);
}

int main()
{
	func();
	func();
	return 0;
}

/*   op     x     y
			1---->1                     -> first  call
			
			1---->2                     -> second call
			
*/
