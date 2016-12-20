/********************************************************************************************************
 * Examples in the C++ language (the test 'Example-035')
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), December 2016
 *
 * main.cpp - the source file, implementing the main function for the test 'Example-035'.
 ********************************************************************************************************/

#include "myheader.h"
#include <cstdlib>
#include <iostream>
using namespace std;

/// The main function for the <i>Example-035</i> unit test.
int main(void)
{
	int a,b;

	/* Main operations! */
	cout<<endl<<"\tThis is the example 'Example-035' in the C++ language"<<endl<<endl;
	cout.flush();
	cout<<"\tPlease, insert the integer value 'a': ";
	cin>>a;
	if(!cin)
	{
		cout<<endl<<"\tYOU MUST ENTER an INTEGER VALUE for 'a'!!!"<<endl<<endl;
		return EXIT_FAILURE;
	}
	
	cout<<"\tPlease, insert the integer value 'b': ";
	cin>>b;
	if(!cin)
	{
		cout<<endl<<"\tYOU MUST ENTER an INTEGER VALUE for 'b'!!!"<<endl<<endl;
		return EXIT_FAILURE;
	}

	cout<<"\tThe initial integer value for the variable 'a' in the 'main()' function is: "<<a<<endl;
	cout<<"\tThe initial integer value for the variable 'b' in the 'main()' function is: "<<b<<endl<<endl;
	addThree(a,b);
	cout<<"\tThe final integer value for the variable 'a' in the 'main()' function is: "<<a<<endl;
	cout<<"\tThe final integer value for the variable 'b' in the 'main()' function is: "<<b<<endl<<endl;
	return EXIT_SUCCESS;
}

