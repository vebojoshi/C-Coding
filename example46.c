#include<stdio.h>

void display(int);

void main()
{
	display(60);
	display(80);
	display(40);
	display(70);
	display(20);
	
}

void display(int a)
{
		static  int p;              //  try by removing static 
		p++;
		printf("\n p value :%d\t a value:%d",p,a);
}

//op 
 /*   
 p value :1      a value:60
 p value :2      a value:80
 p value :3      a value:40
 p value :4      a value:70
 
 */
 
 
 
 p value :5      a value:20
