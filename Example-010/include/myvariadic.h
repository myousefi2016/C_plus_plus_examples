/********************************************************************************************************
 * Examples in the C++ language (the test 'Example-010')
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), December 2016
 *
 * myvariadic.h - the header file, containing the auxiliary functions for the test 'Example-010'.
 ********************************************************************************************************/
 
/* Optional inclusion! */
#ifndef MY_VARIADIC_H

	#define MY_VARIADIC_H
	
	#include <cstdio>
	#include <cstdarg>

	/// This function computes the average of an arbitrary number of parameters (double values).
	double average(unsigned int count,...);
	
	/// This function exports a string on the standard output (satisfying a given format). It returns the number of the characters, written on the standard output.
	int message(const char *fmt,...);
		
#endif
