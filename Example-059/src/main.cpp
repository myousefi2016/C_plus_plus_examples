/************************************************************************************************************************
 * Examples in the C++ language (the 'Example-059' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), June 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-059' Test.
 *************************************************************************************************************************/

#include <cstdlib>
#include <iostream>
#include <exception>
#include <string>
#include <limits>
using namespace std;

/// This function simulates a pause while this test runs.
void pause()
{
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	cin.clear();
	cout << "\tPress the RETURN key to finish ... ";
	cout.flush();
	cin.get();
	#ifndef _MSC_VER
		cout << endl;
		cout.flush();
	#endif
}

/// This class describes a custom exception
class MyException : public exception
{
	public:
	
	/// This member function allocates a new custom exception with a custom error message.
	MyException (const string &s) { this->msg=string(s); }
	
	/// This virtual member function deallocates an instance of this class.
	virtual ~MyException() { this->msg.clear(); }
	
	/// This virtual member function returns the error message, related to the current custom exception.
	virtual const char* what() const throw() { return this->msg.c_str(); }

	protected:
	
	/// The custom error message.
	string msg;
	
	/// This member function allocates a new custom exception with an empty error message.
	MyException() : exception() { this->msg.clear(); }
};

/// The main function for the <i>'Example-059'</i> Test.
int main(void)
{
	int a=0;
	
	/* This is the 'Example-059' Test, where the 'exceptions' are validated. */
	cout<<endl<<"\tThis is the 'Example-059' Test in the C++ language."<<endl<<endl;
	cout.flush();
	
	/* TASK #1 - we read the 'int' value 'a' from the standard input stream. */
	try
	{
		cout<<"\tPlease, insert the 'int' value 'a' (it must be positive and not null): ";
		cout.flush();
		cin>>a;
		if( (!cin) || (a<=0) ) 
		{ 
			cout<<endl<<"\tAn error occurred, and the corresponding exception is thrown!"<<endl;
			cout.flush();
			throw new MyException("\tPLEASE, YOY MUST INSERT THE POSITIVE AND NOT NULL INTEGER VALUE 'a'!"); 
		}
		else
		{
			/* All is ok! */
			cout<<"\tThe value of the parameter 'a' you insert is "<<a<<", and it is a positive and not null value."<<endl<<endl;
			cin.clear();
			cin.clear();
			pause();
			return EXIT_SUCCESS;
		}
	}
	catch(exception *e)
	{
		cin.clear();
		cin.clear();
		cout<<"\tAn exception is catched!"<<endl<<endl;
		cout<<e->what()<<endl<<endl<<"\tTHIS PROGRAM IS CLOSING ... "<<endl<<endl;
		cout.flush();
		pause();
		delete e;
		e=nullptr;
		return EXIT_FAILURE;
	}
}
