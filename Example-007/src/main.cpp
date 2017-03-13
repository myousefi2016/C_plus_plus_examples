/**********************************************************************************************
 * Examples in the C++ language (the 'Example-007' unit test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), March 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-007' unit test.
 **********************************************************************************************/

#include "recursive_factorial.h"
#include <cstdlib>
#include <iostream>
using namespace std;

/// The main function for the <i>'Example-007'</i> unit test.
int main(void)
{
	unsigned long n;
	
	/* This is the 'Example-007' unit test, which exploits the 'factorial()' function. This latter is defined in the 'recursive_factorial.h' header file. */
	cout<<endl<<"\tThis is the 'Example-007' unit test in the C++ language."<<endl<<endl;
	cout.flush();
    
    /* TASK #1 - we ask for a positive value, and invoke the 'factorial()' function. */
    cout<<"\tPlease, insert a positive integer value 'n': ";
    cin>>n;
   	if(!cin)
    {
    	cout<<"\tYou must enter a positive integer value!"<<endl<<endl;
    	return EXIT_FAILURE;
    }
    
    /* If you arrive here, everything is ok! */
    cout<<endl<<"\tYou inserted the positive integer value "<<n<<"."<<endl;
    cout<<"\tThe factorial "<<n<<"! is: "<<factorial(n)<<"."<<endl<<endl;
    cout.flush();
    return EXIT_SUCCESS;
}
