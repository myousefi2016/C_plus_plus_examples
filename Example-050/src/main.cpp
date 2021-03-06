/**************************************************************************************************
 * Examples in the C++ language (the 'Example-050' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), June 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-050' Test.
 **************************************************************************************************/

#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <limits>
#define PI 3.14159265358979324
using namespace std;

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

/// This function computes the area and the perimeter of a rectangle.
inline void computeAreaPerimeter(const int &w,const int &h,int &a,int &p)
{
	a=(w*h);
	p=2*(w+h);
}

/// This function computes the area and the circumference of a circle.
inline void computeAreaCircumference(const double &r,double &a,double &c)
{
	a=PI*pow(r,2);
	c=2.0*PI*r;
}

/// This function concatenates two strings into a new string.
inline void concatenateStrings(const string &s0,const string &s1,string &stot)
{
	/* First, we clear 'stot' */
	stot.clear();
	stot+=s0;
	stot+=" ";
	stot+=s1;
}

/// The main function for the <i>'Example-050'</i> Test.
int main(void)
{
	int w,h,a,p;
	double r,ca,cp;
	string s0,s1,stot;

	/* This is the 'Example-050' Test, where the computation of several basic expressions and constructs is tested! */
	cout<<endl<<"\tThis is the 'Example-050' Test in the C++ language."<<endl<<endl;
    cout.flush();
    
    /* TASK #1 - we compute the area and the perimeter for a rectangle of width 'w' and height 'h' (read from the standard input stream). */
	cout<<"\tPlease, insert the positive and not null integer values (separated by a space), corresponding to the width (w) and the height (h) of a rectangle, respectively: ";
	cin>>w>>h;
	if( (!cin) || (w<=0) || (h<=0) )
	{
		cin.clear();
		cin.clear();
		cout<<endl<<"\tPLEASE, YOY MUST INSERT THE POSITIVE AND NOT NULL INTEGER VALUES, CORRESPONDING TO THE WIDTH (w) AND THE HEIGHT (h) OF A RECTANGLE!"<<endl<<endl<<"\tTHIS PROGRAM IS CLOSING ..."<<endl<<endl;
		pause();
		return EXIT_FAILURE;
	}
	else
	{
		/* Here, the reading operations were ok! */
		cout<<"\tThe width 'w' for the rectangle of interest is "<<w<<"."<<endl;
		cout<<"\tThe height 'h' for the rectangle of interest is "<<h<<"."<<endl;
		computeAreaPerimeter(w,h,a,p);
		cout<<"\tThe area for the rectangle of interest is "<<a<<"."<<endl;
		cout<<"\tThe perimeter for the rectangle of interest is "<<p<<"."<<endl<<endl;
		cout.flush();
	}

	/* TASK #2 - we compute the circumference and the area for a circle of radius 'r' (read from the standard input stream). */
	cout<<"\tPlease, insert the positive and not null floating point value, corresponding to the radius (r) of a circle: ";
	cin>>r;
	if( (!cin) || (r<=0.0) )
	{
		/* An error occurred! */
		cin.clear();
		cin.clear();
		cout<<endl<<"\tPLEASE, YOU MUST INSERT THE POSITIVE AND NOT NULL FLOATING POINT VALUE, CORRESPONDING TO THE RADIUS (R) OF A CIRCLE!"<<endl<<endl<<"\tTHIS PROGRAM IS CLOSING ..."<<endl<<endl;
		pause();
		return EXIT_FAILURE;
	}
	else
	{
		/* Here, the reading operation was ok! */
		cout<<"\tThe radius 'r' for the circle of interest is "<<r<<"."<<endl;
		computeAreaCircumference(r,ca,cp);
		cout<<"\tThe area for the circle of interest is "<<ca<<"."<<endl;
		cout<<"\tThe circumference for the circle of interest is "<<cp<<"."<<endl<<endl;
		cout.flush();
	}

	/* TASK #3 - we concatenate two strings, read from the standard input stream. We read the first string 's0'. */
	cout<<"\tPlease, insert the first string 's0' to be concatenated: ";
	cin>>s0;
	if(!cin)
	{
		/* An error occurred! */
		cin.clear();
		cin.clear();		
		cout<<endl<<"\tPLEASE, YOU MUST INSERT THE FIRST STRING 's0' TO BE CONCATENATED!"<<endl<<endl<<"\tTHIS PROGRAM IS CLOSING ..."<<endl<<endl;
		pause();
		return EXIT_FAILURE;
	}

	/* Now, we read the second string 's1' */
	cout<<"\tPlease, insert the first string 's1' to be concatenated: ";
	cin>>s1;
	if(!cin)
	{
		/* An error occurred! */
		cin.clear();
		cin.clear();
		cout<<endl<<"\tPLEASE, YOU MUST INSERT THE FIRST STRING 's1' TO BE CONCATENATED!"<<endl<<endl<<"\tTHIS PROGRAM IS CLOSING ..."<<endl<<endl;
		pause();
		return EXIT_FAILURE;
	}
	
	/* Now, we can concatenate everything! */
	cout<<"\tThe first string 's0' to be concatenated is '"<<s0<<"'"<<"."<<endl;
	cout<<"\tThe second string 's1' to be concatenated is '"<<s1<<"'"<<"."<<endl;
	concatenateStrings(s0,s1,stot);
	cout<<"\tThe final string 's=s0+s1' is '"<<stot<<"'"<<"."<<endl<<endl;
	pause();
	return EXIT_SUCCESS;
}

