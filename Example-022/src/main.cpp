/**********************************************************************************************
 * Examples in the C++ language (the test 'Example-022')
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), December 2016
 *
 * main.cpp - the source file, implementing the main function for the test 'Example-022'.
 **********************************************************************************************/

#include <limits>
#include <iostream>
#include <cstdlib>
using namespace std;

/// The main function for the <i>Example-022</i> unit test.
int main(void)
{
	/* This is the example 'Example-022', where the properties of the 'long int' type are analyzed. */
    cout<<endl<<"\tThis is the example 'Example-022' in the C++ language"<<endl<<endl;
    cout.flush();
	cout<<"\tThe C++ built-in 'long int' type:"<<endl<<endl;
	cout<<"\t-) requires "<<sizeof(long int)<<" bytes for being represented"<<endl;
	if(std::numeric_limits<long int>::is_specialized) cout<<"\t-) is specialized"<<endl;
	else cout<<"\t-) is not specialized"<<endl;
	if(std::numeric_limits<long int>::is_signed) cout<<"\t-) represents signed values"<<endl;
	else cout<<"\t-) does not represent signed values"<<endl;
	if(std::numeric_limits<long int>::is_integer) cout<<"\t-) represents integer values"<<endl;
	else cout<<"\t-) does not represent integer values"<<endl;
	if(std::numeric_limits<long int>::is_exact) cout<<"\t-) represents exact values"<<endl;
	else cout<<"\t-) does not represent exact values"<<endl;
	if(std::numeric_limits<long int>::has_infinity) cout<<"\t-) represents the 'infinity' value as "<<std::numeric_limits<long int>::infinity()<<endl;
	else cout<<"\t-) does not represent the 'infinity' value"<<endl;
	if(std::numeric_limits<long int>::has_quiet_NaN) cout<<"\t-) represents the 'Quiet Not-A-Number' value as "<<std::numeric_limits<long int>::quiet_NaN()<<endl;
	else cout<<"\t-) does not represent the 'Quiet Not-A-Number' value"<<endl;
	if(std::numeric_limits<long int>::has_signaling_NaN) cout<<"\t-) represents the 'Signaling Not-A-Number' value as "<<std::numeric_limits<long int>::signaling_NaN()<<endl;
	else cout<<"\t-) does not represent the 'Signaling Not-A-Number' value"<<endl;
	if(std::numeric_limits<long int>::has_denorm) cout<<"\t-) represents the subnorm values"<<endl;
	else cout<<"\t-) does not represent the subnorm values"<<endl;
	if(std::numeric_limits<long int>::has_denorm_loss) cout<<"\t-) detects loss of precision when creating a subnormal number as denormalization loss rather than as inexact result"<<endl;
	else cout<<"\t-) does not detect loss of precision when creating a subnormal number as denormalization loss rather than as inexact result"<<endl;
	switch (std::numeric_limits<long int>::round_style)
	{	
		case round_toward_zero:
		
			cout<<"\t-) exploits the 'round toward zero' policy for rounding not completely 'long int' values"<<endl;
			break;
			
		case round_to_nearest:
		
			cout<<"\t-) exploits the 'round to nearest' policy for rounding not completely 'long int' values"<<endl;
			break;
			
		case round_toward_infinity:
		
			cout<<"\t-) exploits the 'round to the positive infinity' policy for rounding not completely 'long int' values"<<endl;
			break;
			
		case round_toward_neg_infinity:
		
			cout<<"\t-) exploits the 'round to the negative infinity' policy for rounding not completely 'long int' values"<<endl;
			break;

		default:
		
			cout<<"\t-) does not exploit a policy for rounding not completely 'long int' values"<<endl;
			cout.flush();
			break;
	}
	
	/* Now, we finalize our analysis! */
	if(std::numeric_limits<long int>::is_iec559) cout<<"\t-) fulfills the requirements of IEC 559 (IEEE 754) standard"<<endl;
	else cout<<"\t-) does not fulfill the requirements of IEC 559 (IEEE 754) standard"<<endl;
	if(std::numeric_limits<long int>::is_bounded) cout<<"\t-) represents a finit set of values"<<endl;
	else cout<<"\t-) does not represent a finite set of values"<<endl;
	if(std::numeric_limits<long int>::is_modulo) cout<<"\t-) handles overflows with modulo arithmetic"<<endl;
	else cout<<"\t-) does not handle overflows with modulo arithmetic"<<endl;
	cout<<"\t-) requires "<<std::numeric_limits<long int>::digits<<" digits"<<endl;
	cout<<"\t-) requires "<<std::numeric_limits<long int>::digits10<<" base-10 digits"<<endl;
	cout<<"\t-) has "<<std::numeric_limits<long int>::radix<<" as the base of the number system for being represented (radix)"<<endl;
	cout<<"\t-) has "<<std::numeric_limits<long int>::min_exponent<<" as one more than the smallest negative power of the radix, such that is a valid normalized floating-point value"<<endl;
	cout<<"\t-) has "<<std::numeric_limits<long int>::min_exponent10<<" as the smallest negative power of 10, such that is a valid normalized floating-point value"<<endl;
	cout<<"\t-) has "<<std::numeric_limits<long int>::max_exponent<<" as one more than the largest integer power of the radix, such that is a valid finite floating-point value"<<endl;
	cout<<"\t-) has "<<std::numeric_limits<long int>::max_exponent10<<" as the largest integer power of 10, such that is a valid normalized floating-point value"<<endl;
	if(std::numeric_limits<long int>::traps) cout<<"\t-) has at least one value that, if used as an argument to an arithmetic operation, will generate a trap"<<endl;
	else cout<<"\t-) has no value, that, if used as an argument to an arithmetic operation, will generate a trap"<<endl;
	if(std::numeric_limits<long int>::tinyness_before) cout<<"\t-) tests the results of floating-point expressions for underflow before rounding"<<endl;
	else cout<<"\t-) does not test the results of floating-point expressions for underflow before rounding"<<endl;
	cout<<"\t-) has "<<(long int)std::numeric_limits<long int>::min()<<" as the minimum finite value, representable as a 'long int' value"<<endl;
	cout<<"\t-) has "<<(long int)std::numeric_limits<long int>::min()<<" as the lowest finite value, representable as a 'long int' value"<<endl;
	cout<<"\t-) has "<<(long int)std::numeric_limits<long int>::max()<<" as the maximum finite value, representable as a 'long int' value"<<endl;
	cout<<"\t-) has "<<(long int)std::numeric_limits<long int>::epsilon()<<" as the machine epsilon, that is, the difference between 1.0 and the next value, representable as a 'long int' value"<<endl;
	cout<<"\t-) has "<<(long int)std::numeric_limits<long int>::round_error()<<" as the maximum rounding error"<<endl;
	cout<<"\t-) has "<<(long int)std::numeric_limits<long int>::denorm_min()<<" as the minimum positive subnormal value"<<endl<<endl;
	return EXIT_SUCCESS;
}
