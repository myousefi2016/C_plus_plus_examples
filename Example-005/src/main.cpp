/**********************************************************************************************
 * Examples in the C++ language (the 'Example-005' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), April 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-005' Test.
 **********************************************************************************************/

#include "myfunc.h"
#include <cstdlib>
#include <iostream>
using namespace std;

/// The main function for the <i>'Example-005'</i> Test.
int main(void)
{
	/* This is the 'Example-005' Test, which exploits the 'myfunc()' function. This latter is defined in the 'myfunc.h' header file. */
    cout<<endl<<"\tThis is the 'Example-005' Test in the C++ language."<<endl<<endl;
    cout.flush();
	myfunc();
	return EXIT_SUCCESS;
}
