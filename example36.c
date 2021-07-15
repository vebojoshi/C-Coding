#include<stdio.h>
int main()
{
	float f=0.5;                    // try with  0.25  , 0.75  , 0.125,0.5     --> result is "YES"
	                                // try with  0.1   , 0.2   , 0.4  ,0.32    --> result is "NO"  
	if(f==0.5)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}


// NO is printing 
