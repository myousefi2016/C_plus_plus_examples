/**************************************************************************************************
 * Examples in the C++ language (the 'Example-032' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), June 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-032' Test.
 **************************************************************************************************/

#include <iostream>
#include <cstdlib>
using namespace std;

/// The main function for the <i>'Example-032'</i> Test.
int main(void)
{
	/* This is the 'Example-032' Test, where the odd numbers in the '[1,100]' range are generated. */
    cout<<endl<<"\tThis is the 'Example-032' Test in the C++ language."<<endl<<endl;
    cout.flush();
    
    /* TASK #1 - looking for the odd numbers in the '[1,100]' range. */
	for(int n=1;n<=100;n++) { if( (n%2)!=0 ) cout<<"\t-) Found the odd number "<<n<<"."<<endl; }
	cout<<endl;
	cout << "\tPress the RETURN key to finish ... ";
	cout.flush();
	cin.get();
	#ifndef _MSC_VER
		cout << endl;
		cout.flush();
	#endif
    return EXIT_SUCCESS;
}

