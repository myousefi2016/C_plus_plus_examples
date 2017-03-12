/**************************************************************************************************
 * Examples in the C++ language (the 'Example-004' unit test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), March 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-004' unit test.
 **************************************************************************************************/

#include <iostream>
#include <cstdlib>
using namespace std;

/// The main function for the <i>'Example-004'</i> unit test.
int main(void)
{ 
    /* This is the 'Example-004' unit test, where several C++11 constructs are validated. */
    cout<<endl<<"\tThis is the 'Example-004' unit test in the C++ language."<<endl<<endl;
    cout.flush();
    int a[]={-4,5,-44,-5,33,12,55};
    cout<<"\tPerformed the automatic C++11 initialization of the array 'a'."<<endl;
    cout<<"\tPerforming the automatic C++11 traversal of the 'int' values in the array 'a':"<<endl<<endl;
    for(auto i : a)
    {
        cout<<"\t'Int' value: "<<i<<endl;
        cout.flush();
    }
    
    /* All is ok! */
    cout<<endl;
    cout.flush();
    return EXIT_SUCCESS;   
}
