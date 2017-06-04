/**************************************************************************************************
 * Examples in the C++ language (the 'Example-039' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), June 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-039' Test.
 **************************************************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>
using namespace std;


/// The number to be guessed, and the corresponding jackpot.
int number=0;
int jackpot=1000;

/// This function checks whether the number of interest is guessed.
bool verifyUserBet(int u)
{
	/* First, we check if the current guess coincides with the number to be guessed. */
	if(u==number) return true;
	else
	{
		/* The current guess does not coincide with the number to be guessed. */
		if(u>number) { cout<<"\tYour bet "<<u<<" is not correct. [ HINT ]: it is too high."<<endl; }
		else { cout<<"\tYour bet "<<u<<" is not correct. [ HINT ]: it is too low."<<endl; }
		jackpot=jackpot-50;
		cout<<"\tThe new jackpot is "<<jackpot<<" euro."<<endl<<endl;
		cout.flush();
		return false;
	}
}

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

/// The main function for the <i>'Example-039'</i> Test.
int main(void)
{
	int unum;

	/* This is the 'Example-039' Test, where the standard C/C++ generator of (pseudo-) random values is tested through a very simple game. */
	cout<<endl<<"\tThis is the 'Example-039' Test in the C++ language."<<endl<<endl;
    cout.flush();

	/* TASK #1 - we start our game! */    
    srand(time(0));
    number=rand()%100+1;
    cout<<"\tThe initial jackpot is "<<jackpot<<" euro. Selected the integer number to be guessed, belonging to [0,100]."<<endl<<endl;
    do
    {
		/* Please, insert you choice! */
		cout<<"\tTry to guess this integer number in the range [0,100]. Please, make your bets: ";
		cin>>unum;
		cout.flush();
		if( (!cin) || (unum<0) || (unum>100) )
		{
			cin.clear();
			cin.clear();
			cout << endl<< "\tPLEASE, YOU MUST INSERT YOUR BET AS AN INTEGER VALUE IN THE RANGE [0,100]!" << endl << endl;
			pause();
			return EXIT_FAILURE;
		}
		else { cout<<endl; }
	}
	while( (verifyUserBet(unum)!=true) && (jackpot>0) );
	if(jackpot>0) { cout<<"\tYou guess the selected number "<<number<<", and win (virtually) "<<jackpot<<" euro!"<<endl<<endl; }
	else { cout<<"\tThe jackpot is null, and you do not guess the selected number "<<number<<"!"<<endl<<endl; }
	pause();
	return EXIT_SUCCESS;
}

