/**********************************************************************************************
 * Examples in the C++ language (the test 'Example-054')
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), January 2017
 *
 * myheader.h - the header file, containing custom data structures for the test 'Example-054'.
 **********************************************************************************************/
 
#include <iostream>
using namespace std;

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
			os<<"\t#Dollars: "<<c.dollars<<endl;
			os<<"\t#Quarters: "<<c.quarters<<endl;
			os<<"\t#Dimes: "<<c.dimes<<endl;
			os<<"\t#Nickels: "<<c.nickels<<endl;
			os<<"\t#Pennies: "<<c.pennies<<endl<<endl;
			os.flush();
			return os;
		}
		
		/// This member function computes and organizes a given change.
		void findCoins(double change);
		
		/// This member function returns the change, described by this struct (expressed in pennies).
		double getChange();
	};
	
#endif
