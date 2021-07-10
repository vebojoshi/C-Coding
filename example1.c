//Example 1    How many times will "abc" printed .
// Solution of code : 0 times.


# include <stdio.h>
int main()
{ 
    int x;
    for(x=-1;x<=10;x++)
    {
    	if(x<5)
    	    continue;
    	 else 
    	     break;
    	printf("abc");
	}
	return 0;
}

