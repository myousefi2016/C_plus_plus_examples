/*************************************************************************************
 * Examples in the C++ language (the test 'Example-003')
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), December 2016
 #
 # main.cpp - the 'main' file for the test 'Example-003'.
 **************************************************************************************/

#include <iostream>
#include <cstdlib>
using namespace std;

/// The main function for the <i>Example-003</i> unit test.
int main(int argc,char **argv)
{
    /* This is the example 'Example-003', which is the echo testing for the shell parameters! */
    cout<<endl<<"\tThis is the example 'Example-003' in the C++ language"<<endl<<endl;
    cout.flush();
    if(argc==0)
    {
    	/* This case should not exist (testing)! */
    	cout<<"\tNo auxiliary parameter to this program"<<endl<<endl;
    	cout.flush();
    }
    else 
    {
    	/* Here, we have at least the name of the executable file! */
    	cout<<"\tThe executable file for this program: "<<argv[0]<<endl<<endl;
    	cout.flush();
    	if(argc>1)
    	{
    		if(argc==2) cout<<"\tThere is only one auxiliary (shell) parameter"<<endl<<endl;
    		else cout<<"\tThere are "<<(argc-1)<<" auxiliary (shell) parameters"<<endl<<endl;
		for(int k=1;k<argc;k++) { cout<<"\t\tAuxiliary parameter #"<<(k-1)<<": "<<argv[k]<<endl; }
		cout<<endl;
	}
	else { cout<<"\tThere is no auxiliary (shell) parameter"<<endl<<endl; }
	cout.flush();
    }
    
    /* All is ok! */
    return EXIT_SUCCESS;   
}
