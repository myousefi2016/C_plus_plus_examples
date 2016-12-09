/********************************************************************************************************
 * Examples in the C++ language (the test 'Example-009')
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), December 2016
 *
 * myfunctions.h - the header file, containing the auxiliary functions for the test 'Example-009'.
 ********************************************************************************************************/
 
/* Optional inclusion! */
#ifndef MY_FUNCTIONS_H

	#define MY_FUNCTIONS_H

	/// This function draws a primitive shell, and allows to recall several functions.
	char drawShell();
	
	/// This function executes and runs a function, selected by the user.
	void runFunction(char ans);
	
	/// A custom collection of functions, that can be selected and run by the user.
	extern void (*funcs[])();
	
	/// This function retrieves the number of valid functions in 'funcs'.
	int functionsNumber();
	
#endif