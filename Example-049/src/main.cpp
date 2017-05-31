/**************************************************************************************************
 * Examples in the C++ language (the 'Example-049' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), May 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-049' Test.
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
		os<<"\t\t-) the 'int' value in position #"<<k<<" is "<<*(val+k);
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
		os<<"\t\t-) the string in position #"<<k<<" is '"<<*(val+k);
		if(k<n-1) os<<"';"<<endl;
		else os<<"'."<<endl; 
	}
	
	/* We add EOL ... */
	os<<endl;
	os.flush();
}

/// The main function for the <i>'Example-049'</i> Test.
int main(void)
{
	int numbers[10];
	string seasons[4];

	/* This is the 'Example-049' Test, where the use of the arrays (described by the C-like pointers) is tested! */
    cout<<endl<<"\tThis is the 'Example-049' Test in the C++ language."<<endl<<endl;
    cout.flush();
    
    /* TASK #1 - generating 10 pseudo-random values, and saving these pseudo-random values into an array (described by a C-like pointer). */
	srand(time(0));
	cout<<"\tGenerating 10 pseudo-random 'int' values to be saved into an array (described by a C-like pointer) ... ";
	cout.flush();
	for(unsigned int k=0;k<10;k++) numbers[k]=rand();
	cout<<"ok"<<endl<<endl<<"\tThis array (described by a C-like pointer) contains the following 'int' values: "<<endl<<endl;
	cout.flush();
	print(numbers,10,cout);
	
	/* TASK #2 - generating the array 'seasons', containing the names of all seasons! */
	cout<<"\tInitializing an array (described by a C-like pointer), containing the names of all seasons ... ";
	seasons[0] = "Summer";
	seasons[1] = "Fall";
	seasons[2] = "Winter";
	seasons[3] = "Spring";
	cout<<"ok"<<endl<<endl;
	cout.flush();
	cout<<"\tThe C-like pointer to the array of interest is "<<seasons<<", and contains the following strings:"<<endl<<endl;
	print(seasons,4);
	
	/* TASK #3 - automatic initialization for an array, containing the names for the week days! */
	cout<<"\tInitializing automatically an array (described by a C-like pointer), containing the names for the week days ... ";
    string weekdays[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    cout<<"ok"<<endl<<endl<<"\tThis array (described by a C-like pointer) contains the following strings: "<<endl<<endl;
    print(weekdays,7);
	cout << "\tPress the RETURN key to finish ... ";
	cout.flush();
	cin.clear();
	getchar();
	#ifndef _MSC_VER
		cout << endl;
		cout.flush();
	#endif
	return EXIT_SUCCESS;
}
