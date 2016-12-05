/********************************************************************************************************
 * Examples in the C++ language (the test 'Example-011')
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), December 2016
 *
 * main.cpp - the source file, implementing the main function for the test 'Example-011'.
 ********************************************************************************************************/

#include "myclass.h"
#include <cstdlib>
#include <iostream>
using namespace std;

/// The main function for the <i>Example-011</i> unit test.
int main(void)
{
	int va,vb,s;

	/* Main operations! */
	cout<<endl<<"\tThis is the example 'Example-011' in the C++ language"<<endl<<endl;
	cout.flush();
    	
	/* Insert the value 'va' */
	cout<<"\tPlease, insert an integer value 'va': ";
    cin>>va;
   	if(!cin)
    {
    	cout<<"\tYou must enter an integer value!"<<endl<<endl;
    	return EXIT_FAILURE;
    }

	/* Insert the value 'vb' */
	cout<<"\tYou inserted the integer value 'va': "<<va<<endl<<endl;
    cout<<"\tPlease, insert an integer value 'vb': ";
    cin>>vb;
   	if(!cin)
    {
    	cout<<"\tYou must enter an integer value!"<<endl<<endl;
    	return EXIT_FAILURE;
    }

	/* If we arrive here, everything is ok */
	cout<<"\tYou inserted the integer value 'vb': "<<vb<<endl<<endl;

	MyClass ca(va),cb(vb);

	cout<<"\tThe first instance 'va' of the 'MyClass' class contains the integer value "<<ca.value()<<endl;
	cout<<"\tThe second instance 'vb' of the 'MyClass' class contains the integer value "<<cb.value()<<endl<<endl;
   	s = ca+cb;
	cout<<"\tThe sum of these integer values is: "<<s<<endl<<endl;
	cout.flush();
	return EXIT_SUCCESS;
}
