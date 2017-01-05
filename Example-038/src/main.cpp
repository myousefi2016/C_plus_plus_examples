/*************************************************************************************
 * Examples in the C++ language (the test 'Example-038')
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), December 2016
 *
 * main.cpp - the 'main' file for the test 'Example-038'.
 **************************************************************************************/

#include <iostream>
#include <cstdlib>
#include "myheader.h"
using namespace std;

 /// The main function for the <i>Example-038</i> unit test.
int main(void)
{
	int x1,y1,x2,y2;

	/* Main operations! */
	cout<<endl<<"\tThis is the example 'Example-038' in the C++ language"<<endl<<endl;
	cout.flush();
	
	/* Inserting the first 2D point (x1,y1) */
	cout<<"\tPlease, insert the coordinates 'x1' and 'y1' for the first Euclidean 2D point '(x1,y1)': ";
	cin>>x1>>y1;
	if(!cin)
	{
		cout<<endl<<"\tYOU MUST INSERT TWO INTEGER COORDINATES '(x1,y1)'"<<endl<<"\tThis program is exiting ..."<<endl<<endl;
		cout.flush();
		return EXIT_FAILURE;
	}
	
	/* Inserting the first 2D point (x2,y2) */
	cout<<"\tPlease, insert the coordinates 'x2' and 'y2' for the first Euclidean 2D point '(x2,y2)': ";
	cin>>x2>>y2;
	if(!cin)
	{
		cout<<endl<<"\tYOU MUST INSERT TWO INTEGER COORDINATES '(x2,y2)'"<<endl<<"\tThis program is exiting ..."<<endl<<endl;
		cout.flush();
		return EXIT_FAILURE;
	}
	
	/* Now, we apply the auxiliary functions! */
	cout<<endl<<"\tThe first Euclidean 2D point is: "<<x1<<" "<<y1<<endl;
	cout<<"\tThe second Euclidean 2D point is: "<<x2<<" "<<y2<<endl<<endl;
	cout<<"\tTheir squared (Euclidean) distance is: "<<getSquaredDistance(x1,y1,x2,y2)<<endl;
	cout<<"\tTheir (Euclidean) distance is: "<<getDistance(x1,y1,x2,y2)<<endl<<endl;
	cout.flush();
	return EXIT_SUCCESS;	
}