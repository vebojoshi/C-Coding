#define	square(x) x*x
	
void main()
{
	printf("\n square =%d ", square(10+2));	
}

// o/p is 32 
//  square is equal to   10+2 * 10+2  ==> multplication operator as higher precedence over +
//                           so, 2*10 =20 +10 +2 =32

// concept operator precedence , define macro 
