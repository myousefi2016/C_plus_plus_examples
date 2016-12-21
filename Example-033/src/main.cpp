/**********************************************************************************************
 * Examples in the C++ language (the test 'Example-033')
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), December 2016
 *
 * main.cpp - the source file, implementing the main function for the test 'Example-033'.
 **********************************************************************************************/

#include <iostream>
#include <cstdlib>
using namespace std;

/// The main function for the <i>Example-033</i> unit test.
int main(void)
{
	/* This is the example 'Example-033', where the even numbers in [1,100] are generated. */
	cout<<endl<<"\tThis is the example 'Example-033' in the C++ language"<<endl<<endl;
	cout.flush();
	for(int n=1;n<100;n++) { if( (n%2)==0 ) cout<<"\tEven number: "<<n<<endl; }
	cout<<endl;
	cout.flush();
	return EXIT_SUCCESS;
}
