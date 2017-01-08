/**********************************************************************************************
 * Examples in the C++ language (the test 'Example-041')
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), January 2017
 *
 * main.cpp - the source file, implementing the main function for the test 'Example-041'.
 **********************************************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

/// The main function for the <i>Example-041</i> unit test.
int main(void)
{
	char c='N';

	/* This is the example 'Example-041', where the generation of several pseudo-random values is tested! */
    cout<<endl<<"\tThis is the example 'Example-041' in the C++ language"<<endl<<endl;
    cout.flush();
    srand(time(0));
    do
    {
 		int c1,c2;
 		
 		/* We launch the craps! */
 		c1=rand()%6+1;
 		c2=rand()%6+1;
 		cout<<setw(4)<<"\tResult of the crasp #0: "<<c1<<endl;
 		cout<<setw(4)<<"\tResult of the crasp #1: "<<c2<<endl;
 		if(c1==1)
 		{
 			/* Here, 'c1' is 1 */
 			if(c2==1) { cout<<"\tThe result is a 'Snake Eye'"<<endl<<endl; }
	 		else if(c2==2) { cout<<"\tThe result is an 'Ace Deuce'"<<endl<<endl; }
	 		else if(c2==3) { cout<<"\tThe result is an 'Easy Four'"<<endl<<endl; }
	 		else if(c2==4) { cout<<"\tThe result is a 'Five (Fever Five)'"<<endl<<endl; }
	 		else if(c2==5) { cout<<"\tThe result is an 'Easy Six'"<<endl<<endl; }
	 		else { cout<<"\tThe result is a 'Natural (Seven Out)'"<<endl<<endl; }
	 		cout.flush();
 		}
 		else if(c1==2)
 		{
 			/* Here, 'c1' is 2 */
 			if(c2==1) { cout<<"\tThe result is an 'Ace Deuce'"<<endl<<endl; }
	 		else if(c2==2) { cout<<"\tThe result is a 'Hard Four'"<<endl<<endl; }
	 		else if(c2==3) { cout<<"\tThe result is a 'Five (Fever Five)'"<<endl<<endl; }
	 		else if(c2==4) { cout<<"\tThe result is an 'Easy Six'"<<endl<<endl; }
	 		else if(c2==5) { cout<<"\tThe result is a 'Natural (Seven Out)'"<<endl<<endl; }
	 		else { cout<<"\tThe result is an 'Easy Eight'"<<endl<<endl; }
	 		cout.flush();
 		}
 		else if(c1==3)
 		{
 			/* Here, 'c1' is 3 */
 			if(c2==1) { cout<<"\tThe result is an 'Easy Four'"<<endl<<endl; }
	 		else if(c2==2) { cout<<"\tThe result is a 'Five (Fever Five)'"<<endl<<endl; }
	 		else if(c2==3) { cout<<"\tThe result is a 'Hard Six'"<<endl<<endl; }
	 		else if(c2==4) { cout<<"\tThe result is a 'Natural (Seven Out)'"<<endl<<endl; }
	 		else if(c2==5) { cout<<"\tThe result is an 'Easy Eight'"<<endl<<endl; }
	 		else { cout<<"\tThe result is a 'Nine (Nina)'"<<endl<<endl; }
	 		cout.flush();
 		}
 		else if(c1==4)
 		{
 			/* Here, 'c1' is 4 */
 			if(c2==1) { cout<<"\tThe result is a 'Five (Fever Five)'"<<endl<<endl; }
	 		else if(c2==2) { cout<<"\tThe result is an 'Easy Six'"<<endl<<endl; }
	 		else if(c2==3) { cout<<"\tThe result is a 'Natural (Seven Out)'"<<endl<<endl; }
	 		else if(c2==4) { cout<<"\tThe result is a 'Hard Eight'"<<endl<<endl; }
	 		else if(c2==5) { cout<<"\tThe result is a 'Nine (Nina)'"<<endl<<endl; }
	 		else { cout<<"\tThe result is an 'Easy Ten'"<<endl<<endl; }
	 		cout.flush();
 		}
 		else if(c1==5)
 		{
 			/* Here, 'c1' is 5 */
 			if(c2==1) { cout<<"\tThe result is an 'Easy Six'"<<endl<<endl; }
	 		else if(c2==2) { cout<<"\tThe result is a 'Natural (Seven Out)'"<<endl<<endl; }
	 		else if(c2==3) { cout<<"\tThe result is an 'Easy Eight'"<<endl<<endl; }
	 		else if(c2==4) { cout<<"\tThe result is a 'Nine (Nina)'"<<endl<<endl; }
	 		else if(c2==5) { cout<<"\tThe result is a 'Hard Ten'"<<endl<<endl; }
	 		else { cout<<"\tThe result is a 'Yo (Yo-leven)'"<<endl<<endl; }
	 		cout.flush();
 		}
 		else
 		{
 			/* Here, 'c1' is 6 */
 			if(c2==1) { cout<<"\tThe result is a 'Natural (Seven Out)'"<<endl<<endl; }
	 		else if(c2==2) { cout<<"\tThe result is an 'Easy Eigtht'"<<endl<<endl; }
	 		else if(c2==3) { cout<<"\tThe result is a 'Nine (Nina)'"<<endl<<endl; }
	 		else if(c2==4) { cout<<"\tThe result is an 'Easy Ten'"<<endl<<endl; }
	 		else if(c2==5) { cout<<"\tThe result is a 'Yo (Yo-leven)'"<<endl<<endl; }
	 		else { cout<<"\tThe result is a 'Boxcards (Midnight)'"<<endl<<endl; }
	 		cout.flush();
 		}
 		
 		/* Do we launch again? */   	
    	cout<<"\tDo we play again the craps? (Y)es, (N)o: ";
    	cin>>c;
    	if( (!cin) || ( (c!='N') && (c!='n') && (c!='Y') && (c!='y') ) )
    	{
    		cout<<"\tPlease, you must insert a valid choice"<<endl;
    		cout<<"\tThis program is closing"<<endl<<endl;
    		cout.flush();
    		return EXIT_FAILURE;
    	}
    }
    while( (c=='y') || (c=='Y') );
    
    /* If we arrive here, all is ok */
    cout<<endl;
    cout.flush();
    return EXIT_SUCCESS;
}
