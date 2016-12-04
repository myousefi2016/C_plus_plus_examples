/********************************************************************************************************
 * Examples in the C++ language (the test 'Example-008')
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), December 2016
 *
 * myfunctions.h - the source file, implementing the auxiliary functions for the test 'Example-008'.
 ********************************************************************************************************/

#include <iostream>
#include "myfunctions.h"
using namespace std;
 
double volume(double d) 
{ 
	cout<<"\tInvoking the 'volume(double d)' function"<<endl;
	cout.flush();
	return (d*d*d); 
}

double volume(double r,double h) 
{ 
	cout<<"\tInvoking the 'volume(double r,double h)' function"<<endl;
	cout.flush();
	return (PI*r*r*h); 
}

double volume(double a,double b,double c) 
{
	cout<<"\tInvoking the 'volume(double a,double b,double c)' function"<<endl;
	cout.flush(); 
	return (a*b*c); 
}
