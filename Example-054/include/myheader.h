/******************************************************************************************************************************
 * Examples in the C++ language (the 'Example-054' unit test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), March 2017
 *
 * myheader.h - the header file, where the auxiliary functions for the 'Example-054' unit test are defined.
 ******************************************************************************************************************************/
 
#include <iostream>
using namespace std;

/* Optional inclusion! */
#ifndef MY_HEADER_H

	#define MY_HEADER_H
	
	/// This struct contains the organized change coins after a payment (in dollars).
	struct Change
	{
		/// The number of the dollars.
		unsigned int dollars=0;

		/// The number of the dollar quarters.
		unsigned int quarters=0;
		
		/// The number of the dollar dimes.
		unsigned int dimes=0;
		
		/// The number of the dollar nickels.
		unsigned int nickels=0;
		
		/// The number of the dollar pennies.
		unsigned int pennies=0;
		
		/// This operator exports the change on a generic I/O stream (not necessarily a file).
		inline friend ostream& operator<<(ostream &os,Change &c)
		{
			/* We export the internal state of the 'Change' struct */
			os<<"\t#Dollar(s): "<<c.dollars<<";"<<endl;
			os<<"\t#Quarter(s): "<<c.quarters<<";"<<endl;
			os<<"\t#Dime(s): "<<c.dimes<<";"<<endl;
			os<<"\t#Nickel(s): "<<c.nickels<<";"<<endl;
			os<<"\t#Pennie(s): "<<c.pennies<<"."<<endl<<endl;
			os.flush();
			return os;
		}
		
		/// This member function computes and organizes a given change.
		void findCoins(double change);
		
		/// This member function returns the change, described by this struct (expressed in pennies).
		double getChange();
	};
	
#endif
