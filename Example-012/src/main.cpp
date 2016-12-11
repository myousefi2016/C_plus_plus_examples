/**********************************************************************************************
 * Examples in the C++ language (the test 'Example-012')
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), December 2016
 *
 * main.cpp - the source file, implementing the main function for the test 'Example-012'.
 **********************************************************************************************/

#include <iostream>
#include <cstdlib>
using namespace std;

/// The main function for the <i>Example-012</i> unit test.
int main(void)
{
    /* This is the example 'Example-012', near to be the classic 'Hello World!" example! */
    cout<<endl<<"\tThis is the example 'Example-012' in the C++ language"<<endl<<endl;
    cout.flush();
    for(int num=0;num<128;num++)
    {
    	char temp;
    	
    	/* Now, we convert 'num' as a 'char' value! */
    	temp=(char)num;
    	cout<<"\tThe integer code "<<num<<" corresponds to the 'char' value '"<<temp<<"'"<<endl;
    	cout.flush();
    }
    
    /* If we arrive here, all is ok! */
    cout<<endl;
    cout.flush();
    return EXIT_SUCCESS;
}