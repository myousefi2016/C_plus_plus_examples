/*****************************************************************************************************************
 * Examples in the C++ language (the 'Example-082' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), June 2017
 *
 * rational.h - the header file, defining the 'Rational' class for the 'Example-082' Test.
 ******************************************************************************************************************/

#ifndef RATIONAL_H

	#define RATIONAL_H
	
	#include <iostream>
	using namespace std;
	
	/// This class describes a generic rational.
	class Rational
	{
		public:
		
		/// This member function creates a new instance of this class.
		Rational(int numerator = 0, int denominator=1);
		
		/// This member function creates a new instance of this class.
		Rational(const Rational &r);
		
		/// This virtual member function deallocates an instance of this class.
		virtual ~Rational ();
		
		/// This member function returns the numerator of the current rational.
		int numerator() const;
		
		/// This member function returns the denominator of the current rational.
		int denominator() const;
		
		/// This operator creates a copy of another rational.
		Rational & operator = ( const Rational & r);
		
		/// This operator computes the sum between the current rational and another rational.
		Rational operator + ( const Rational & r) const;
		
		/// This operator computes the difference between the current rational and another rational.
		Rational operator - ( const Rational & r) const;
		
		/// This operator computes the product between the current rational and another rational.
		Rational operator * ( const Rational & r) const;
		
		/// This operator computes the ratio between the current rational and another rational.
		Rational operator / ( const Rational & r) const;
		
		private:
		
		/// The numerator for the current rational.
		int num;
		
		/// The denom for the current rational.
		int denom;
	};
	
	/// This operator exports a rational on a generic output stream.
	ostream & operator << (ostream & o, const Rational & r);

#endif
