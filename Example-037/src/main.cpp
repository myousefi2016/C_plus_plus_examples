/*************************************************************************************
 * Examples in the C++ language (the test 'Example-037')
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), January 2017
 *
 * main.cpp - the 'main' file for the test 'Example-037'.
 **************************************************************************************/

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

/// The main function for the <i>Example-037</i> unit test for testing several C++ constructs.
int main(void)
{
	int n;
	float a[][4]={
		{ 4.0,4.0,0.0},
		{ 5,5,0 },
		{ 6,6,0 },
		{ 7,7,0 }
	};
	
	/* Here, we consider a very simple C++11 construct! */
	cout<<endl<<"\tThis is the example 'Example-037' in the C++ language"<<endl<<endl;
   	cout.flush();
   	for(auto row : a)
   	{
   		cout<<"\tAnalysis of the row #"<<n<<" in the matrix 'A':";
   		cout.flush();
   		for(unsigned int j=0;j<3;j++) cout<<" "<<*(row+j);
   		cout<<endl;
   		n=n+1;
   	}
   	
   	/* Now, we cycle over the matrix 'a' (in the forward direction). */
	cout<<endl<<"\tCycling the rows for the matrix 'A' in the forward direction"<<endl<<endl;
   	cout.flush();
   	for(int s=4;s>=0;s--)
	{
		for(int i=0;i<4;i++)
		{
			cout<<"\t";
			int jj=(i+s)%4;
			for(int j=0;j<3;j++) cout<<a[jj][j]<<" ";
			cout<<endl;
		}
		
		/* Now, we add a new line separator! */
		cout<<endl;
	}
   	
   	/* Now, we cycle over the matrix 'a' (in the reverse direction). */
	cout<<"\tCycling the rows for the matrix 'A' in the reverse direction"<<endl<<endl;
   	cout.flush();
   	for(int s=0;s<=4;s++)
	{
		for(int i=0;i<4;i++)
		{
			cout<<"\t";
			int jj=(i+s)%4;
			for(int j=0;j<3;j++) cout<<a[jj][j]<<" ";
			cout<<endl;
		}
		
		/* Now, we add a new line separator! */
		cout<<endl;
	}

	/* All is ok! */
   	cout.flush();
   	return EXIT_SUCCESS;
}