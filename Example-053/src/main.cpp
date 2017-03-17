/**************************************************************************************************
 * Examples in the C++ language (the 'Example-053' unit test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), March 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-053' unit test.
 **************************************************************************************************/

#include <iostream>
#include <cstdlib>
using namespace std;

/// This function computes the charge amount when a patient is not admitted to the hospital.
inline double calculateCharge(double mc,double lc) { return (mc+lc); }

/// This function computes the charge amount when a patient is not admitted to the hospital.
inline double calculateCharge(int nod,double dc,double mc,double lc) { return (nod*dc+calculateCharge(mc,lc)); }

/// The main function for the <i>Example-053</i> unit test.
int main(void)
{
	char ans='a';
	bool admitted=false;
	int numOfDays=0;
	double dailyCharge=0.0,medCharges=0.0, labCharges=0.0;
	
	/* This is the 'Example-053' unit test, where the 'switch' and other constructs are tested. */
    cout<<endl<<"\tThis is the 'Example-053' unit test in the C++ language."<<endl<<endl;
    cout.flush();
    
    /* TASK #1 - starting the interface. */
    cout<<"\tImpatient care (admitted to the hospital) - (Y)es, (N)o: ";
	cin>>ans;
	if( (!cin) || ( (ans!='Y') && (ans!='y') && (ans!='n') && (ans!='N') ) )
	{
		cout<<endl<<"\tPLEASE, YOU MUST INSERT A VALID ANSWER!"<<endl<<endl<<"\tTHIS PROGRAM IS CLOSING ..."<<endl<<endl;
		cout.flush();
		return EXIT_FAILURE;
	}
    
    /* We consider the answer 'ans'. */
    if( (ans=='Y') || (ans=='y') ) 
    {
    	/* The patient is admitted to the hospital. First, insert the number of the days, spent in the hospital. */
    	admitted=true;
    	cout<<endl<<"\tThe patient is admitted to the hospital. Please, insert the number (positive and not null) of the days, spent in the hospital: ";
    	cout.flush();
    	cin>>numOfDays;
    	if( (!cin) || (numOfDays<=0) )
    	{
    		cout<<endl<<"\tPLEASE, YOU MUST INSERT A VALID NUMBER OF THE DAYS!"<<endl<<endl<<"\tTHIS PROGRAM IS CLOSING ..."<<endl<<endl;
			cout.flush();
			return EXIT_FAILURE;
    	}
    	
    	/* Now, insert the daily rate */
    	cout<<"\tPlease, insert the daily rate (positive and not null) for each day, spent in the hospital (US dollars/day): ";
    	cin>>dailyCharge;
    	if( (!cin) || (dailyCharge<0) )
    	{
    		cout<<endl<<"\tPLEASE, YOU MUST INSERT A VALID DAILY RATE!"<<endl<<endl<<"\tTHIS PROGRAM IS CLOSING ..."<<endl<<endl;
			cout.flush();
			return EXIT_FAILURE;
    	}
    	
    	/* Now, we compute a partial result! */
    	cout<<endl<<"\tThe partial charge for being admitted to the hospital is "<<(numOfDays)*dailyCharge<<" US dollars."<<endl;
    	cout.flush();
    }
    else { admitted=false; }
    
     /* TASK #2 - insert the charge for the medical cares! */
    cout<<endl<<"\tPlease, insert the (positive) charge for the medical cares (in US dollars): ";
    cin>>medCharges;
    if( (!cin) || (medCharges<0) )
    {
    	cout<<endl<<"\tPLEASE, YOU MUST INSERT A VALID CHARGE FOR THE MEDICAL CARES!"<<endl<<endl<<"\tTHIS PROGRAM IS CLOSING ..."<<endl<<endl;
		cout.flush();
		return EXIT_FAILURE;
    }
    
    /* TASK #3 - insert the laboratory charge! */
    cout<<"\tPlease, insert the (positive) laboratory charge (in US dollars): ";
    cin>>labCharges;
    if( (!cin) || (labCharges<0) )
    {
    	cout<<endl<<"\tPLEASE, YOU MUST INSERT A VALID CHARGE FOR THE LABORATORY!"<<endl<<endl<<"\tTHIS PROGRAM IS CLOSING ..."<<endl<<endl;
		cout.flush();
		return EXIT_FAILURE;
    }
    
    /* TASK #4 - If we arrive here, all is ok! */
    cout<<endl<<"\tThe partial charge for the medical and the laboratory cares is "<<(medCharges+labCharges)<<" US dollars."<<endl<<endl;
    if(admitted) cout<<"\tThe total charge for receiving the medical attentions is "<<calculateCharge(numOfDays,dailyCharge,medCharges,labCharges)<<" US dollars."<<endl<<endl;
    else cout<<"\tThe total charge for receiving the medical attentions is "<<calculateCharge(medCharges,labCharges)<<" US dollars."<<endl<<endl;
    cout.flush();
    return EXIT_SUCCESS;
}
