/**************************************************************************************************
 * Examples in the C++ language (the 'Example-037' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), June 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-037' Test.
 **************************************************************************************************/

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

/// The main function for the <i>'Example-037'</i> Test.
int main(void)
{
	/* This is the 'Example-037' Test, where several C++11 constructs are validated. */
	cout<<endl<<"\tThis is the 'Example-037' Test in the C++ language."<<endl<<endl;
    cout.flush();
   	
   	/* TASK #1 - allocating a matrix and navigating its rows. */
   	cout<<"\tCreating the 4 x 3 matrix 'A', containing 'int' values ... ";
   	int n = 0;
	float a[][4]={
		{ 4.0,4.0,0.0},
		{ 5,5,0 },
		{ 6,6,0 },
		{ 7,7,0 }
	};
	
	/* All is ok. */
	cout<<"ok"<<endl<<endl;
	cout.flush();
	
   	/* Here, we consider a very simple C++11 construct for navigating the 'float' values in the matrix 'a'. */
   	for(auto row : a)
   	{
   		cout<<"\tAnalysis of the row #"<<n<<" in the matrix 'A':";
   		cout.flush();
   		for(unsigned int j=0;j<3;j++) cout<<" "<<*(row+j);
   		cout<<"."<<endl;
   		n=n+1;
   	}
   	
   	/* TASK #2 - cycling over the matrix 'a' (in the forward direction). */
	cout<<endl<<"\tCycling the rows for the matrix 'A' in the forward direction:"<<endl<<endl;
   	cout.flush();
   	for(int s=4;s>=0;s--)
	{
		for(int i=0;i<4;i++)
		{
			cout<<"\t\t";
			int jj=(i+s)%4;
			for(int j=0;j<3;j++) cout<<" "<<a[jj][j];
			if(i<3) cout<<";"<<endl;
			else cout<<"."<<endl;
		}
		
		/* Now, we add a new line separator! */
		cout<<endl;
	}
   	
   	/* TASK #3 - cycling over the matrix 'a' (in the reverse direction). */
	cout<<"\tCycling the rows for the matrix 'A' in the reverse direction:"<<endl<<endl;
   	cout.flush();
   	for(int s=0;s<=4;s++)
	{
		for(int i=0;i<4;i++)
		{
			cout<<"\t\t";
			int jj=(i+s)%4;
			for(int j=0;j<3;j++) cout<<" "<<a[jj][j];
			if(i<3) cout<<";"<<endl;
			else cout<<"."<<endl;
		}
		
		/* Now, we add a new line separator! */
		cout<<endl;
	}

	/* All is ok! */
	cout << "\tPress the RETURN key to finish ... ";
	cout.flush();
	cin.get();
	#ifndef _MSC_VER
		cout << endl;
		cout.flush();
	#endif
	return EXIT_SUCCESS;
}

