/**********************************************************************************************
 * Examples in the C++ language (the 'Example-009' unit test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), March 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-009' unit test.
 **********************************************************************************************/

#include "myfunctions.h"
#include <cstdlib>
#include <iostream>
using namespace std;

/// The main function for the <i>Example-009</i> unit test.
int main(void)
{
	/* This is the 'Example-009' unit test, which offers an elementary shell for invoking a custom collection of functions (upon request). */
	cout<<endl<<"\tThis is the 'Example-009' unit test in the C++ language."<<endl<<endl;
	cout.flush();
    
    /* TASK #1 - We start the main loop .. */
    while(true)
    {
    	char ans=drawShell();
    	runFunction(ans);
    }
    
    /* Not useful! */
	return EXIT_SUCCESS;    
}
