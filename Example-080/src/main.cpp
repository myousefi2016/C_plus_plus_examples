/**********************************************************************************************
 * Examples in the C++ language (the test 'Example-080')
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), January 2017
 *
 * main.cpp - the source file, implementing the main function for the test 'Example-080'.
 **********************************************************************************************/

#include <cstdlib>
#include <iostream>
#include <vector>
#include "movie.h"
using namespace std;

/// The main function for the <i>Example-080</i> unit test.
int main(void)
{
	vector<Movie> movies;
	int k=0;

	/* This is the example 'Example-080', where the classes and other constructs are tested. */
    cout<<endl<<"\tThis is the example 'Example-080' in the C++ language"<<endl<<endl;
    cout.flush();
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
    cout<<"\tThis archive contains "<<movies.size()<<" movies: "<<endl<<endl;
    for(vector<Movie>::iterator it=movies.begin();it!=movies.end();it++,k++) 
    {
    	cout<<"\tMOVIE #"<<k<<endl;
    	cout<<(*it);
    	cout<<"\t==============================================================================="<<endl<<endl;
    	cout.flush();
    }

	/* If we arrive here, everything is ok! */    
	movies.clear();
    return EXIT_SUCCESS;
}
