/**********************************************************************************************
 * Examples in the C++ language (the test 'Example-054')
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), January 2017
 *
 * main.cpp - the source file, implementing the main function for the test 'Example-054'.
 **********************************************************************************************/

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include "myheader.h"
using namespace std;

/// The main function for the <i>Example-054</i> unit test.
int main(void)
{
	Change c;
	double price=0.0,payment=0.0,change=0.0;

	/* This is the example 'Example-054', where the 'switch' and other constructs are tested. */
    cout<<endl<<"\tThis is the example 'Example-054' in the C++ language"<<endl<<endl;
    cout.flush();
    cout<<"\tPlease, insert the (positive) price for the item of interest (in US dollars): ";
    cin>>price;
    if( (!price) || (price<=0.0) )
    {
    	cout<<endl<<"\tPLEASE, INSERT A VALID PRICE FOR THE ITEM OF INTEREST. THIS PROGRAM IS CLOSING ... "<<endl<<endl;
    	cout.flush();
    	return EXIT_FAILURE;
    }
    
    /* Now, insert the customer payment */
    cout<<"\tPlease, insert the (positive) customer payment for the item of interest (in US dollars): ";
    cin>>payment;
    if( (!price) || (payment<=0.0) || (payment<price) )
    {
    	cout<<endl<<"\tPLEASE, INSERT A VALID CUSTOMER PAYMENT FOR THE ITEM OF INTEREST. THIS PROGRAM IS CLOSING ... "<<endl<<endl;
    	cout.flush();
    	return EXIT_FAILURE;
    }
    
    /* Now, compute the 'change' */
    change = payment - price;
    if(change==0) { cout<<"\tNo change is due to the customer"<<endl<<endl; }
    else
    {
    	cout<<endl<<"\tThe amount of the change, due to the customer, is: "<<change<<" US dollars"<<endl<<endl;
    	cout.flush();
    	c.findCoins(change);
    	cout<<"\tThe change is organized as follows:"<<endl<<endl;
    	cout<<c;
    	cout<<"\tThe total amount of the due change: "<<c.getChange()<<" US dollars "<<endl<<endl;
    	cout.flush();
    }
    
    /* If we arrive here, all is ok! */
    cout.flush();
    return EXIT_SUCCESS;
}
