/**************************************************************************************************
 * Examples in the C++ language (the 'Example-060' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), June 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-060' Test.
 **************************************************************************************************/

#include <cstdlib>
#include <cassert>
#include <iostream>
using namespace std;

/// The main function for the <i>'Example-060'</i> Test.
int main(void)
{
	int a=0,b=0;

	/* This is the 'Example-060' Test, where the 'assertions' are validated. */
	cout<<endl<<"\tThis is the 'Example-060' Test in the C++ language."<<endl<<endl;
	cout.flush();
	
	/* TASK #1 - we read the 'int' value 'a' from the standard input stream. */
	cout<<"\tPlease, insert the 'int' value 'a' (it must be positive and not null): ";
	cout.flush();
	cin>>a;
	assert(cin);
	cout<<"\tPassed the assertion (check) on the standard input stream validity."<<endl;
	cout.flush();
	assert(a>0); 
	cout<<"\tPassed the assertion (check) on the positive and not null value 'a'="<<a<<"."<<endl<<endl;
	cout.flush();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	cin.clear();
	cin.clear();
	cout << "\tPress the RETURN key to continue ... ";
	cout.flush();
	cin.get();
	cout << endl;
	cout.flush();
	
	/* TASK #2 - we read the 'int' value 'b' from the standard input stream. */
	cout<<"\tPlease, insert the 'int' value 'b' (it must be positive and not null): ";
	cout.flush();
	cin>>b;
	assert(cin);
	cout<<"\tPassed the assertion (check) on the standard input stream validity."<<endl;
	cout.flush();
	assert(b>0); 
	cout<<"\tPassed the assertion (check) on the positive and not null value 'b'="<<b<<"."<<endl<<endl;
	cout.flush();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	cin.clear();
	cin.clear();
	cout << "\tPress the RETURN key to continue ... ";
	cout.flush();
	cin.get();
	cout << endl;
	cout.flush();
	
	/* TASK #3 - computing an expression, involving the parameters 'a' and 'b'. */
	cout<<"\tThe value of the parameter 'a' is "<<a<<"."<<endl;
	cout<<"\tThe value of the parameter 'b' is "<<b<<"."<<endl;
	cout<<"\tThe value of the expression 'a+b' is "<<(a+b)<<endl;
	cout<<"\tThe value of the expression 'a-b' is "<<(a-b)<<endl;
	cout<<"\tThe value of the expression 'a*b' is "<<(a*b)<<endl;
	cout<<"\tThe value of the expression 'a/b' is "<<((float)a/b)<<endl<<endl;
	cout << "\tPress the RETURN key to finish ... ";
	cin.get();
	#ifndef _MSC_VER
		cout << endl;
		cout.flush();
	#endif
	return EXIT_SUCCESS;
}
