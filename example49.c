#include<stdio.h>

int main()
{
	int n,ch;
	
	for(n=7 ; n!=0 ; n--)
	   printf("\n n=%d",n);    // try with n--  will be in infite loop
	    
	ch=getchar();
	
	return 0;
}

//op->   7 6 5 4 3 2 1
