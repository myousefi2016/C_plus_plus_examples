/********************************************************************************************************
 * Examples in the C++ language (the test 'Example-007')
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), December 2016
 *
 * main.cpp - the source file, implementing the main function for the test 'Example-007'.
 ********************************************************************************************************/

#include "recursive_factorial.h"
#include <cstdlib>
#include <iostream>
using namespace std;

/// The main function for the <i>Example-007</i> unit test.
int main(void)
{
	unsigned long n;
	
	/* Main operations! */
	cout<<endl<<"\tThis is the example 'Example-007' in the C++ language"<<endl<<endl;
    cout.flush();
    cout<<"\tPlease, insert a positive integer value 'n': ";
    cin>>n;
    if(!cin)
    {
    	cout<<"\tYou must enter positive integer value!"<<endl<<endl;
    	return EXIT_FAILURE;
    }
    
    /* If you arrive here, everything is ok! */
    cout<<endl<<"\tYou inserted the positive integer value "<<n<<endl;
    cout<<"\tThe factorial "<<n<<"! is: "<<factorial(n)<<endl<<endl;
    cout.flush();
	return EXIT_SUCCESS;
}