/********************************************************************************************************
 * Examples in the C++ language (the 'Example-035' unit test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), March 2017
 *
 * myheader.cpp - the source file, implementing the auxiliary function for the 'Example-035' unit test.
 ********************************************************************************************************/

#include <iostream>
using namespace std;
 
void addThree(int &a,int &b)
{
	cout<<"\tThe initial value for the variable 'a' in the 'addThree()' function is "<<a<<"."<<endl;
	cout<<"\tThe initial value for the variable 'b' in the 'addThree()' function is "<<b<<"."<<endl<<endl;
	a=a+3;
	b=b+3;
	cout<<"\tThe final (updated) value for the variable 'a' in the 'addThree()' function is "<<a<<"."<<endl;
	cout<<"\tThe final (updated) value for the variable 'b' in the 'addThree()' function is "<<b<<"."<<endl<<endl;
	cout.flush();
}
