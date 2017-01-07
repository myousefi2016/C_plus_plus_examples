/**********************************************************************************************
 * Examples in the C++ language (the test 'Example-040')
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), January 2017
 *
 * main.cpp - the source file, implementing the main function for the test 'Example-040'.
 **********************************************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/// The main function for the <i>Example-040</i> unit test.
int main(void)
{
	int number=0;

	/* This is the example 'Example-040', where the generation of several pseudo-random values is tested! */
    cout<<endl<<"\tThis is the example 'Example-040' in the C++ language"<<endl<<endl;
    cout.flush();
    srand(time(0));
    cout<<"\tGenerating several pseudo-random integer values"<<endl<<endl;
    cout.flush();
    for(int k=0;k<10;k++)
    {
    	number=rand()%100+1;
    	cout<<"\tGenerated pseudo-random integer value #"<<k<<": "<<number<<endl;
    	cout.flush();
    }
    
    /* If we arrive here, all is ok */
    cout<<endl;
    cout.flush();
    return EXIT_SUCCESS;
}
