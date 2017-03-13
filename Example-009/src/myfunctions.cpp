/******************************************************************************************************************************
 * Examples in the C++ language (the 'Example-009' unit test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), March 2017
 *
 * myfunctions.cpp - the source file, where the auxiliary functions for the 'Example-009' unit test are implemented.
 ******************************************************************************************************************************/

#include <iostream>
#include "myfunctions.h"
using namespace std;

/* Several functions, that can be selected and run by the user. */
inline void fa() { cout<<"\tRunning and executing the function 'fa()'."<<endl; }
inline void fb() { cout<<"\tRunning and executing the function 'fb()'."<<endl; }
inline void fc() { cout<<"\tRunning and executing the function 'fc()'."<<endl; }
inline void fd() { cout<<"\tRunning and executing the function 'fd()'."<<endl; }
inline void fe() { cout<<"\tRunning and executing the function 'fe()'."<<endl; }

/* A custom collection of functions, that can be selected and run by the user. */
void (*funcs[])() = { fa, fb, fc, fd, fe, nullptr };

char drawShell()
{
	char ans;
	
	/* Now, we draw the shell, and select which function has to be run. */
	cout<<"\tChoosing which function has to be run:"<<endl<<endl;
	cout<<"\t1. Function 'fa()'."<<endl;
	cout<<"\t2. Function 'fb()'."<<endl;
	cout<<"\t3. Function 'fc()'."<<endl;
	cout<<"\t4. Function 'fd()'."<<endl;
	cout<<"\t5. Function 'fe()'."<<endl;
	cout<<"\tQ. Exit from the program."<<endl<<endl;
	cout<<"\t>> ";
	cout.flush();
	cin>>ans;
	return ans;
}

int functionsNumber()
{
	int fl;
	
	/* We retrieve the number of functions in 'funcs' */
	fl=0;
	while(funcs[fl] != nullptr ) fl++;
	return fl;
}

void runFunction(char ans)
{
	int i,fl;
	
	/* If the choice is 'q' or 'Q', then the program ends here! */
	if( (ans=='q') || (ans=='Q') ) 
	{
		cout<<endl<<"\tThis program is ending correctly ... "<<endl<<endl;
		cout.flush();
		exit(EXIT_SUCCESS);
	}
	
	/* If we arrive here, the choice is valid. We retrieve the index of the location in 'funcs' */
	fl=functionsNumber();
	i=(int)ans-'0';
	i--;
	if( (i<0) || (i>=fl) ) 
	{
		/* A not valid choice has been inserted! */
		cout<<endl<<"\tPlease, insert a valid choice!!"<<endl<<endl;
		cout.flush();
	}
	else 
	{ 
		/* We execute the function in the location 'i' */
		cout<<endl;
		funcs[i]();
		cout<<endl;
		cout.flush();
	}
}
