/**************************************************************************************************
 * Examples in the C++ language (the 'Example-036' unit test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), March 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-036' unit test.
 **************************************************************************************************/

#include "myheader.h"
#include <cstdlib>
#include <iostream>
using namespace std;

/// The main function for the <i>Example-036</i> unit test.
int main(void)
{
	int a,b;

	/* This is the 'Example-036' unit test, where the call-by-value parameters passing for a function is validated. */
    cout<<endl<<"\tThis is the 'Example-036' unit test in the C++ language."<<endl<<endl;
    cout.flush();
	
	/* TASK #1 - inserting the 'integer' value for the variable 'a'. */
	cout<<"\tPlease, insert the integer value for the variable 'a': ";
	cin>>a;
	if(!cin)
	{
		cout<<endl<<"\tPLEASE, YOU MUST INSERT THE INTEGER VALUE FOR THE VARIABLE 'a'!"<<endl<<endl<<"\tTHIS PROGRAM IS CLOSING ... "<<endl<<endl;
		cout.flush();
		return EXIT_FAILURE;
	}
	
	/* TASK #2 - inserting the 'integer' value for the variable 'b'. */
	cout<<"\tPlease, insert the integer value for the variable 'b': ";
	cin>>b;
	if(!cin)
	{
		cout<<endl<<"\tPLEASE, YOU MUST INSERT THE INTEGER VALUE FOR THE VARIABLE 'b'!"<<endl<<endl<<"\tTHIS PROGRAM IS CLOSING ... "<<endl<<endl;
		cout.flush();
		return EXIT_FAILURE;
	}

	/* TASK #3 - invoking the 'addThree()' function in order to validate the call-by-value parameters passing. */
	cout<<endl<<"\tThe initial integer value for the variable 'a' in the 'main()' function is "<<a<<"."<<endl;
	cout<<"\tThe initial integer value for the variable 'b' in the 'main()' function is "<<b<<"."<<endl<<endl;
	addThree(a,b);
	cout<<"\tThe final integer value for the variable 'a' in the 'main()' function is "<<a<<"."<<endl;
	cout<<"\tThe final integer value for the variable 'b' in the 'main()' function is "<<b<<"."<<endl<<endl;
	return EXIT_SUCCESS;
}

