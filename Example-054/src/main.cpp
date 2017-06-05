/**************************************************************************************************
 * Examples in the C++ language (the 'Example-054' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), June 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-054' Test.
 **************************************************************************************************/

#include <iostream>
#include <cstdlib>
#include <limits>
#include "myheader.h"
using namespace std;

/// This function simulates a pause while this test runs.
void pause()
{
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	cin.clear();
	cout << "\tPress the RETURN key to finish ... ";
	cout.flush();
	cin.get();
	#ifndef _MSC_VER
		cout << endl;
		cout.flush();
	#endif
}

/// The main function for the <i>'Example-054'</i> Test.
int main(void)
{
	Change c;
	double price=0.0,payment=0.0,change=0.0;

	/* This is the 'Example-054' Test, where the 'switch' and other constructs are tested. */
    cout<<endl<<"\tThis is the 'Example-054' Test in the C++ language."<<endl<<endl;
    cout.flush();
    
    /* TASK #1 - insert the net price for the item of interest. */
    cout<<"\tPlease, insert the (positive) price for the item of interest (in US dollars): ";
    cin>>price;
    if( (!cin) || (price<=0.0) )
    {
		cin.clear();
		cin.clear();
		cout<<endl<<"\tPLEASE, YOU MUST INSERT A VALID PRICE FOR THE ITEM OF INTEREST!"<<endl<<endl<<"\tTHIS PROGRAM IS CLOSING ... "<<endl<<endl;
		pause();
		return EXIT_FAILURE;
	}

	/* TASK #2 - insert the customer payment. */
    cout<<"\tPlease, insert the (positive) customer payment for the item of interest (in US dollars): ";
    cin>>payment;
    if( (!cin) || (payment<=0.0) || (payment<price) )
    {
		cin.clear();
		cin.clear();
    	cout<<endl<<"\tPLEASE, YOU MUST INSERT A VALID CUSTOMER PAYMENT FOR THE ITEM OF INTEREST!"<<endl<<endl<<"\tTHIS PROGRAM IS CLOSING ... "<<endl<<endl;
		pause();
		return EXIT_FAILURE;
	}

	/* TASK #3 - compute the due 'change'. */
    change = payment - price;
    if(change==0) { cout<<"\tNo change is due to the customer."<<endl<<endl; }
    else
    {
    	cout<<endl<<"\tThe amount of the change, due to the customer, is "<<change<<" US dollar(s)."<<endl<<endl;
    	cout.flush();
    	c.findCoins(change);
    	cout<<"\tThe change is organized as follows:"<<endl<<endl;
    	cout<<c;
    	cout<<"\tThe total amount of the due change is "<<c.getChange()<<" US dollar(s)."<<endl<<endl;
    	cout.flush();
    }
    
    /* If we arrive here, all is ok! */
	pause();
	return EXIT_SUCCESS;
}

