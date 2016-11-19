/*************************************************************************************
 * Examples in the C++ language (the test 'Example-004')
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), November 2016
 #
 # main.cpp - the 'main' file for the test 'Example-004'.
 **************************************************************************************/

#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc,char **argv)
{
    int a[]={-4,5,-44,-5,33,12,55};
    
    /* Here, we consider a very simple C++11 construct! */
    cout<<endl<<"\tPerformed the automatic C++11 initialization of the array 'a'."<<endl;
    cout<<"\tPerforming the automatic C++11 traversal of the 'int' value in the array 'a'"<<endl<<endl;
    for(auto i : a)
    {
        cout<<"\tInteger value: "<<i<<endl;
        cout.flush();
    }
    
    /* All is ok! */
    cout<<endl;
    cout.flush();
    return EXIT_SUCCESS;   
}
