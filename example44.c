#include<stdio.h>
struct {
short int a[10];                    // remove short and try	
	char p;
}t1;
	main()
	{
		printf("size of stucture %d  bytes",sizeof(t1));
	}



// op is 44     10(due to array)*2(short int) =20 bytes   + 2(initialize twice)*1(char) 
//                                         = 20+2 = 22 bytes 
