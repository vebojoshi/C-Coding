#include<stdio.h>
void main()
{
    int n,j;
    printf("Enter a number");
    scanf("%d",&n);
        for(j=2;j<=n/2;j++)
            if(n%j==0)
            {
                printf("It is not prime ");
                break;
            }
        printf("It is prime number");
}
