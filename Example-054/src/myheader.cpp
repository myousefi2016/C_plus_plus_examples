/**********************************************************************************************
 * Examples in the C++ language (the test 'Example-054')
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), January 2017
 *
 * myheader.cpp - the source file, implementing custom data structures for the test 'Example-054'.
 **********************************************************************************************/
 
#include "myheader.h"
#include <cmath>

void Change::findCoins(double change)
{
	double f,c,cc;
	unsigned int coins;

	/* Now, we organize the change 'change' */
	f = modf(change,&c);
	this->dollars=c;
	cc=f*100;
	coins=round(cc);
	this->quarters=coins/25;
	this->dimes=coins%25 / 10;
	this->nickels=coins%25%10/5;
	this->pennies=coins%25%10%5;
}

double Change::getChange() { return (this->dollars+0.25*this->quarters+0.1*this->dimes+0.05*this->nickels+0.01*this->pennies); }
