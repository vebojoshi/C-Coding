#include<stdio.h>
void main()
{
		int i, first=0 ,second=1,next ,n;
		printf("Enter the number till to print list of fibonacci series");
		scanf("%d",&n);		
		for(i=0;i<n;i++)
		{
		     if(i<=1)
			 {
				 next=i;
			 }
			 else
			 {
				next=first+second;
				first=second;
				second=next;
            }		
			printf("%d\t",next);
		}	
}