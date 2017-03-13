/**********************************************************************************************
 * Examples in the C++ language (the 'Example-012' unit test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), March 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-012' unit test.
 **********************************************************************************************/

#include <iostream>
#include <cstdlib>
using namespace std;

/// The main function for the <i>'Example-012'</i> unit test.
int main(void)
{
    /* This is the 'Example-12' unit test, where the ASCII table is generated and validated. */
    cout<<endl<<"\tThis is the 'Example-012' unit test in the C++ language."<<endl<<endl;
    cout.flush();
    for(int num=0;num<128;num++)
    {
    	char temp;
    	
    	/* Now, we convert the integer value 'num' as the corresponding 'char' value! */
    	temp=(char)num;
    	cout<<"\tThe integer code "<<num<<" corresponds to the 'char' value '"<<temp<<"'."<<endl;
    	cout.flush();
    }
    
    /* If we arrive here, all is ok! */
    cout<<endl;
    cout.flush();
    return EXIT_SUCCESS;
}
