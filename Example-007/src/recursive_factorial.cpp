/**************************************************************************************************************
 * Examples in the C++ language (the test 'Example-007')
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), December 2016
 *
 * recursive_factorial.cpp - the source file, implementing the auxiliary function for the test 'Example-007'.
 **************************************************************************************************************/

#include "recursive_factorial.h"

unsigned long factorial(unsigned long n)
{	
	/* We exploit the recursion! */
	if( (n==0) || (n==1) ) return 1;
	else return (n*factorial(n-1));
}
