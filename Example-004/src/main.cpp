/**************************************************************************************************
 * Examples in the C++ language (the 'Example-004' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), April 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-004' Test.
 **************************************************************************************************/

#include <iostream>
#include <cstdlib>
using namespace std;

/// The main function for the <i>'Example-004'</i> Test.
int main(void)
{
	int n=0;

    /* This is the 'Example-004' Test, where several C++11 constructs are validated. */
    cout<<endl<<"\tThis is the 'Example-004' Test in the C++ language."<<endl<<endl;
    cout.flush();
    
    /* TASK #1 - performing the C++1 initialization and the automatic traversal of the array 'a'. */
    int a[]={-4,5,-44,-5,33,12,55};
    cout<<"\tPerformed the automatic C++11 initialization of the array 'a'."<<endl;
    cout<<"\tPerforming the automatic C++11 traversal of the 'int' values in the array 'a':"<<endl<<endl;
    for(auto i : a)
    {
        cout<<"\t\textracted the 'int' value "<<i;
        if(n<6) cout<<";"<<endl;
        else cout<<"."<<endl;
        cout.flush();
        n=n+1;
    }
    
    /* All is ok! */
    cout<<endl;
    cout.flush();
    return EXIT_SUCCESS;   
}
