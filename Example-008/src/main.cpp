/**********************************************************************************************
 * Examples in the C++ language (the 'Example-008' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), April 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-008' Test.
 **********************************************************************************************/

#include "myfunctions.h"
#include <cstdlib>
#include <iostream>
using namespace std;

/// The main function for the <i>Example-008</i> Test.
int main(void)
{
	double d,r,h,vc;

	/* This is the 'Example-008' Test, which exploits several functions, defined in the 'myfunctions.h' header file. */
	cout<<endl<<"\tThis is the 'Example-008' Test in the C++ language."<<endl<<endl;
	cout.flush();

	/* TASK #1 - compute the volume for a cube. */    
    cout<<"\tPlease, insert the length 'd' (positive and not null) for the side of a cube: ";
    cin>>d;
    if( (!cin) || (d<=0) )
    {
    	cout<<endl<<"\tPLEASE, YOU MUST ENTER THE VALID LENGTH 'd' (POSITIVE AND NOT NULL) FOR THE SIDE OF A CUBE!"<<endl<<endl<<"\tTHIS PROGRAM IS CLOSING ... "<<endl<<endl;
    	cout.flush();
    	return EXIT_FAILURE;
    }
    else
    {
    	cout<<"\tYou inserted the valid length 'd'="<<d<<" as the side of a cube."<<endl;
    	vc = volume(d);
    	cout.flush();
    	cout<<"\tThe volume for the cube of interest is "<<vc<<"."<<endl<<endl;
    	cout.flush();
    }
    
    /* TASK #2 - compute the volume for a cylinder. */
    cout<<"\tPlease, insert the length 'r' (positive and not null) for the radius of the circular basis in a cylinder: ";
    cin>>r;
    if( (!cin) || (r<=0) )
    {
    	cout<<endl<<"\tPLEASE, YOU MUST ENTER THE VALID LENGTH 'r' (POSITIVE AND NOT NULL) FOR THE RADIUS OF THE CIRCULAR BASIS IN A CYLINDER!"<<endl<<endl<<"\tTHIS PROGRAM IS CLOSING ... "<<endl<<endl;
    	cout.flush();
    	return EXIT_FAILURE;
    }
    
    /* The radius 'r' is ok. Now, we insert the height 'h' of a cylinder. */
    cout<<"\tYou inserted the valid length 'r'="<<r<<" for the radius of the circular basis in a cylinder."<<endl;
    cout<<"\tPlease, insert the height 'h' (positive and not null) of a cylinder: ";
    cin>>h;
    if( (!cin) || (h<=0) )
    {
    	cout<<endl<<"\tPLEASE, YOU MUST ENTER THE VALID HEIGHT 'h' (POSITIVE AND NOT NULL) OF A CYLINDER!"<<endl<<endl<<"\tTHIS PROGRAM IS CLOSING ... "<<endl<<endl;
    	cout.flush();
    	return EXIT_FAILURE;
    }
    
    /* All parameters are correct! */
    cout<<"\tYou inserted the valid length 'h'="<<r<<" for the height of a cylinder."<<endl;
    vc=volume(r,h);
    cout<<"\tThe volume for the cylinder of interest is "<<vc<<"."<<endl<<endl;
    cout.flush();
    
    /* TASK #3 - compute the volume of a cuboid. */
    cout<<"\tPlease, insert the width 'a' (positive and not null) of a cuboid: ";
    cin>>d;
    if( (!cin) || (d<=0) )
    {
    	cout<<endl<<"\tPLEASE, YOU MUST ENTER THE VALID WIDTH 'a' (POSITIVE AND NOT NULL) OF A CUBOID!"<<endl<<endl<<"\tTHIS PROGRAM IS CLOSING ... "<<endl<<endl;
    	cout.flush();
    	return EXIT_FAILURE;
    }
   	
   	/* The width is ok. Now, we insert the depth 'b' of a cuboid. */
   	cout<<"\tYou inserted the valid length 'a'="<<d<<" for the width of a cuboid."<<endl;
   	cout<<"\tPlease, insert the depth 'b' (positive and not null) of a cuboid: ";
    cin>>r;
    if( (!cin) || (r<=0) )
    {
    	cout<<endl<<"\tPLEASE, YOU MUST ENTER THE VALID DEPTH 'b' (POSITIVE AND NOT NULL) OF A CUBOID!"<<endl<<endl<<"\tTHIS PROGRAM IS CLOSING ... "<<endl<<endl;
    	cout.flush();
    	return EXIT_FAILURE;
    }
    
    /* The depth is ok. Now, we insert the height 'c' of a cuboid. */
   	cout<<"\tYou inserted the valid length 'b'="<<r<<" for the depth of a cuboid."<<endl;
    cout<<"\tPlease, insert the height 'c' (positive and not null) of a cuboid: ";
    cin>>h;
    if( (!cin) || (h<=0) )
    {
    	cout<<endl<<"\tPLEASE, YOU MUST ENTER THE VALID HEIGHT 'c' (POSITIVE AND NOT NULL) OF A CUBOID!"<<endl<<endl<<"\tTHIS PROGRAM IS CLOSING ... "<<endl<<endl;
    	cout.flush();
    	return EXIT_FAILURE;
    }
    
    /* All parameters are correct! */
    cout<<"\tYou inserted the valid length 'c'="<<h<<" for the height of a cuboid."<<endl;
    vc=volume(d,r,h);
    cout<<"\tThe volume for the cuboid of interest is "<<vc<<"."<<endl<<endl;
    cout.flush();
    return EXIT_SUCCESS;
}
