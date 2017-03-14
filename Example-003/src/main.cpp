/**************************************************************************************************
 * Examples in the C++ language (the 'Example-003' unit test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), March 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-003' unit test.
 **************************************************************************************************/

#include <iostream>
#include <cstdlib>
using namespace std;

/// The main function for the <i>'Example-003'</i> unit test.
int main(int argc,char **argv)
{
    /* This is the 'Example-003' unit test, which is the 'echo testing' for the shell parameters! */
    cout<<endl<<"\tThis is the 'Example-003' unit test in the C++ language."<<endl<<endl;
    cout.flush();
    
    /* TASK #1 - checking the number of the shell parameters and their content. */
    if(argc==0)
    {
    	/* This case should not exist (testing)! */
    	cout<<"\tNo auxiliary parameter to this program."<<endl<<endl;
    	cout.flush();
    }
    else 
    {
    	/* Here, we have at least the name of the executable file! */
    	cout<<"\tThe executable file for this program is '"<<argv[0]<<"'."<<endl;
    	cout.flush();
    	if(argc>1)
    	{
    		if(argc==2) cout<<"\tThere is only one auxiliary (shell) parameter for this program:"<<endl<<endl;
    		else cout<<"\tThere are "<<(argc-1)<<" auxiliary (shell) parameters for this program:"<<endl<<endl;
			for(int k=1;k<argc;k++) 
			{ 
				cout<<"\t\tthe auxiliary parameter #"<<(k-1)<<" is '"<<argv[k]<<"'"; 
				if(k<argc-1) { cout<<";"<<endl; }
				else { cout<<"."<<endl; }
			}
		}
		else { cout<<"\tThere is no auxiliary (shell) parameter for this program."<<endl; }
		cout<<endl;
		cout.flush();
    }
    
    /* All is ok! */
    return EXIT_SUCCESS;   
}
