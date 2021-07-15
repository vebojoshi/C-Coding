#include<stdio.h>

void main()
{
	char c='a';
	switch(c)	
	{
		case 97:
			    printf("97");
			    break;
		case 'a':
			    printf("98");
			    break;
		case 99:
			    printf("99");
			    break;
		default:
			    printf("default");
	}
}


//   'a'  --> is a case has value 97 and 97 case are duplicated in switch case 
//                    leads to compilation error.





