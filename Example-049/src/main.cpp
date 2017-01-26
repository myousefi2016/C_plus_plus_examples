/**********************************************************************************************
 * Examples in the C++ language (the test 'Example-049')
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), January 2017
 *
 * main.cpp - the source file, implementing the main function for the test 'Example-049'.
 **********************************************************************************************/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

/// This function exports the content of an array (containing several 'int' values) on a generic output stream.
void print( int* val,unsigned int n,ostream &os=cout)
{
	for(unsigned int k=0;k<n;k++) { os<<"\tElement in position #"<<k<<": "<<*(val+k)<<endl; }
	os<<endl;
	os.flush();
}

/// This function exports the content of an array (containing several 'string' values) on a generic output stream.
void print(string* val,unsigned int n,ostream &os=cout)
{
	for(unsigned int k=0;k<n;k++) { os<<"\tElement in position #"<<k<<": "<<"'"<<*(val+k)<<"'"<<endl; }
	os<<endl;
	os.flush();
}

/// The main function for the <i>Example-049</i> unit test.
int main(void)
{
	int numbers[10];
	string seasons[4];

	/* This is the example 'Example-049', where the use of the arrays is tested! */
    cout<<endl<<"\tThis is the example 'Example-049' in the C++ language"<<endl<<endl;
    cout.flush();

	/* Generating 10 pseudo-random values, and saving these pseudo-random values into an array. */
	srand(time(0));
	cout<<"\tGenerating 10 pseudo-random integer values value to be saved into an array ... ";
	cout.flush();
	for(unsigned int k=0;k<10;k++) numbers[k]=rand();
	cout<<"ok"<<endl<<endl;
	cout.flush();
	print(numbers,10,cout);
	
	/* Generating the array 'seasons', containing the names of all seasons! */
	cout<<"\tInitializing an array, containing the names of all seasons ... ";
	seasons[0] = "summer";
	seasons[1] = "fall";
	seasons[2] = "winter";
	seasons[3] = "spring";
	cout<<"ok"<<endl<<endl;
	cout.flush();
	cout<<"\tPointer to the array of interest: "<<seasons<<endl;
	print(seasons,4);
	
	/* Automatic initialization for an array, containing the names for the week days! */
	cout<<"\tInitializing automatically an array, containing the names for the week days ... ";
    string weekdays[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    cout<<"ok"<<endl<<endl;
    print(weekdays,7);
    return EXIT_SUCCESS;
}

