/********************************************************************************************************
 * Examples in the C++ language (the test 'Example-035')
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), December 2016
 *
 * myheader.cpp - the source file, implementing the auxiliary function for the test 'Example-035'.
 ********************************************************************************************************/

#include <iostream>
using namespace std;
 
void addThree(int &a,int &b)
{
	cout<<"\tInitial value for the integer value 'a' in the 'addThree()' function: "<<a<<endl;
	cout<<"\tInitial value for the integer value 'b' in the 'addThree()' function: "<<b<<endl<<endl;
	a=a+3;
	b=b+3;
	cout<<"\tUpdated value for the integer value 'a' in the 'addThree()' function: "<<a<<endl;
	cout<<"\tUpdated value for the integer value 'b' in the 'addThree()' function: "<<b<<endl<<endl;
}

