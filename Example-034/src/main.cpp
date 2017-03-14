/**************************************************************************************************
 * Examples in the C++ language (the 'Example-034' unit test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), March 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-034' unit test.
 **************************************************************************************************/

#include <iostream>
#include <cstdlib>
using namespace std;

/// This function computes the area of a rectangle with width 'w' and height 'h'.
int computeArea(int w=20,int h=30)
{
	cout<<endl<<"\tThe default parameter 'w' in the 'computeArea()' function is 20."<<endl;
	cout<<"\tThe default parameter 'h' in the 'computeArea()' function is 30."<<endl;
	cout<<"\tThe actual parameter 'w' in the 'computeArea()' function is "<<w<<"."<<endl;
	cout<<"\tThe actual parameter 'h' in the 'computeArea()' function is "<<h<<"."<<endl;
	cout.flush();
	return (w*h);
}

/// The main function for the <i>Example-034</i> unit test.
int main(void)
{
	int a;

	/* This is the 'Example-034' unit test, where the use of the default parameters in a function is tested! */
    cout<<endl<<"\tThis is the 'Example-034' unit test in the C++ language."<<endl<<endl;
    cout.flush();
    
    /* TASK #1 - Invoking the 'computeArea()' function by passing no actual parameter */
    cout<<"\tInvoking the 'computeArea()' function by passing no actual parameter."<<endl;
	a = computeArea();
	cout<<"\tThe area of interest 'w*h' is "<<a<<"."<<endl<<endl;
	cout.flush();
	
	/* TASK #2 - Invoking the 'computeArea()' function by passing only a custom width. */
    cout<<"\tInvoking the 'computeArea()' function by passing only the custom parameter 'w'=5."<<endl;
	a = computeArea(5);
	cout<<"\tThe area of interest 'w*h' is "<<a<<"."<<endl<<endl;
	cout.flush();
	
	/* TASK #3 - Invoking the 'computeArea()' function by passing both the custom width and the custom height. */
    cout<<"\tInvoking the 'computeArea()' function by passing both the custom parameter 'w'=5 and the custom parameter 'h'=10."<<endl;
	a = computeArea(5,10);
	cout<<"\tThe area of interest 'w*h' is "<<a<<"."<<endl<<endl;
	cout.flush();
	return EXIT_SUCCESS;
}
