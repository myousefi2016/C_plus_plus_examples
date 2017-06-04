/**************************************************************************************************
 * Examples in the C++ language (the 'Example-035' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), June 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-035' Test.
 **************************************************************************************************/

#include "myheader.h"
#include <cstdlib>
#include <iostream>
#include <limits>
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

/// The main function for the <i>'Example-035'</i> Test.
int main(void)
{
	int a,b;

	/* This is the 'Example-035' Test, where the call-by-reference parameters passing for a function is validated. */
    cout<<endl<<"\tThis is the 'Example-035' Test in the C++ language."<<endl<<endl;
    cout.flush();
	
	/* TASK #1 - inserting the 'integer' value for the variable 'a'. */
	cout<<"\tPlease, insert the integer value for the variable 'a': ";
	cin>>a;
	if(!cin)
	{
		cin.clear();
		cin.clear();
		cout<<endl<<"\tPLEASE, YOU MUST INSERT THE INTEGER VALUE FOR THE VARIABLE 'a'!"<<endl<<endl<<"\tTHIS PROGRAM IS CLOSING ... "<<endl<<endl;
		pause();
		return EXIT_FAILURE;
	}

	/* TASK #2 - inserting the 'integer' value for the variable 'b'. */
	cout<<"\tPlease, insert the integer value for the variable 'b': ";
	cin>>b;
	if(!cin)
	{
		cin.clear();
		cin.clear();
		cout<<endl<<"\tPLEASE, YOU MUST INSERT THE INTEGER VALUE FOR THE VARIABLE 'b'!."<<endl<<endl<<"\tTHIS PROGRAM IS CLOSING ... "<<endl<<endl;
		pause();
		return EXIT_FAILURE;
	}

	/* TASK #3 - invoking the 'addThree()' function in order to validate the call-by-reference parameters passing. */
	cout<<endl<<"\tThe initial integer value for the variable 'a' in the 'main()' function is "<<a<<"."<<endl;
	cout<<"\tThe initial integer value for the variable 'b' in the 'main()' function is "<<b<<"."<<endl<<endl;
	addThree(a,b);
	cout<<"\tThe final integer value for the variable 'a' in the 'main()' function is "<<a<<"."<<endl;
	cout<<"\tThe final integer value for the variable 'b' in the 'main()' function is "<<b<<"."<<endl<<endl;
	pause();
	return EXIT_SUCCESS;
}

