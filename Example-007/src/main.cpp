/**********************************************************************************************
 * Examples in the C++ language (the 'Example-007' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), May 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-007' Test.
 **********************************************************************************************/

#include "recursive_factorial.h"
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

/// The main function for the <i>'Example-007'</i> Test.
int main(void)
{
	unsigned long n;
	string aux;
	
	/* This is the 'Example-007' Test, which exploits the 'factorial()' function. This latter is defined in the 'recursive_factorial.h' header file. */
	cout<<endl<<"\tThis is the 'Example-007' Test in the C++ language."<<endl<<endl;
	cout.flush();
    
    /* TASK #1 - we ask for a positive value, and invoke the 'factorial()' function. */
    cout<<"\tPlease, insert a positive integer value 'n': ";
    cin>>n;
   	if(!cin)
    {
    	cout<<endl<<"\tPLEASE, YOU MUST ENTER A POSITIVE INTEGER VALUE 'n'!"<<endl<<endl<<"\tTHIS PROGRAM IS CLOSING ... "<<endl<<endl;
		cin.clear();
		cin.ignore(UINT_MAX, '\n');
		cout << "\tPress the RETURN key to finish ... ";
		cout.flush();
		getchar();
		#ifndef _MSC_VER
			cout << endl;
			cout.flush();
		#endif
    	cout.flush();
    	return EXIT_FAILURE;
    }
	else { cin.ignore(UINT_MAX, '\n'); }
    
    /* If you arrive here, everything is ok! */
    cout<<endl<<"\tYou inserted the positive integer value "<<n<<"."<<endl;
    cout<<"\tThe factorial "<<n<<"! is "<<factorial(n)<<"."<<endl<<endl;
    cout.flush();
	cout << "\tPress the RETURN key to finish ... ";
	cout.flush();
	getchar();
	#ifndef _MSC_VER
		cout << endl;
		cout.flush();
	#endif
    return EXIT_SUCCESS;
}

