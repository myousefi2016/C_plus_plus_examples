/**************************************************************************************************
 * Examples in the C++ language (the 'Example-080' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), June 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-080' Test.
 **************************************************************************************************/

#include <cstdlib>
#include <iostream>
#include <vector>
#include "movie.h"
using namespace std;

/// The main function for the <i>'Example-080'</i> Test.
int main(void)
{
	vector<Movie> movies;
	int k=0;

	/* This is the 'Example-080' Test, where the constructs for defining a generic class are validated. */
    cout<<endl<<"\tThis is the 'Example-080' Test in the C++ language."<<endl<<endl;
    cout.flush();
    
    /* TASK #1 - creating several instances of the 'Movie' class, defined in the 'movie.h' header file. */
    movies.push_back(Movie());
    movies.back().setTitle("The Matrix");
    movies.back().setYear(1999);
    movies.back().setRating("Sufficient/Trash");
    movies.push_back( Movie("Armaggeddon",1998,"Very good"));
    movies.push_back( Movie("Stargate",1994,"Very good"));
    movies.push_back( Movie("Miracle",2004,"Good"));
    movies.push_back( Movie("Independence Day",1996,"Very good/Masterpiece"));
    movies.push_back( Movie("Rocky",1976,"Masterpiece"));
    movies.push_back( Movie("First Blood",1982,"Masterpiece"));
    cout<<"\tThis archive contains the following "<<movies.size()<<" movies: "<<endl<<endl;
    for(vector<Movie>::iterator it=movies.begin();it!=movies.end();it++,k++) 
    {
		cout << "\tMOVIE #" << k << endl << endl;
    	cout<<(*it);
    	cout<<"\t==============================================================================="<<endl<<endl;
    	cout.flush();
    }

	/* If we arrive here, everything is ok! */    
	movies.clear();
	cout << "\tPress the RETURN key to finish ... ";
	cout.flush();
	cin.get();
	#ifndef _MSC_VER
		cout << endl;
		cout.flush();
	#endif
	return EXIT_SUCCESS;
}

