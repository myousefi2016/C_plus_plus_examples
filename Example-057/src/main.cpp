/**********************************************************************************************
 * Examples in the C++ language (the test 'Example-057')
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), January 2017
 *
 * main.cpp - the source file, implementing the main function for the test 'Example-057'.
 **********************************************************************************************/
 
#include <iostream>
#include <cfenv>
#include <cmath>
#include <cerrno>
#include <cstdlib>
using namespace std;
#define PI 3.14159265
#if !defined(_MSC_VER)
	#pragma fenv_access (on)
#else
	#pragma STDC FENV_ACCESS ON
#endif

/// This function verifies whether an error occurred while performing several floating-point operations in the system.
bool verifyState()
{
	bool ris = true;

	/* Now, we analyze the state of the system! */
	if(errno == EDOM) { cout<<endl<<endl<<"\tA domain error occurred (Found the 'EDOM' value)."; ris=false; }
	if(errno == ERANGE) { cout<<endl<<endl<<"\tA range error occurred (Found the 'ERANGE' value)."; ris=false; }
	if(errno == EILSEQ) { cout<<endl<<endl<<"\tAn illegal sequence occurred (Found the 'EILSEQ' value)."; ris=false; }
	if(fetestexcept(FE_DIVBYZERO)) { cout<<endl<<endl<<"\tA pole error occurred (Found the 'FE_DIVBYZERO' value)."; ris=false; }
	if(fetestexcept(FE_INEXACT)) { cout<<endl<<endl<<"\tAn inexact result found. Rounding was necessary to store the result of an earlier floating-point operation. (Found the 'FE_INEXACT' value)."; ris=false; }
	if(fetestexcept(FE_INVALID)) { cout<<endl<<endl<<"\tA domain error occurred in an earlier floating-point operation. (Found the 'FE_INVALID' value)."; ris=false; }
	if(fetestexcept(FE_OVERFLOW)) { cout<<endl<<endl<<"\tAn overflow error occurred in an earlier floating-point operation. (Found the 'FE_OVERFLOW' value)."; ris=false; }
	if(fetestexcept(FE_UNDERFLOW)) { cout<<endl<<endl<<"\tAn underflow error occurred in an earlier floating-point operation. (Found the 'FE_UNDERFLOW' value)."; ris=false; }
	cout.flush();
	feclearexcept (FE_ALL_EXCEPT);
    errno=0;
	return ris;
}

/// The main function for the <i>Example-057</i> unit test.
int main(void)
{
	double param,result,param2;
	bool b;

	/* This is the example 'Example-057', where several trigonometric functions are validated. */
    cout<<endl<<"\tThis is the example 'Example-057' in the C++ language"<<endl<<endl;
    cout.flush();
	cout<<"\tPlease, insert an angle (in degree): ";
    cin>>param;
    if(!cin)
    {
    	cout<<"\tPLEASE, INSERT A VALID ANGLE (IN DEGREE). THIS PROGRAM IS CLOSING ... "<<endl<<endl;
    	cout.flush();
    	return EXIT_FAILURE;
    }
    
    /* Now, we compute the sine for the angle of interest. */
    cout<<endl;
	feclearexcept(FE_ALL_EXCEPT);
	errno=0;
	result = sin ( param * PI / 180.0 );
	cout<<"\tThe sine of "<<param<<" degree(s) is "<<result<<" (see the 'sin()' function)";
	b=verifyState();
	cout<<endl<<"\t==========================================================================================================================================="<<endl<<endl;
	cout.flush();
	
	/* Now, we compute the arc sine for the previous computation! */
	feclearexcept (FE_ALL_EXCEPT);
	param2 = asin(result)*180.0/PI;
    cout<<"\tThe arc sine of "<<result<<" is "<<param2<<" degree(s) (see the 'asin()' function)"<<endl;
	cout<<"\tRecall that the 'asin()' function returns a radiant value, belonging to [-PI/2,PI/2] (thus to [-90,90] degrees), with its multiplicity.";
	cout.flush();
	b=verifyState();
	cout<<endl<<"\t==========================================================================================================================================="<<endl<<endl;
	cout.flush();
	
	/* Now, we compute the cosine for the angle of interest. */
	feclearexcept (FE_ALL_EXCEPT);
	result = cos ( param * PI / 180.0 );
	cout<<"\tThe cosine of "<<param<<" degree(s) is "<<result<<" (see the 'cos()' function)";
	b=verifyState();
	cout<<endl<<"\t==========================================================================================================================================="<<endl<<endl;
	cout.flush();
	
	/* Now, we compute the arc cosine for the previous computation! */
	feclearexcept (FE_ALL_EXCEPT);
	param2 = acos(result)*180.0/PI;
    cout<<"\tThe arc cosine of "<<result<<" is "<<param2<<" degree(s) (see the 'acos()' function)"<<endl;
	cout<<"\tRecall that the 'acos()' function returns a radiant value, belonging to [0,PI] (thus to [0,180] degrees), with its multiplicity.";
	cout.flush();
	b=verifyState();
	cout<<endl<<"\t==========================================================================================================================================="<<endl<<endl;
	cout.flush();
	
	/* Now, we compute the tangent for the angle of interest. */
	feclearexcept (FE_ALL_EXCEPT);
	result = tan ( param * PI / 180.0 );
	cout<<"\tThe tangent of "<<param<<" degree(s) is "<<result<<" (see the 'tan()' function)";
	b=verifyState();
	cout<<endl<<"\t==========================================================================================================================================="<<endl<<endl;
	cout.flush();
	
	/* Now, we compute the arc tangent for the previous computation! */
	feclearexcept (FE_ALL_EXCEPT);
	param2 = atan(result)*180.0/PI;
    cout<<"\tThe arc tangent of "<<result<<" is "<<param2<<" degree(s) (see the 'atan()' function)"<<endl;
	cout<<"\tRecall that the 'atan()' function returns a radiant value, belonging to (-PI/2,PI/2), thus to (-90,90) degrees, with its multiplicity.";
	cout.flush();
	b=verifyState();
	cout<<endl<<"\t==========================================================================================================================================="<<endl<<endl;
	cout.flush();
	
	/* Now, we compute the arc tangent for the previous computation! */
	feclearexcept (FE_ALL_EXCEPT);
	param2 = atan2(result,1.0)*180.0/PI;
	cout<<"\tThe arc tangent of "<<result<<" is "<<param2<<" degree(s) (see the 'atan2()' function)"<<endl;
	cout<<"\tRecall that the 'atan2()' function returns a radiant value, belonging to (-PI/2,PI/2), thus to (-90,90) degrees), with its multiplicity.";
	cout.flush();
	b=verifyState();
	cout<<endl<<"\t==========================================================================================================================================="<<endl<<endl;
	cout.flush();
	
	/* If we arrive here, all is ok! */
    return EXIT_SUCCESS;    
}
