#include <stdio.h>
int main( )
 {
   int x; 
   char *ptr;
   x = 622,100,101;
   printf("%d", (*(char *)&x) * (x % 3));
   return 0;
 } 
 
 //asked in isro exam 2020
 
 //op-> 110
 
 /*In little endian machines, last byte of binary representation of the
  multibyte data-type is stored first. So, x = 622,100,101 will be stored
   as 101,100,622 (lower byte will be stored first.). 
   
   Hence, printed value will be 110. 
   */
