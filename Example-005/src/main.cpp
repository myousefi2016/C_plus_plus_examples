/**********************************************************************************************
 * Examples in the C++ language (the 'Example-005' unit test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), March 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-005' unit test.
 **********************************************************************************************/

#include "myfunc.h"
#include <cstdlib>
#include <iostream>
using namespace std;

/// The main function for the <i>'Example-005'</i> unit test.
int main(void)
{
	/* This is the 'Example-005' unit test, which exploits the 'myfunc()' function. This latter is defined in the 'myfunc.h' header file. */
    cout<<endl<<"\tThis is the 'Example-005' unit test in the C++ language."<<endl<<endl;
    cout.flush();
	myfunc();
	return EXIT_SUCCESS;
}
