#include <stdio.h>
int main( )
 {
   char name[]="satellites”;
   int len ,size;
   len = strlen(name);
   size = sizeof(name);
   printf("%d", len*size);
   return 0;
 }
 
 
 //this questoin was asked in ISRO Exam 2020 
 // op   --> 110
 
 // concept of strlen fuction and sizeof operator
 
 //   strlen returns without null character i.e 10
 //   while sizeof opertor retuurns size of chracter array with null chracter  i.e 11
 
 //   the  multiplication is 10 *11 =110
