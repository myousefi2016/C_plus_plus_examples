/******************************************************************************************************************************
 * Examples in the C++ language (the 'Example-009' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), June 2017
 *
 * myfunctions.cpp - the source file, where the auxiliary functions for the 'Example-009' Test are implemented.
 ******************************************************************************************************************************/
#include <iostream>
#include "myfunctions.h"
#include <limits>
#include <cstdlib>
using namespace std;

void pause()
{
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	cin.clear();
	cout << "\tPress the RETURN key to finish ... ";
	cout.flush();
	cin.get();
	#ifndef _MSC_VER
		cout << endl;
		cout.flush();
	#endif
}

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
	cout<<"\t1) \t invoking the function 'fa()';"<<endl;
	cout<<"\t2) \t invoking the function 'fb()';"<<endl;
	cout<<"\t3) \t invoking the function 'fc()';"<<endl;
	cout<<"\t4) \t invoking the function 'fd()';"<<endl;
	cout<<"\t5) \t invoking the function 'fe()';"<<endl;
	cout<<"\tQ/q)\t exit from the program."<<endl<<endl;
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
	/* If the choice is 'q' or 'Q', then the program ends here! */
	if ((ans == (int)'q') || (ans == (int)'Q'))
	{
		cout << endl << "\tThis program is ending correctly ... " << endl << endl;
		cin.clear();
		pause();
		exit(EXIT_SUCCESS);
	}

	/* If we arrive here, we must exclude the null number. */
	if (ans == '0')
	{
		cout << endl << "\tPLEASE, YOU MUST INSERT A VALID CHOICE!" << endl << endl << "\tTHIS PROGRAM IS CLOSING ... " << endl << endl;
		cin.clear();
		pause();
		exit(EXIT_FAILURE);
	}

	/* When we arrive here, we must have a not null number.  */
	int fl = functionsNumber();
	string s = string() + ans;
	int i = atoi(s.c_str());
	if(i == 0)
	{
		cout << endl << "\tPLEASE, YOU MUST INSERT A VALID CHOICE!" << endl << endl << "\tTHIS PROGRAM IS CLOSING ... " << endl << endl;
		cin.clear();
		pause();
		exit(EXIT_FAILURE);
	}
	else if ((i < 1) || (i > fl))
	{
		cout << endl << "\tPLEASE, YOU MUST INSERT A VALID CHOICE!" << endl << endl << "\tTHIS PROGRAM IS CLOSING ... " << endl << endl;
		cin.clear();
		pause();
		exit(EXIT_FAILURE);
	}
	else
	{
		/* We execute the function in the location 'i' */
		cout<<endl;
		funcs[i-1]();
		cout<<endl;
		cout.flush();
	}
}

