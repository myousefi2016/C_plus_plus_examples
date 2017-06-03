/**********************************************************************************************
 * Examples in the C++ language (the 'Example-006' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), June 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-006' Test.
 **********************************************************************************************/

#include <iostream>
#include <cstdlib>
using namespace std;

/// The main function for the <i>'Example-006'</i> Test.
int main(void)
{
	/* This is the 'Example-006' Test, where the 'jump' construct for navigating among the labels is validated. */
    cout<<endl<<"\tThis is the 'Example-006' Test in the C++ language."<<endl<<endl;
    cout.flush();
    
    /* TASK #1 - navigating among the labels by using the 'jump' construct. */
    cout<<"\tStarting the navigation among the labels."<<endl<<endl;
    cout<<"\tJumping to the label 'step1' ... ";
    cout.flush();
    goto step1;

	/* Label 'step2'. */
    step2:
    	
    	cout<<"ok"<<endl;
    	cout<<"\tReached the statement, related to the label 'step2'."<<endl<<endl;
    	cout<<"\tJumping to the label 'final_step' ... ";
    	cout.flush();
    	goto final_step;
    
    /* Label 'step1'. */
    step1:
    
    	cout<<"ok"<<endl;
    	cout<<"\tReached the statement, related to the label 'step1'."<<endl<<endl;
    	cout<<"\tJumping to the label 'step2' ... ";
    	cout.flush();
    	goto step2;
    	
   	/* Label 'final_step'. */
	final_step:
    
    	cout<<"ok"<<endl;
    	cout<<"\tReached the statement, related to the label 'final_step'."<<endl<<endl;
    	cout<<"\tFinished navigation among the labels."<<endl<<endl;
    	cout.flush();
    	
    /* All is ok! */
	cout << "\tPress the RETURN key to finish ... ";
	cout.flush();
	cin.get();
	#ifndef _MSC_VER
		cout << endl;
		cout.flush();
	#endif
	return EXIT_SUCCESS;
}

