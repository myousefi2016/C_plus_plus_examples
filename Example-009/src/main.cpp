/**********************************************************************************************
 * Examples in the C++ language (the 'Example-009' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), April 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-009' Test.
 **********************************************************************************************/

#include "myfunctions.h"
#include <cstdlib>
#include <iostream>
using namespace std;

/// The main function for the <i>'Example-009'</i> Test.
int main(void)
{
	/* This is the 'Example-009' Test, which offers an elementary shell for invoking a custom collection of functions (upon request). */
	cout<<endl<<"\tThis is the 'Example-009' Test in the C++ language."<<endl<<endl;
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
