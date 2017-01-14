/**********************************************************************************************
 * Examples in the C++ language (the test 'Example-053')
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), January 2017
 *
 * main.cpp - the source file, implementing the main function for the test 'Example-053'.
 **********************************************************************************************/

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

	/* This is the example 'Example-053', where the 'switch' and other constructs are tested. */
    cout<<endl<<"\tThis is the example 'Example-053' in the C++ language"<<endl<<endl;
    cout.flush();
    cout<<"\tImpatient care (admitted to the hospital) - (Y)es, (N)o: ";
	cin>>ans;
	if( (!cin) || ( (ans!='Y') && (ans!='y') && (ans!='n') && (ans!='N') ) )
	{
		cout<<"\tPLEASE, INSERT A VALID ANSWER. THIS PROGRAM IS CLOSING ..."<<endl<<endl;
		cout.flush();
		return EXIT_FAILURE;
	}
    
    /* If we arrive here, we must consider the answer 'ans'. */
    if( (ans=='Y') || (ans=='y') ) 
    {
    	/* The patient is admitted to the hospital. First, insert the number of the days, spent in the hospital. */
    	admitted=true;
    	cout<<endl<<"\tThe patient is admitted to the hospital. Please, insert the number (positive and not null) of the days, spent in the hospital: ";
    	cout.flush();
    	cin>>numOfDays;
    	if( (!cin) || (numOfDays<=0) )
    	{
    		cout<<"\tPLEASE, INSERT A VALID NUMBER OF THE DAYS. THIS PROGRAM IS CLOSING ..."<<endl<<endl;
			cout.flush();
			return EXIT_FAILURE;
    	}
    	
    	/* Now, insert the daily rate */
    	cout<<"\tPlease, insert the daily rate (positive and not null) for each day, spent in the hospital (euro/day): ";
    	cin>>dailyCharge;
    	if( (!cin) || (dailyCharge<0) )
    	{
    		cout<<"\tPLEASE, INSERT A VALID DAILY RATE. THIS PROGRAM IS CLOSING ..."<<endl<<endl;
			cout.flush();
			return EXIT_FAILURE;
    	}
    	
    	/* Now, we compute a partial result! */
    	cout<<endl<<"\tThe partial charge for being admitted to the hospital: "<<(numOfDays)*dailyCharge<<" euro"<<endl;
    	cout.flush();
    }
    else { admitted=false; }
    
     /* Now, insert the charge for the medical cares! */
    cout<<endl<<"\tPlease, insert the (positive) charge for the medical cares (in euro): ";
    cin>>medCharges;
    if( (!cin) || (medCharges<0) )
    {
    	cout<<"\tPLEASE, INSERT A VALID CHARGE FOR THE MEDICAL CARES. THIS PROGRAM IS CLOSING ..."<<endl<<endl;
		cout.flush();
		return EXIT_FAILURE;
    }
    
    /* Now, insert the laboratory charge! */
    cout<<"\tPlease, insert the (positive) laboratory charge (in euro): ";
    cin>>labCharges;
    if( (!cin) || (labCharges<0) )
    {
    	cout<<"\tPLEASE, INSERT A VALID CHARGE FOR THE LABORATORY. THIS PROGRAM IS CLOSING ..."<<endl<<endl;
		cout.flush();
		return EXIT_FAILURE;
    }
    
    /* If we arrive here, all is ok! */
    cout<<"\tThe partial charge for the medical and the laboratory cares is "<<(medCharges+labCharges)<<" euro"<<endl<<endl;
    if(admitted) cout<<"\tThe total charge for receiving the medical attentions is "<<calculateCharge(numOfDays,dailyCharge,medCharges,labCharges)<<" euro"<<endl<<endl;
    else cout<<"\tThe total charge for receiving the medical attentions is "<<calculateCharge(medCharges,labCharges)<<" euro"<<endl<<endl;
}