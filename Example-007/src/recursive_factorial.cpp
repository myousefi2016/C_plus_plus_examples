/******************************************************************************************************************************
 * Examples in the C++ language (the 'Example-007' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), June 2017
 *
 * recursive_factorial.cpp - the source file, where the auxiliary function for the 'Example-007' Test is implemented.
 ******************************************************************************************************************************/

#include "recursive_factorial.h"

unsigned long factorial(unsigned long n)
{	
	/* We exploit the recursion! */
	if( (n==0) || (n==1) ) return 1;
	else return (n*factorial(n-1));
}

