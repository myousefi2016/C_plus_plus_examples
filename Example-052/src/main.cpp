/**********************************************************************************************
 * Examples in the C++ language (the test 'Example-052')
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), January 2017
 *
 * main.cpp - the source file, implementing the main function for the test 'Example-052'.
 **********************************************************************************************/

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

/// The main function for the <i>Example-052</i> unit test.
int main(void)
{
	int menuChoice=0,months=0;
    double totalCharge=0;
	const double ADULT_FARE = 40.0;
	const double CHILD_FARE = 30.0;
	const double FAMILY_FARE = 100.0;
	
	/* This is the example 'Example-052', where the 'switch' and other constructs are tested. */
    cout<<endl<<"\tThis is the example 'Example-052' in the C++ language"<<endl;
    cout.flush();
    cout<<fixed<<setprecision(2)<<showpoint;
	do
	{
		/* Several member fares are available for being purchased. */
		cout<<endl<<"\tThe following memership fares are available for being purchased:"<<endl<<endl;
		cout<<"\t1. Adult Membership Fare (40 euro/month)"<<endl;
		cout<<"\t2. Child Membership Fare (30 euro/month)"<<endl;
		cout<<"\t3. Family Membership Fare (100 euro/month)"<<endl;
		cout<<"\t4. Exit"<<endl<<endl;
		cout<<"\tPlease, select what membership fare you prefer: ";
		cin>>menuChoice;
		if( (!cin) || (menuChoice < 1) || (menuChoice > 4) )
		{
			cout<<"\tPLEASE, INSERT A VALID MEMBERSHIP FARE. THIS PROGRAM IS CLOSING ..."<<endl<<endl;
			cout.flush();
			return EXIT_FAILURE;
		}
		
		/* If we arrive here, we read a valid menu choice! */
		if(menuChoice==4) break;
		else if(menuChoice==1) { cout<<endl<<"\tThe Adult Membership Fare (40 euro/month) is selected."<<endl<<endl<<"\tPlease, insert the number of months (from 1 to 24 months) you prefer it will be valid: "; }
		else if(menuChoice==2) { cout<<endl<<"\tThe Child Membership Fare (30 euro/month) is selected."<<endl<<endl<<"\tPlease, insert the number of months (from 1 to 24 months) you prefer it will be valid: "; }
		else { cout<<endl<<"\tThe Family Membership Fare (100 euro/month) is selected."<<endl<<endl<<"\tPlease, insert the number of months (from 1 to 24 months) you prefer it will be valid: "; }
		cout.flush();
		
		/* If we arrive here, we must read the number of the months for the membership fare of interest! */
		cin>>months;
		if( (!cin) || (months<1) || (months>24) )
		{
			cout<<"\tPLEASE, INSERT A VALID NUMBER OF THE MONTHS. THIS PROGRAM IS CLOSING ..."<<endl<<endl;
			cout.flush();
			return EXIT_FAILURE;
		}
		
		/* Now, we compute the total charge! */
		switch(menuChoice)
		{
			case 1:
			
			/* The Adult Membership Fare is selected! */		
			cout<<endl<<"\tORDER OVERVIEW"<<endl<<endl<<"\tThe Adult Membership Fare (40 euro/month) is selected, and it must be valid for "<<months<<" months."<<endl;
			totalCharge=ADULT_FARE*months;
			break;
			
			case 2:
			
			/* The Child Membership Fare is selected! */		
			cout<<endl<<"\tORDER OVERVIEW"<<endl<<endl<<"\tThe Child Membership Fare (30 euro/month) is selected, and it must be valid for "<<months<<" months."<<endl;
			totalCharge=CHILD_FARE*months;
			break;
			
			case 3:
			
			/* The Family Membership Fare is selected! */		
			cout<<endl<<"\tORDER OVERVIEW"<<endl<<endl<<"\tThe Family Membership Fare (100 euro/month) is selected, and it must be valid for "<<months<<" months."<<endl;
			totalCharge=FAMILY_FARE*months;
			break;
		}
		
		/* If we arrive here, all is ok! */
		cout<<"\tThus, the total fare is charged: "<<totalCharge<<" euro"<<endl<<endl<<"\t======================================================================================================"<<endl;
		cout.flush();
	}
	while(menuChoice != 4);
	cout<<endl<<"\tThis program is closing correctly"<<endl<<endl;
	return EXIT_FAILURE;    
}
