/*******************************************************************************************************************************
 * Examples in the C++ language (the 'Example-082' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), June 2017
 *
 * rational.cpp - the source file, implementing the 'Rational' class for the 'Example-082' Test.
 *******************************************************************************************************************************/

#include "rational.h"

Rational::Rational(int numerator, int denominator) : num(numerator), denom(denominator) {}

Rational::Rational(const Rational &r) : num(r.num), denom(r.denom) {}

Rational::~Rational ()
{
	this->num=0;
	this->denom=1;
}
		
int Rational::numerator() const { return this->num; }
		
int Rational::denominator() const { return this->denom; }

Rational & Rational::operator = ( const Rational & r)
{
	this->num=r.num;
	this->denom=r.denom;
	return *this;
}

Rational Rational::operator + ( const Rational & r) const { return Rational((this->num * r.denom) + (this->denom * r.num), this->denom * r.denom); }

Rational Rational::operator - ( const Rational & r) const { return Rational((this->num * r.denom) - (this->denom * r.num), this->denom * r.denom); }

Rational Rational::operator * ( const Rational & r) const { return Rational(this->num * r.num, this->denom * r.denom); }
		
Rational Rational::operator / ( const Rational & r) const { return Rational(this->num * r.denom, this->denom * r.num); }

ostream & operator << (ostream & o, const Rational & r) { return o << r.numerator() << " / " << r.denominator(); }
