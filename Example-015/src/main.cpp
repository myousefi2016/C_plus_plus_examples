/**************************************************************************************************
 * Examples in the C++ language (the 'Example-015' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), June 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-015' Test.
 **************************************************************************************************/

#include <limits>
#include <iostream>
#include <cstdlib>
using namespace std;

/// The main function for the <i>'Example-015'</i> Test.
int main(void)
{
	/* This is the 'Example-015' Test, where the properties of the 'unsigned character (uchar)' C++ built-in type are analyzed. */
    cout<<endl<<"\tThis is the 'Example-015' Test in the C++ language."<<endl<<endl;
    cout.flush();
    
    /* TASK #1 - retrieving the properties of the 'unsigned character (uchar)' C++ built-in type. */
	cout<<"\tThe 'unsigned character (uchar)' C++ built-in type:"<<endl<<endl;
	cout<<"\t-) requires "<<sizeof(unsigned char)<<" byte for being represented;"<<endl;
	if(std::numeric_limits<unsigned char>::is_specialized) cout<<"\t-) is specialized;"<<endl;
	else cout<<"\t-) is not specialized;"<<endl;
	if(std::numeric_limits<unsigned char>::is_signed) cout<<"\t-) represents signed values;"<<endl;
	else cout<<"\t-) does not represent signed values;"<<endl;
	if(std::numeric_limits<unsigned char>::is_integer) cout<<"\t-) represents integer values;"<<endl;
	else cout<<"\t-) does not represent integer values;"<<endl;
	if(std::numeric_limits<unsigned char>::is_exact) cout<<"\t-) represents exact values;"<<endl;
	else cout<<"\t-) does not represent exact values;"<<endl;
	if(std::numeric_limits<unsigned char>::has_infinity) cout<<"\t-) represents the 'infinity' value as "<<std::numeric_limits<unsigned char>::infinity()<<";"<<endl;
	else cout<<"\t-) does not represent the 'infinity' value;"<<endl;
	if(std::numeric_limits<unsigned char>::has_quiet_NaN) cout<<"\t-) represents the 'Quiet Not-A-Number' value as "<<std::numeric_limits<unsigned char>::quiet_NaN()<<";"<<endl;
	else cout<<"\t-) does not represent the 'Quiet Not-A-Number' value;"<<endl;
	if(std::numeric_limits<unsigned char>::has_signaling_NaN) cout<<"\t-) represents the 'Signaling Not-A-Number' value as "<<std::numeric_limits<unsigned char>::signaling_NaN()<<";"<<endl;
	else cout<<"\t-) does not represent the 'Signaling Not-A-Number' value;"<<endl;
	if(std::numeric_limits<unsigned char>::has_denorm) cout<<"\t-) represents the subnorm values;"<<endl;
	else cout<<"\t-) does not represent the subnorm values;"<<endl;
	if(std::numeric_limits<unsigned char>::has_denorm_loss) cout<<"\t-) detects loss of precision when creating a subnormal number as denormalization loss rather than as inexact result;"<<endl;
	else cout<<"\t-) does not detect loss of precision when creating a subnormal number as denormalization loss rather than as inexact result;"<<endl;
	switch (std::numeric_limits<unsigned char>::round_style)
	{	
		case round_toward_zero:
		
			cout<<"\t-) exploits the 'round toward zero' policy for rounding not completely 'unsigned char' values;"<<endl;
			break;
			
		case round_to_nearest:
		
			cout<<"\t-) exploits the 'round to nearest' policy for rounding not completely 'unsigned char' values;"<<endl;
			break;
			
		case round_toward_infinity:
		
			cout<<"\t-) exploits the 'round to the positive infinity' policy for rounding not completely 'unsigned char' values;"<<endl;
			break;
			
		case round_toward_neg_infinity:
		
			cout<<"\t-) exploits the 'round to the negative infinity' policy for rounding not completely 'unsigned char' values;"<<endl;
			break;

		default:
		
			cout<<"\t-) does not exploit a policy for rounding not completely 'unsigned char' values;"<<endl;
			cout.flush();
			break;
	}
	
	/* TASK #2 - finalizing our analysis! */
	if(std::numeric_limits<unsigned char>::is_iec559) cout<<"\t-) fulfills the requirements of IEC 559 (IEEE 754) standard;"<<endl;
	else cout<<"\t-) does not fulfill the requirements of IEC 559 (IEEE 754) standard;"<<endl;
	if(std::numeric_limits<unsigned char>::is_bounded) cout<<"\t-) represents a finit set of values;"<<endl;
	else cout<<"\t-) does not represent a finite set of values;"<<endl;
	if(std::numeric_limits<unsigned char>::is_modulo) cout<<"\t-) handles overflows with modulo arithmetic;"<<endl;
	else cout<<"\t-) does not handle overflows with modulo arithmetic;"<<endl;
	cout<<"\t-) requires "<<std::numeric_limits<unsigned char>::digits<<" digits;"<<endl;
	cout<<"\t-) requires "<<std::numeric_limits<unsigned char>::digits10<<" base-10 digits;"<<endl;
	cout<<"\t-) has "<<std::numeric_limits<unsigned char>::radix<<" as the base of the number system for being represented (radix);"<<endl;
	cout<<"\t-) has "<<std::numeric_limits<unsigned char>::min_exponent<<" as one more than the smallest negative power of the radix, such that is a valid normalized floating-point value;"<<endl;
	cout<<"\t-) has "<<std::numeric_limits<unsigned char>::min_exponent10<<" as the smallest negative power of 10, such that is a valid normalized floating-point value;"<<endl;
	cout<<"\t-) has "<<std::numeric_limits<unsigned char>::max_exponent<<" as one more than the largest integer power of the radix, such that is a valid finite floating-point value;"<<endl;
	cout<<"\t-) has "<<std::numeric_limits<unsigned char>::max_exponent10<<" as the largest integer power of 10, such that is a valid normalized floating-point value;"<<endl;
	if(std::numeric_limits<unsigned char>::traps) cout<<"\t-) has at least one value that, if used as an argument to an arithmetic operation, will generate a trap;"<<endl;
	else cout<<"\t-) has no value, that, if used as an argument to an arithmetic operation, will generate a trap;"<<endl;
	if(std::numeric_limits<unsigned char>::tinyness_before) cout<<"\t-) tests the results of floating-point expressions for underflow before rounding;"<<endl;
	else cout<<"\t-) does not test the results of floating-point expressions for underflow before rounding;"<<endl;
	cout<<"\t-) has "<<(unsigned int)std::numeric_limits<unsigned char>::min()<<" as the minimum finite value, representable as an 'unsigned char' value;"<<endl;
	cout<<"\t-) has "<<(unsigned int)std::numeric_limits<unsigned char>::min()<<" as the lowest finite value, representable as an 'unsigned char' value;"<<endl;
	cout<<"\t-) has "<<(unsigned int)std::numeric_limits<unsigned char>::max()<<" as the maximum finite value, representable as an 'unsigned char' value;"<<endl;
	cout<<"\t-) has "<<(unsigned int)std::numeric_limits<unsigned char>::epsilon()<<" as the machine epsilon, that is, the difference between 1.0 and the next value, representable as an 'unsigned char' value;"<<endl;
	cout<<"\t-) has "<<(unsigned int)std::numeric_limits<unsigned char>::round_error()<<" as the maximum rounding error;"<<endl;
	cout<<"\t-) has "<<(unsigned int)std::numeric_limits<unsigned char>::denorm_min()<<" as the minimum positive subnormal value."<<endl<<endl;
	cout << "\tPress the RETURN key to finish ... ";
	cout.flush();
	cin.get();
	#ifndef _MSC_VER
		cout << endl;
		cout.flush();
	#endif
    return EXIT_SUCCESS;
}

