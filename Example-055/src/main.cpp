/**************************************************************************************************
 * Examples in the C++ language (the 'Example-055' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), April 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-055' Test.
 **************************************************************************************************/
 
#include <iostream>
#include <fenv.h>
#include <cmath>
#include <errno.h>
#include <cstdlib>
#include <float.h>
using namespace std;
#pragma fenv_access (on)

/// This function verifies whether an error occurred while performing several floating-point operations in the system.
bool verifyState()
{
	bool ris = true;

	/* Now, we analyze the state of the system! */
	if(errno == EDOM) { cout<<endl<<endl<<"\tA domain error occurred (found the 'EDOM' value)."; ris=false; }
	if(errno == ERANGE) { cout<<endl<<endl<<"\tA range error occurred (found the 'ERANGE' value)."; ris=false; }
	if(errno == EILSEQ) { cout<<endl<<endl<<"\tAn illegal sequence occurred (found the 'EILSEQ' value)."; ris=false; }
	if(fetestexcept(FE_DIVBYZERO)) { cout<<endl<<endl<<"\tA pole error occurred (found the 'FE_DIVBYZERO' value)."; ris=false; }
	if(fetestexcept(FE_INEXACT)) { cout<<endl<<endl<<"\tAn inexact result found. Rounding was necessary to store the result of an earlier floating-point operation (found the 'FE_INEXACT' value)."; ris=false; }
	if(fetestexcept(FE_INVALID)) { cout<<endl<<endl<<"\tA domain error occurred in an earlier floating-point operation (found the 'FE_INVALID' value)."; ris=false; }
	if(fetestexcept(FE_OVERFLOW)) { cout<<endl<<endl<<"\tAn overflow error occurred in an earlier floating-point operation (found the 'FE_OVERFLOW' value)."; ris=false; }
	if(fetestexcept(FE_UNDERFLOW)) { cout<<endl<<endl<<"\tAn underflow error occurred in an earlier floating-point operation (found the 'FE_UNDERFLOW' value)."; ris=false; }
	cout.flush();
	return ris;
}

/// The main function for the <i>'Example-055'</i> Test.
int main(void)
{
	double aaa;
	
	/* This is the 'Example-055' Test, where the infrastructure for the mathematical errors (floating-points exceptions) is tested. */
    cout<<endl<<"\tThis is the 'Example-055' Test in the C++ language."<<endl<<endl;
    cout.flush();
    
	/* TASK #1 - setting correctly the error macros, and perform a wrong operation (computing the logarithmic of '0'.). */
    if(math_errhandling & MATH_ERRNO) cout<<"\tThe MATH_ERRNO macro is set."<<endl;
    else cout<<"\tThe MATH_ERRNO macro is set."<<endl;
    if(math_errhandling & MATH_ERREXCEPT) cout<<"\tThe MATH_ERREXCEPT macro is set."<<endl;
    else cout<<"\tThe MATH_ERREXCEPT macro is set."<<endl;
    feclearexcept(FE_ALL_EXCEPT);
    errno=0;
    cout<<endl;
    cout<<"\tComputing the 'log(0)' value ... ";
  	aaa=log(0);
  	if(verifyState())
  	{
  		/* If we arrive here, all is ok! */
  		cout<<"ok"<<endl<<endl;
    	cout.flush();
    	return EXIT_SUCCESS;
  	}
  	else
  	{
  		/* If we arrive here, an error occurred! */
  		cout<<endl<<endl<<"\tAN ERROR OCCURRED, AND THIS PROGRAM IS CLOSING ..."<<endl<<endl;
  		cout.flush();
  		return EXIT_FAILURE;
  	}
}
