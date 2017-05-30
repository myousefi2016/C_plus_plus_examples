/**************************************************************************************************
 * Examples in the C++ language (the 'Example-002' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), May 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-002' Test.
 **************************************************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

/// The main function for the <i>'Example-002'</i> Test.
int main(void)
{
    /* This is the 'Example-002' Test, near to be the classic 'Hello World!" example! */
    puts("\n\tThis is the 'Example-002' Test in the C++ language.\n");
	cout << "\tPress the RETURN key to finish ... ";
	cout.flush();
	cin.ignore(UINT_MAX, '\n');
	#ifndef _MSC_VER
		cout << endl;
		cout.flush();
	#endif
    return EXIT_SUCCESS;
}
