//Swapping using variable

#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,t;
	clrscr();
	
	printf("Enter two no.s to swap");
	scanf("%d%d",&a,&b);
	
	t=a;
	a=b;
	b=t;
	
	printf("After Swapping Values");
	printf("%d %d", a ,b);
}