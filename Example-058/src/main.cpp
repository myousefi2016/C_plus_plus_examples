/*************************************************************************************************************************
 * Examples in the C++ language (the 'Example-058' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), June 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-058' Test.
 *************************************************************************************************************************/

#include <iostream>
#include <exception>
#include <cstdlib>
using namespace std;

/// This is a dummy function, which throws an exception. This exception will not be catched.
void dummyFunction() { throw exception(); }

/// The main function for the <i>'Example-058'</i> Test.
int main(void)
{
	/* This is the 'Example-058' Test, where the use of the exceptions is validated. */
    cout<<endl<<"\tThis is the 'Example-058' Test in the C++ language."<<endl<<endl;
    cout.flush();
    
    /* TASK #1 - throw an exception without being catched. */
    cout<<"\tInvoking the 'dummyFunction()' function, which throws an uncatched exception, ... "<<endl<<endl<<"\t";
    cout.flush();
	dummyFunction();    
    cout << "\tPress the RETURN key to finish ... ";
	cin.get();
	#ifndef _MSC_VER
		cout << endl;
		cout.flush();
	#endif
	return EXIT_SUCCESS;
}
