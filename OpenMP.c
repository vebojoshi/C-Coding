#include <omp.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
/* sequential code */
#pragma omp parallel
{
printf("I am a parallel region.");
}
/* sequential code */
return 0;
}


/*
		OpenMP is a set of compiler directives as well as an API for programs written
		in C, C++, or FORTRAN that provides support for parallel programming in
		shared-memory environments. OpenMP identifies parallel regions as blocks
		of code that may run in parallel. Application developers insert compiler
		directives into their code at parallel regions, and these directives instruct the
		OpenMP run-time library to execute the region in parallel. The following C
		program illustrates a compiler directive above the parallel region containing
		the printf() statement:
		
		When OpenMP encounters the directive
		
		#pragma omp parallel
		
		it creates as many threads are there are processing cores in the system. Thus, for
		a dual-core system, two threads are created, for a quad-core system, four are
		created; and so forth. All the threads then simultaneously execute the parallel
		region. As each thread exits the parallel region, it is terminated.


**/

