//operator prcedence concept & looping concept 


#include<stdio.h>
int main()
{
 	unsigned int i=65535;   
	while(i++!=0)
	   printf("%d",++i);
	printf("\n");
	return 0;	  
/*	unsigned int i;
	printf("%d" ,sizeof(i));  */
}



//output=> Infinte loop
