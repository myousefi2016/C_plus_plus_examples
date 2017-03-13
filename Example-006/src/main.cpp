/**********************************************************************************************
 * Examples in the C++ language (the 'Example-006' unit test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), March 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-006' unit test.
 **********************************************************************************************/
#include <cstdlib>
#include <iostream>
using namespace std;

/// The main function for the <i>'Example-006'</i> unit test.
int main(void)
{
	/* This is the 'Example-006' unit test, which exploits 'jump' construct for navigating among the labels. */
    cout<<endl<<"\tThis is the 'Example-006' unit test in the C++ language."<<endl<<endl;
    cout.flush();
    
    /* TASK #1 - navigating among the labels by using the 'jump' construct. */
    cout<<"\tStarting the navigation among the labels."<<endl<<endl;
    cout<<"\tJumping to the label 'step1' ... ";
    cout.flush();
    goto step1;

	/* Label step2 */
    step2:
    	
    	cout<<"ok"<<endl;
    	cout<<"\tReached the statement, related to the label 'step2'."<<endl<<endl;
    	cout<<"\tJumping to the label 'final_step' ... ";
    	cout.flush();
    	goto final_step;
    
    	/* Label step1 */
    	step1:
    
    	cout<<"ok"<<endl;
    	cout<<"\tReached the statement, related to the label 'step1'."<<endl<<endl;
    	cout<<"\tJumping to the label 'step2' ... ";
    	cout.flush();
    	goto step2;
    	
   	/* Label 'final_step' */
	final_step:
    
    	cout<<"ok"<<endl;
    	cout<<"\tReached the statement, related to the label 'final_step'."<<endl<<endl;
    	cout<<"\tFinished navigation among the labels."<<endl<<endl;
    	cout.flush();
    	
    	/* All is ok! */
	return EXIT_SUCCESS;
}

