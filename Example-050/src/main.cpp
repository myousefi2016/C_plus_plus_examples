/**********************************************************************************************
 * Examples in the C++ language (the test 'Example-050')
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), January 2017
 *
 * main.cpp - the source file, implementing the main function for the test 'Example-050'.
 **********************************************************************************************/

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#define PI 3.14159265358979324
using namespace std;

/// This function computes the area and the perimeter of a rectangle.
inline void computeAreaPerimeter(const unsigned int &w,const unsigned int &h,unsigned int &a,unsigned int &p)
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

/// The main function for the <i>Example-050</i> unit test.
int main(void)
{
	unsigned int w,h,a,p;
	double r,ca,cp;
	string s0,s1,stot;

	/* This is the example 'Example-050', where the computation of several basic expressions and constructs is tested! */
    cout<<endl<<"\tThis is the example 'Example-050' in the C++ language"<<endl<<endl;
    cout.flush();
	cout<<"\tPlease, insert the positive and not null integer values, corresponding to the width (w) and the height (h) of a rectangle, respectively: ";
	cin>>w>>h;
	if( (!cin) || (w==0) || (h==0) )
	{
		/* An error occurred! */
		cout<<endl<<"\tPLEASE, YOY MUST INSERT THE POSITIVE AND NOT NULL INTEGER VALUES, CORRESPONDING TO THE WIDTH (w) AND THE HEIGHT (h) OF A RECTANGLE"<<endl;
		cout<<"\tTHIS PROGRAM IS CLOSING ..."<<endl<<endl;
		cout.flush();
		return EXIT_FAILURE;
	}
	else
	{
		/* Here, the reading operations were ok! */
		cout<<"\tThe width 'w' for the rectangle of interest is: "<<w<<endl;
		cout<<"\tThe height 'h' for the rectangle of interest is: "<<h<<endl;
		computeAreaPerimeter(w,h,a,p);
		cout<<"\tThe area for the rectangle of interest is: "<<a<<endl;
		cout<<"\tThe perimeter for the rectangle of interest is: "<<p<<endl<<endl;
		cout.flush();
	}
	
	/* Now, we analyze a circle. */
	cout<<"\tPlease, insert the positive and not null floating point value, corresponding to the radius (r) of a circle: ";
	cin>>r;
	if( (!cin) || (r<=0.0) )
	{
		/* An error occurred! */
		cout<<endl<<"\tPLEASE, YOU MUST INSERT THE POSITIVE AND NOT NULL FLOATING POINT VALUE, CORRESPONDING TO THE RADIUS (R) OF A CIRCLE"<<endl;
		cout<<"\tTHIS PROGRAM IS CLOSING ..."<<endl<<endl;
		cout.flush();
		return EXIT_FAILURE;
	}
	else
	{
		/* Here, the reading operation was ok! */
		cout<<"\tThe radius 'r' for the circle of interest is: "<<r<<endl;
		computeAreaCircumference(r,ca,cp);
		cout<<"\tThe area for the circle of interest is: "<<ca<<endl;
		cout<<"\tThe circumference for the circle of interest is: "<<cp<<endl<<endl;
		cout.flush();
	}
	
	/* Now, we concatenate two strings. We read the first string 's0'. */
	cout<<"\tPlease, insert the first string 's0' to be concatenated: ";
	cin>>s0;
	if(!cin)
	{
		/* An error occurred! */
		cout<<endl<<"\tPLEASE, YOU MUST INSERT THE FIRST STRING 's0' TO BE CONCATENATED"<<endl;
		cout<<"\tTHIS PROGRAM IS CLOSING ..."<<endl<<endl;
		cout.flush();
		return EXIT_FAILURE;
	}
	
	/* Now, we read the second string 's1' */
	cout<<"\tPlease, insert the first string 's1' to be concatenated: ";
	cin>>s1;
	if(!cin)
	{
		/* An error occurred! */
		cout<<endl<<"\tPLEASE, YOU MUST INSERT THE FIRST STRING 's1' TO BE CONCATENATED"<<endl;
		cout<<"\tTHIS PROGRAM IS CLOSING ..."<<endl<<endl;
		cout.flush();
		return EXIT_FAILURE;
	}
	
	/* Now, we can concatenate everything! */
	cout<<"\tThe first string 's0' to be concatenated is: '"<<s0<<"'"<<endl;
	cout<<"\tThe second string 's1' to be concatenated is: '"<<s1<<"'"<<endl;
	concatenateStrings(s0,s1,stot);
	cout<<"\tThe final string 'stot' is: '"<<stot<<"'"<<endl<<endl;
	cout.flush();

	/* If we arrive here, all is ok! */    
    return EXIT_SUCCESS;
}
