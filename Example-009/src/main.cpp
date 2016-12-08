/********************************************************************************************************
 * Examples in the C++ language (the test 'Example-009')
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), December 2016
 *
 * main.cpp - the source file, implementing the main function for the test 'Example-009'.
 ********************************************************************************************************/

#include "myfunctions.h"
#include <cstdlib>
#include <iostream>
using namespace std;

/// The main function for the <i>Example-009</i> unit test.
int main(void)
{
	/* Main operations! */
	cout<<endl<<"\tThis is the example 'Example-009' in the C++ language"<<endl<<endl;
    cout.flush();
    while(true)
    {
    	char ans=drawShell();
    	runFunction(ans);
    }
    
    /* Not useful! */
	return EXIT_SUCCESS;    
}
