/******************************************************************************************************************************
 * Examples in the C++ language (the 'Example-010' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), April 2017
 *
 * myfunctions.h - the header file, where the auxiliary functions for the 'Example-010' Test are defined.
 ******************************************************************************************************************************/
 
/* Optional inclusion! */
#ifndef MY_VARIADIC_H

	#define MY_VARIADIC_H
	
	#include <cstdio>
	#include <cstdarg>

	/// This function computes the average of an arbitrary number of parameters ('double' values).
	double average(unsigned int count,...);
	
	/// This function exports a string on the standard output (satisfying a given format). It returns the number of the characters, also exported on the standard output stream.
	int message(const char *fmt,...);
		
#endif
