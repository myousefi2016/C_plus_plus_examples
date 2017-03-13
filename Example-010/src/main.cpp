/**********************************************************************************************
 * Examples in the C++ language (the 'Example-010' unit test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), March 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-010' unit test.
 **********************************************************************************************/

#include "myvariadic.h"
#include <cstdlib>

/// The main function for the <i>Example-010</i> unit test.
int main(void)
{
	double aa;
	int n;
	
	/* This is the 'Example-010' unit test, which invokes the variadic functions, defined in the 'myvariadic.h' header file. */
	fprintf(stdout,"\n\tThis is the 'Example-010' unit test in the C++ language.\n\n");
	fflush(stdout);
	
	/* TASK #1 - Invoking the variadic functions, defined in the 'myvariadic.h' header file. */
	aa=average(5,10.0,5.0,2.0,-1.2,0.0);
	fprintf(stdout,"\tThe average value is %3f.\n\n",aa);
	aa=average(2,4.0,6.0);
	fprintf(stdout,"\tThe average value is %3f.\n\n",aa);
	n=message("%s","Custom message");
	fprintf(stdout,"\tExported %d character(s) on the standard output stream.\n\n",n);
    n=message("%d %d %d",1,2,3);
    fprintf(stdout,"\tExported %d character(s) on the standard output stream.\n\n",n);
	return EXIT_SUCCESS;
}
