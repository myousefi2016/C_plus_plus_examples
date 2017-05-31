/**************************************************************************************************
 * Examples in the C++ language (the 'Example-056' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), May 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-056' Test.
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
	if(errno == EDOM) { cout<<"\tA domain error occurred (found the 'EDOM' value)."<<endl; ris=false; }
	if(errno == ERANGE) { cout<<"\tA range error occurred (found the 'ERANGE' value)."<<endl; ris=false; }
	if(errno == EILSEQ) { cout<<"\tAn illegal sequence occurred (found the 'EILSEQ' value)."<<endl; ris=false; }
	if(fetestexcept(FE_DIVBYZERO)) { cout<<"\tA pole error occurred (found the 'FE_DIVBYZERO' value)."<<endl; ris=false; }
	if(fetestexcept(FE_INEXACT)) { cout<<"\tAn inexact result found. Rounding was necessary to store the result of an earlier floating-point operation (found the 'FE_INEXACT' value)."<<endl; ris=false; }
	if(fetestexcept(FE_INVALID)) { cout<<"\tA domain error occurred in an earlier floating-point operation (found the 'FE_INVALID' value)."<<endl; ris=false; }
	if(fetestexcept(FE_OVERFLOW)) { cout<<"\tAn overflow error occurred in an earlier floating-point operation (found the 'FE_OVERFLOW' value)."<<endl; ris=false; }
	if(fetestexcept(FE_UNDERFLOW)) { cout<<"\tAn underflow error occurred in an earlier floating-point operation (found the 'FE_UNDERFLOW' value)."<<endl; ris=false; }
	cout.flush();
	feclearexcept (FE_ALL_EXCEPT);
    errno=0;
	return ris;
}

/// The main function for the <i>'Example-056'</i> Test.
int main(void)
{
	float c;

    /* This is the 'Example-056' Test, where all supported floating-point exceptions are validated. */
    cout<<endl<<"\tThis is the 'Example-056' Test in the C++ language."<<endl<<endl;
    cout.flush();
    
    /* TASK #1 - initialize several macros, and perform a collection of 'wrong' operations. */
    feclearexcept (FE_ALL_EXCEPT);
	errno=0;
    if(math_errhandling & MATH_ERREXCEPT) cout<<"\tThe MATH_ERREXCEPT macro is defined and set correctly."<<endl<<endl;
    else cout<<"\tThe MATH_ERREXCEPT macro is not defined and set correctly."<<endl<<endl;
    cout.flush();
    c=(0.0/0.0);
    verifyState();
    cout<<"\tThe result of the operation '0.0 / 0.0' is "<<c<<"."<<endl;
	cout<<"\t----------------------------------------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
    cout.flush();
    c=(1.0/0.0);
    verifyState();
    cout<<"\tThe result of the operation '1.0 / 0.0' is "<<c<<"."<<endl;
    cout<<"\t----------------------------------------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
    cout.flush();
    c=sqrt(-1);
    verifyState();
    cout<<"\tThe result of the operation 'sqrt(-1)' is "<<c<<"."<<endl;
    cout<<"\t----------------------------------------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
    cout.flush();
    c=1.0/10.0;
    verifyState();
    cout<<"\tThe result of the operation '1.0 / 10.0' is "<<c<<"."<<endl;
    cout<<"\t----------------------------------------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
    cout.flush();
    c=DBL_MAX*2.0;
    verifyState();
    cout<<"\tThe result of the operation 'DBL_MAX*2.0' is "<<c<<"."<<endl;
    cout<<"\t----------------------------------------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
    cout.flush();
    c=nextafter(DBL_MIN/pow(2.0,52),0.0);
    verifyState();
    cout<<"\tThe result of the operation 'nextafter(DBL_MIN/pow(2.0,52),0.0)' is "<<c<<"."<<endl;
    cout<<"\t----------------------------------------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
    cout.flush();
    
    /* If we arrive here, all is ok! */
	cout << "\tPress the RETURN key to finish ... ";
	cout.flush();
	getchar();
	#ifndef _MSC_VER
		cout << endl;
		cout.flush();
	#endif
    return EXIT_SUCCESS;
}
