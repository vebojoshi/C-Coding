// swapping the strings using function & with the help of pointer's

#include<stdio.h>
#define MAX 100
void swap(char *str1, char *str2)
{
  char *temp = str1;
  str1 = str2;
  str2 = temp;
}  

int main()
{
  char *str1[MAX] = "geeks";
  char *str2[MAX] = "forgeeks";
  swap(str1, str2);
  printf("str1 is %s, str2 is %s", str1, str2);
  getchar();
  return 0;
}

 