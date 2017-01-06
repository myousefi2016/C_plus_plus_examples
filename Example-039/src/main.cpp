/**********************************************************************************************
 * Examples in the C++ language (the test 'Example-039')
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), January 2017
 *
 * main.cpp - the source file, implementing the main function for the test 'Example-039'.
 **********************************************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/// The number to be guessed, and the corresponding jackpot.
int number=0;
int jackpot=1000;

/// This function checks whether the number is guessed.
bool verifyUserBet(int u)
{
	if(u==number) return true;
	else
	{
		if(u>number) { cout<<"\tYour bet "<<u<<" is not correct. [ HINT ]: it is too high"<<endl; }
		else { cout<<"\tYour bet "<<u<<" is not correct. [ HINT ]: it is too low"<<endl; }
		jackpot=jackpot-50;
		cout<<"\tNew jackpot: "<<jackpot<<endl<<endl;
		cout.flush();
		return false;
	}
}

/// The main function for the <i>Example-039</i> unit test.
int main(void)
{
	int unum;

	/* This is the example 'Example-039', where the use of the standard C/C++ generator is tested! */
    cout<<endl<<"\tThis is the example 'Example-039' in the C++ language"<<endl<<endl;
    cout.flush();
    srand(time(0));
    number=rand()%100+1;
    cout<<"\tThe initial jackpot is "<<jackpot<<" euro"<<endl<<endl;
    cout<<"\tSelected the integer number to be guessed, belonging to [0,100]"<<endl<<endl;
    do
    {
		/* Please, insert you choice! */
		cout<<"\tTry to guess this integer number. Please, make your bets: ";
		cin>>unum;
		cout<<endl;
		cout.flush();
		if(!cin)
		{
			cout<<"\tPLEASE, YOU MUST INSERT AN INTEGER VALUE. THIS PROGRAM IS CLOSING"<<endl<<endl;
			cout.flush();
			return EXIT_FAILURE;
		}
    }
    while(verifyUserBet(unum)!=true);
	cout<<"\tThe selected number is "<<number<<". You win (virtually) ";
	if(jackpot>0) cout<<jackpot<<" euro!"<<endl<<endl;
	else cout<<"nothing"<<endl<<endl;
	cout.flush();
	return EXIT_SUCCESS;
}
