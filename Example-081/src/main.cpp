/**********************************************************************************************
 * Examples in the C++ language (the test 'Example-081')
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), January 2017
 *
 * main.cpp - the source file, implementing the main function for the test 'Example-081'.
 **********************************************************************************************/

#include <cstdlib>
#include <iostream>
#include <vector>
#include "house.h"
using namespace std;

/// The main function for the <i>Example-081</i> unit test.
int main(void)
{
	vector<House> houses;
	int k=0;

	/* This is the example 'Example-081', where the classes and other constructs are tested. */
    cout<<endl<<"\tThis is the example 'Example-081' in the C++ language"<<endl<<endl;
    cout.flush();
    houses.push_back(House());
    houses.push_back(House());
    houses.back().getColor()="white";
    houses.back().getNumberOfBathRooms()=35;
  	houses.back().getNumberOfRooms()=132;
  	houses.back().getSquareMeters()=6100;
  	houses.push_back(House("yellow",1,4,78));
    cout<<"\tThis archive contains "<<houses.size()<<" houses: "<<endl<<endl;
    for(vector<House>::iterator it=houses.begin();it!=houses.end();it++,k++) 
    {
    	cout<<"\tHOUSE #"<<k<<endl;
    	cout<<(*it);
    	cout<<"\t==============================================================================="<<endl<<endl;
    	cout.flush();
    }
    
    /* If we arrive here, everything is ok! */
    houses.clear();    
    return EXIT_SUCCESS;
}
