/********************************************************************************************************
 * Examples in the C++ language (the test 'Example-010')
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), December 2016
 *
 * main.cpp - the source file, implementing the main function for the test 'Example-010'.
 ********************************************************************************************************/

#include "myvariadic.h"
#include <cstdlib>

/// The main function for the <i>Example-010</i> unit test.
int main(void)
{
	double aa;
	int n;
	
	/* Main operations! */
	fprintf(stdout,"\n\tThis is the example 'Example-010' in the C++ language\n\n");
	fflush(stdout);
	aa=average(5,10.0,5.0,2.0,-1.2,0.0);
	fprintf(stdout,"\tThe average value is %3f\n\n",aa);
	n=message("%s","Custom message");
	fprintf(stdout,"\tWritten %d character(s)\n\n",n);
    n=message("%d %d %d",1,2,3);
    fprintf(stdout,"\tWritten %d character(s)\n\n",n);
	return EXIT_SUCCESS;
}
