/**********************************************************************************************
 * Examples in the C++ language (the 'Example-007' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), June 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-007' Test.
 **********************************************************************************************/

#include "recursive_factorial.h"
#include <iostream>
#include <limits>
#include <cstdlib>
using namespace std;

/// This function simulates a pause while this test runs.
void pause()
{
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	cin.clear();
	cout << "\tPress the RETURN key to finish ... ";
	cout.flush();
	cin.get();
	#ifndef _MSC_VER
		cout << endl;
		cout.flush();
	#endif
}

/// The main function for the <i>'Example-007'</i> Test.
int main(void)
{
	int n;
	unsigned long nn;

	/* This is the 'Example-007' Test, which exploits the 'factorial()' function. This latter is defined in the 'recursive_factorial.h' header file. */
	cout<<endl<<"\tThis is the 'Example-007' Test in the C++ language."<<endl<<endl;
	cout.flush();
	
	/* TASK #1 - we ask for a positive value, and invoke the 'factorial()' function. */
	cout<<"\tPlease, insert a positive integer value 'n': ";
	cin>>n;
	if( (!cin) || (n<0) )
	{
		cin.clear();
		cin.clear();
		cout<<endl<<"\tPLEASE, YOU MUST ENTER A POSITIVE INTEGER VALUE 'n'!"<<endl<<endl<<"\tTHIS PROGRAM IS CLOSING ... "<<endl<<endl;
		pause();
		return EXIT_FAILURE;
	}
	
	/* If you arrive here, everything is ok! */	
	nn=(unsigned long)n;
	cout<<endl<<"\tYou inserted the positive integer value "<<nn<<"."<<endl;
	cout<<"\tThe factorial "<<n<<"! is "<<factorial(nn)<<"."<<endl<<endl;
	pause();
	return EXIT_SUCCESS;
}

