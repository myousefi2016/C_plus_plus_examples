/**************************************************************************************************
 * Examples in the C++ language (the 'Example-038' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), June 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-038' Test.
 **************************************************************************************************/

#include <iostream>
#include <cstdlib>
#include <limits>
#include "myheader.h"
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

/// The main function for the <i>'Example-038'</i> Test.
int main(void)
{
	int x1,y1,x2,y2;

	/* This is the 'Example-38' Test, where the automatic conversion between the 'int' and the 'double' C++ built-in values is validated. */
    cout<<endl<<"\tThis is the 'Example-038' Test in the C++ language."<<endl<<endl;
    cout.flush();
    
    /* TASK #1 - inserting the integer coordinates for the first 2D point '(x1,y1)'. */
	cout<<"\tPlease, insert the integer coordinates 'x1' and 'y1' (separated by a space) for the first Euclidean 2D point '(x1,y1)': ";
	cin>>x1>>y1;
	if(!cin)
	{
		cin.clear();
		cin.clear();
		cout<<endl<<"\tPLEASE, YOU MUST INSERT TWO INTEGER COORDINATES '(x1,y1)'!"<<endl<<endl<<"\tTHIS PROGRAM IS CLOSING ..."<<endl<<endl;
		pause();
		return EXIT_FAILURE;
	}

	/* TASK #2 - inserting the integer coordinates for the first 2D point '(x2,y2)'. */
	cout<<"\tPlease, insert the integer coordinates 'x2' and 'y2' (separated by a space) for the second Euclidean 2D point '(x2,y2)': ";
	cin>>x2>>y2;
	if(!cin)
	{
		cin.clear();
		cin.clear();
		cout<<endl<<"\tPLEASE, YOU MUST INSERT TWO INTEGER COORDINATES '(x2,y2)'!"<<endl<<endl<<"\tTHIS PROGRAM IS CLOSING ..."<<endl<<endl;
		pause();
		return EXIT_FAILURE;
	}

	/* TASK #3 - applying the auxiliary functions 'getSquaredDistance()' and the 'getDistance()' ! */
	cout<<"\tThe first Euclidean 2D point '(x1,y1)' is "<<x1<<" "<<y1<<"."<<endl;
	cout<<"\tThe second Euclidean 2D point '(x2,y2)' is "<<x2<<" "<<y2<<"."<<endl;
	cout<<"\tTheir squared (Euclidean) distance is "<<getSquaredDistance(x1,y1,x2,y2)<<"."<<endl;
	cout<<"\tTheir (Euclidean) distance is "<<getDistance(x1,y1,x2,y2)<<"."<<endl<<endl;
	pause();
	return EXIT_SUCCESS;
}

