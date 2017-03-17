/**************************************************************************************************
 * Examples in the C++ language (the 'Example-039' unit test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), March 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-039' unit test.
 **************************************************************************************************/
 
#include <iostream>
#include <cstdlib>
#include <ctime>
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

/// The main function for the <i>Example-039</i> unit test.
int main(void)
{
	int unum;

	/* This is the 'Example-039' unit test, where the standard C/C++ generator of (pseudo-) random values is tested through a very simple game. */
	cout<<endl<<"\tThis is the 'Example-039' unit test in the C++ language."<<endl<<endl;
    cout.flush();

	/* TASK #1 - we start our game! */    
    srand(time(0));
    number=rand()%100+1;
    cout<<"\tThe initial jackpot is "<<jackpot<<" euro. Selected the integer number to be guessed, belonging to [0,100]."<<endl<<endl;
    do
    {
		/* Please, insert you choice! */
		cout<<"\tTry to guess this integer number. Please, make your bets: ";
		cin>>unum;
		cout<<endl;
		cout.flush();
		if(!cin)
		{
			cout<<"\tPLEASE, YOU MUST INSERT YOUR BET AS AN INTEGER VALUE!"<<endl<<endl<<"\tTHIS PROGRAM IS CLOSING ... "<<endl<<endl;
			cout.flush();
			return EXIT_FAILURE;
		}
    }
    while( (verifyUserBet(unum)!=true) && (jackpot>0) );
	if(jackpot>0) { cout<<"\tYou guess the selected number "<<number<<", and win (virtually) "<<jackpot<<" euro!"<<endl<<endl; }
	else { cout<<"\tThe jackpot is null, and you do not guess the selected number "<<number<<"!"<<endl<<endl; }
	cout.flush();
    return EXIT_SUCCESS;
}
