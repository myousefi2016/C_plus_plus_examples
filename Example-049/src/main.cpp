/**************************************************************************************************
 * Examples in the C++ language (the 'Example-049' unit test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), March 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-049' unit test.
 **************************************************************************************************/
 
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

/// This function exports the content of an array (containing several 'int' values) on a generic output stream.
void print(int* val,unsigned int n,ostream &os=cout)
{
	for(unsigned int k=0;k<n;k++) 
	{ 
		os<<"\tthe element in position #"<<k<<" is "<<*(val+k);
		if(k<n-1) os<<";"<<endl;
		else os<<"."<<endl; 
	}
	
	/* We add EOL ... */
	os<<endl;
	os.flush();
}

/// This function exports the content of an array (containing several 'string' values) on a generic output stream.
void print(string* val,unsigned int n,ostream &os=cout)
{
	for(unsigned int k=0;k<n;k++) 
	{ 
		os<<"\tThe element in position #"<<k<<" is "<<*(val+k);
		if(k<n-1) os<<";"<<endl;
		else os<<"."<<endl; 
	}
	
	/* We add EOL ... */
	os<<endl;
	os.flush();
}

/// The main function for the <i>Example-049</i> unit test.
int main(void)
{
	int numbers[10];
	string seasons[4];

	/* This is the 'Example-049' unit test, where the use of the arrays (described by the C-like pointers) is tested! */
    cout<<endl<<"\tThis is the 'Example-049' unit test in the C++ language."<<endl<<endl;
    cout.flush();
    
    /* TASK #1 - generating 10 pseudo-random values, and saving these pseudo-random values into an array (described by a C-like pointer). */
	srand(time(0));
	cout<<"\tGenerating 10 pseudo-random integer values value to be saved into an array (described by a C-like pointer) ... ";
	cout.flush();
	for(unsigned int k=0;k<10;k++) numbers[k]=rand();
	cout<<"ok"<<endl<<endl;
	cout.flush();
	print(numbers,10,cout);
	
	/* TASK #2 - generating the array 'seasons', containing the names of all seasons! */
	cout<<"\tInitializing an array (described by a C-like pointer), containing the names of all seasons ... ";
	seasons[0] = "summer";
	seasons[1] = "fall";
	seasons[2] = "winter";
	seasons[3] = "spring";
	cout<<"ok"<<endl<<endl;
	cout.flush();
	cout<<"\tThe C-like pointer to the array of interest is "<<seasons<<"."<<endl;
	print(seasons,4);
	
	/* TASK #3 - automatic initialization for an array, containing the names for the week days! */
	cout<<"\tInitializing automatically an array (described by a C-like pointer), containing the names for the week days ... ";
    string weekdays[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    cout<<"ok"<<endl<<endl;
    print(weekdays,7);
	return EXIT_SUCCESS;
}
