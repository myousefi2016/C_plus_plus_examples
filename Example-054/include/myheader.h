/******************************************************************************************************************************
 * Examples in the C++ language (the 'Example-054' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), April 2017
 *
 * myheader.h - the header file, where the auxiliary functions for the 'Example-054' Test are defined.
 ******************************************************************************************************************************/
 
#include <iostream>
using namespace std;

/* Optional inclusion! */
#ifndef MY_HEADER_H

	#define MY_HEADER_H
	
	/// This struct contains the organized change coins after a payment (in the US dollars).
	struct Change
	{
		/// The number of the US dollars.
		unsigned int dollars=0;

		/// The number of the US dollars quarters.
		unsigned int quarters=0;
		
		/// The number of the US dollars dimes.
		unsigned int dimes=0;
		
		/// The number of the US dollars nickels.
		unsigned int nickels=0;
		
		/// The number of the US dollars pennies.
		unsigned int pennies=0;
		
		/// This operator exports the change on a generic I/O stream (not necessarily a file).
		inline friend ostream& operator<<(ostream &os,Change &c)
		{
			/* We export the internal state of the 'Change' struct */
			os<<"\t# US dollar(s): "<<c.dollars<<";"<<endl;
			os<<"\t# US dollars quarter(s): "<<c.quarters<<";"<<endl;
			os<<"\t# US dollars dime(s): "<<c.dimes<<";"<<endl;
			os<<"\t# US dollars nickel(s): "<<c.nickels<<";"<<endl;
			os<<"\t# US dollars pennie(s): "<<c.pennies<<"."<<endl<<endl;
			os.flush();
			return os;
		}
		
		/// This member function computes and organizes a given change.
		void findCoins(double change);
		
		/// This member function returns the change, described by this struct (expressed in the US dollars pennies).
		double getChange();
	};
	
#endif
