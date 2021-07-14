#include<stdio.h>
static int c=0;
  void main()
 {       
    int l=10,i=0;    
    double a=100;   
    double p=0.01; 
		    for(i=0; i<=a;i++)
				{       
				    a = a-(l*p*a);         
				    c++;       
				    printf("%d",a);         
				}
				printf("number of bounces %d::",c); 
	  }
