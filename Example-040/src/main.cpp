/**************************************************************************************************
 * Examples in the C++ language (the 'Example-040' unit test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), March 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-040' unit test.
 **************************************************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/// The main function for the <i>Example-040</i> unit test.
int main(void)
{
	int number=0;

	/* This is the 'Example-040' unit test, where the generation of several pseudo-random values is tested! */
    cout<<endl<<"\tThis is the 'Example-040' unit test in the C++ language."<<endl<<endl;
    cout.flush();
    
    /* TASK #1 - our game can start! */
    srand(time(0));
    cout<<"\tGenerating the following pseudo-random integer values by using the 'srand()' and the 'rand()' C-like functions:"<<endl<<endl;
    cout.flush();
    for(int k=0;k<10;k++)
    {
    	number=rand()%100+1;
    	if(k<9) cout<<"\t\tgenerated the pseudo-random integer value "<<number<<";"<<endl;
    	else cout<<"\t\tgenerated the pseudo-random integer value "<<number<<"."<<endl;
    	cout.flush();
    }
    
    /* If we arrive here, all is ok */
    cout<<endl;
    cout.flush();
    return EXIT_SUCCESS;
}
