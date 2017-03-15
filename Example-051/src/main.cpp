/**************************************************************************************************
 * Examples in the C++ language (the 'Example-051' unit test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), March 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-051' unit test.
 **************************************************************************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

/// The main function for the <i>Example-051</i> unit test.
int main(void)
{
	double price,tot;
	
	/* This is the 'Example-051' unit test, where the 'if-construct' is tested. */
	cout<<endl<<"\tThis is the 'Example-051' unit test in the C++ language."<<endl<<endl;
    cout.flush();
    
    /* TASK #1 - retrieving the price for the item of interest. */
    cout<<"\tShipping costs for the following ranges of the items prices:"<<endl<<endl;
    cout<<"\t-) up to 25 euro: 15 euro;"<<endl;
    cout<<"\t-) up to 50 euro: 10 euro;"<<endl;
    cout<<"\t-) up to 75 euro: 5 euro;"<<endl;
    cout<<"\t-) more than 75 euro: 0 euro (free shipping)."<<endl<<endl;
    cout.flush();
    cout<<"\tPlease, insert the price for the item of interest (not negative): ";
    cin>>price;
    if( (!cin) || (price<0) )
    {
    	cout<<endl<<"\tPLEASE, YOU MUST INSERT A VALID PRICE FOR THE ITEM OF INTEREST."<<endl<<endl<<"\tTHIS PROGRAM IS CLOSING ... "<<endl<<endl;
    	cout.flush();
    	return EXIT_FAILURE;
    }
    
    /* TASK #2 - If we arrive here, we can decide! */
    cout<<endl<<"\tThe price for the item of interest is "<<price<<" euro."<<endl;
    cout.flush();
    tot=price;
    if(price>75) { cout<<"\tThis item is eligible for the free shipping."<<endl; }
    else if(price>50) 
    { 
    	cout<<"\tThe price of this item is charged by 5 euro for shipping."<<endl; 
    	tot=tot+5;
    }
    else if(price>25) 
    { 
    	cout<<"\tThe price of this item is charged by 10 euro for shipping."<<endl;
    	tot=tot+10;
    }
    else 
    { 
    	cout<<"\tThe price of this item is charged by 15 euro for shipping."<<endl;
    	tot=tot+15;
    }
    
    /* If we arrive here, the price is completed! */
 	cout<<"\tThe total price is "<<fixed<<setprecision(2)<<tot<<" euro."<<endl<<endl;
 	cout.flush();
	return EXIT_SUCCESS;   
}
