/**************************************************************************************************
 * Examples in the C++ language (the 'Example-011' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), May 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-011' Test.
 **************************************************************************************************/

#include "myclass.h"
#include <cstdlib>
#include <iostream>
using namespace std;

/// The main function for the <i>'Example-011'</i> Test.
int main(void)
{
	int a,b,s;

	/* This is the 'Example-011' Test, where the wrapper of a generic integer ('int') value is validated. */
    cout<<endl<<"\tThis is the 'Example-011' Test in the C++ language."<<endl<<endl;
    cout.flush();
    	
	/* TASK #1 - insert the first integer ('int') value 'a'. */
	cout<<"\tPlease, insert the integer ('int') value 'a': ";
    cin>>a;
   	if(!cin)
    {
		cout << endl << "\tPLEASE, YOU MUST ENTER THE INTEGER ('INT') VALUE 'a'!" << endl << endl;
		cin.clear();
		cin.ignore(UINT_MAX, '\n');
		cout<< "\tTHIS PROGRAM IS CLOSING ... " << endl << endl;
		cout << "\tPress the RETURN key to finish ... ";
		getchar();
		cout.flush();
		#ifndef _MSC_VER
			cout << endl;
			cout.flush();
		#endif
    	return EXIT_FAILURE;
    }
	else { cin.ignore(UINT_MAX, '\n'); }

	/* TASK #2 - insert the second integer ('int') value 'b'. */
	cout<<"\tYou inserted the integer ('int') value 'a'="<<a<<"."<<endl<<endl;
    cout<<"\tPlease, insert the integer ('int') value 'b': ";
    cin>>b;
   	if(!cin)
    {
		cout << endl << "\tPLEASE, YOU MUST ENTER THE INTEGER ('INT') VALUE 'b'!" << endl << endl;
		cin.clear();
		cin.ignore(UINT_MAX, '\n');
		cout << "\tTHIS PROGRAM IS CLOSING ... " << endl << endl;
		cout << "\tPress the RETURN key to finish ... ";
		getchar();
		cout.flush();
		#ifndef _MSC_VER
			cout << endl;
			cout.flush();
		#endif
		return EXIT_FAILURE;
    }
	else { cin.ignore(UINT_MAX, '\n'); }

	/* TASK #3 - If we arrive here, everything is ok. We can add the integer ('int') values 'a' and 'b'. */
	cout<<"\tYou inserted the integer value 'b'="<<b<<"."<<endl<<endl;
	MyClass ca(a),cb(b);
	cout<<"\tThe first instance 'a' of the 'MyClass' class contains the integer ('int') value 'a'="<<ca.value()<<"."<<endl;
	cout<<"\tThe second instance 'b' of the 'MyClass' class contains the integer ('int') value 'b'="<<cb.value()<<"."<<endl;
   	s = ca+cb;
	cout<<"\tThe sum of these integer values is 'a+b'="<<s<<"."<<endl<<endl;
	cout << "\tPress the RETURN key to finish ... ";
	cout.flush();
	cin.ignore(UINT_MAX, '\n');
	#ifndef _MSC_VER
		cout << endl;
		cout.flush();
	#endif
	return EXIT_SUCCESS;
}
