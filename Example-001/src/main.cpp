/**********************************************************************************************
 * Examples in the C++ language (the 'Example-001' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), June 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-001' Test.
 **********************************************************************************************/

#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

/// The main function for the <i>'Example-001'</i> Test.
int main(void)
{
    /* This is the 'Example-001' Test, near to be the classic 'Hello World!" example! */
    cout<<endl<<"\tThis is the 'Example-001' Test in the C++ language."<<endl<<endl;
	cout << "\tPress the RETURN key to finish ... ";
	cout.flush();
	getchar();
	#ifndef _MSC_VER
		cout << endl;
		cout.flush();
	#endif
    return EXIT_SUCCESS;
}
