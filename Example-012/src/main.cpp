/**********************************************************************************************
 * Examples in the C++ language (the 'Example-012' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), May 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-012' Test.
 **********************************************************************************************/

#include <iostream>
#include <cstdlib>
using namespace std;

/// The main function for the <i>'Example-012'</i> Test.
int main(void)
{
    /* This is the 'Example-12' Test, where the ASCII table is generated and validated. */
    cout<<endl<<"\tThis is the 'Example-012' Test in the C++ language."<<endl<<endl;
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
	cout << "\tPress the RETURN key to finish ... ";
	cout.flush();
	cin.ignore(UINT_MAX, '\n');
	#ifndef _MSC_VER
		cout << endl;
		cout.flush();
	#endif
    return EXIT_SUCCESS;
}
