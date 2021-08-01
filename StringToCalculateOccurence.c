#include<stdio.h>
#include<string.h>
void main()
{
	char a[]="i am amol and i am 22 years old";
	char ans[10]="";
	int count=0;
	for(int i=0;i<=strlen(a);i++)
	{
		if((a[i]==' '||a[i]=='\0'))
		{
			
			if(count==3)
			{
				puts(ans);
				count=0;
				for(int j=0;j<10;j++)
				ans[j]='\0';
			}
			else
			{
				for(int j=0;j<10;j++)
				ans[j]='\0';
				count=0;
			}
			
		}
		else
		{
			ans[count]=a[i];
			count++;
		}
	}
}