/**************************************************************************************************
 * Examples in the C++ language (the 'Example-052' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), June 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-052' Test.
 **************************************************************************************************/

#include <iostream>
#include <iomanip>
#include <limits>
#include <cstdlib>
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

/// The main function for the <i>'Example-052'</i> Test.
int main(void)
{
	int menuChoice=0,months=0;
    double totalCharge=0;
	const double ADULT_FARE = 40.0;
	const double CHILD_FARE = 30.0;
	const double FAMILY_FARE = 100.0;
	
	/* This is the 'Example-052' Test, where the 'switch' and other constructs are tested. */
    cout<<endl<<"\tThis is the 'Example-052' Test in the C++ language."<<endl;
    cout.flush();
    cout<<fixed<<setprecision(2)<<showpoint;
	do
	{
		/* Several member fares are available for being purchased. */
		cout<<endl<<"\tThe following membership fares are available for being purchased:"<<endl<<endl;
		cout<<"\t1) Adult Membership Fare (40 euro/month);"<<endl;
		cout<<"\t2) Child Membership Fare (30 euro/month);"<<endl;
		cout<<"\t3) Family Membership Fare (100 euro/month);"<<endl;
		cout<<"\t4) Exit from this program."<<endl<<endl;
		cout<<"\tPlease, select what membership fare you prefer: ";
		cin>>menuChoice;
		if( (!cin) || (menuChoice < 1) || (menuChoice > 4) )
		{
			cin.clear();
			cin.clear();
			cout<<endl<<"\tPLEASE, YOU MUST INSERT A VALID MEMBERSHIP FARE!"<<endl<<endl<<"\tTHIS PROGRAM IS CLOSING ..."<<endl<<endl;
			pause();
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
			cin.clear();
			cin.clear();
			cout<<endl<<"\tPLEASE, YOU MUST INSERT A VALID NUMBER OF THE MONTHS!"<<endl<<endl<<"\tTHIS PROGRAM IS CLOSING ..."<<endl<<endl;
			pause();
			return EXIT_FAILURE;
		}

		/* Now, we compute the total charge! */
		switch(menuChoice)
		{
			case 1:
			
			/* The Adult Membership Fare is selected! */		
			cout<<endl<<"\tORDER OVERVIEW"<<endl<<endl<<"\tThe Adult Membership Fare (40 euro/month) is selected, and it must be valid for "<<months<<" month(s)."<<endl;
			totalCharge=ADULT_FARE*months;
			break;
			
			case 2:
			
			/* The Child Membership Fare is selected! */		
			cout<<endl<<"\tORDER OVERVIEW"<<endl<<endl<<"\tThe Child Membership Fare (30 euro/month) is selected, and it must be valid for "<<months<<" month(s)."<<endl;
			totalCharge=CHILD_FARE*months;
			break;
			
			case 3:
			
			/* The Family Membership Fare is selected! */		
			cout<<endl<<"\tORDER OVERVIEW"<<endl<<endl<<"\tThe Family Membership Fare (100 euro/month) is selected, and it must be valid for "<<months<<" month(s)."<<endl;
			totalCharge=FAMILY_FARE*months;
			break;
		}
		
		/* If we arrive here, all is ok! */
		cout<<"\tThus, the total fare is charged: "<<totalCharge<<" euro."<<endl<<endl<<"\t======================================================================================================"<<endl;
		cout.flush();
	}
	while(menuChoice != 4);
	cout<<endl<<"\tThis program is closing correctly!"<<endl<<endl;
	pause();
	return EXIT_SUCCESS;
}

