/**************************************************************************************************
 * Examples in the C++ language (the 'Example-011' unit test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), March 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-011' unit test.
 **************************************************************************************************/

#include "myclass.h"
#include <cstdlib>
#include <iostream>
using namespace std;

/// The main function for the <i>Example-011</i> unit test.
int main(void)
{
	int a,b,s;

	/* This is the 'Example-011' unit test, where the wrapper of a generic integer ('int') value is validated. */
    cout<<endl<<"\tThis is the 'Example-011' unit test in the C++ language."<<endl<<endl;
    cout.flush();
    	
	/* TASK #1 - Insert the first integer ('int') value 'a'. */
	cout<<"\tPlease, insert an integer ('int') value 'a': ";
    cin>>a;
   	if(!cin)
    {
    	cout<<"\tYou must enter an integer ('int') value!"<<endl<<endl;
    	return EXIT_FAILURE;
    }

	/* TASK #2 - Insert the second integer ('int') value 'b'. */
	cout<<"\tYou inserted the integer ('int') value 'a': "<<a<<"."<<endl<<endl;
    cout<<"\tPlease, insert an integer ('int') value 'b': ";
    cin>>b;
   	if(!cin)
    {
    	cout<<"\tYou must enter an integer ('int') value!"<<endl<<endl;
    	return EXIT_FAILURE;
    }

	/* TASK #3 - If we arrive here, everything is ok. We can add the integer ('int') values 'a' and 'b'. */
	cout<<"\tYou inserted the integer value 'b': "<<b<<"."<<endl<<endl;
	MyClass ca(a),cb(b);
	cout<<"\tThe first instance 'a' of the 'MyClass' class contains the integer ('int') value "<<ca.value()<<"."<<endl;
	cout<<"\tThe second instance 'b' of the 'MyClass' class contains the integer ('int') value "<<cb.value()<<"."<<endl;
   	s = ca+cb;
	cout<<"\tThe sum of these integer values is: "<<s<<"."<<endl<<endl;
	cout.flush();
	return EXIT_SUCCESS;
}
