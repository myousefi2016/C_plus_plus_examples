/********************************************************************************************************
 * Examples in the C++ language (the test 'Example-008')
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), December 2016
 *
 * main.cpp - the source file, implementing the main function for the test 'Example-008'.
 ********************************************************************************************************/

#include "myfunctions.h"
#include <cstdlib>
#include <iostream>
using namespace std;

/// The main function for the <i>Example-008</i> unit test.
int main(void)
{
	double d,r,h,vc;

	/* Main operations! */
	cout<<endl<<"\tThis is the example 'Example-008' in the C++ language"<<endl<<endl;
    cout.flush();

	/* STEP #1 - compute the volume for a cube! */    
    cout<<"\tPlease, insert the length 'd' for the side of a cube: ";
    cin>>d;
    if( (!cin) || (d<0) )
    {
    	cout<<"\tYou must enter a valid length 'd' for the side of a cube!"<<endl<<endl;
    	return EXIT_FAILURE;
    }
    else
    {
    	cout<<"\tYou inserted the valid length 'd'="<<d<<" as the size of a cube"<<endl;
    	vc = volume(d);
    	cout.flush();
    	cout<<"\tThe volume for the cube of interest is: "<<vc<<endl<<endl;
    	cout.flush();
    }
    
    /* STEP #2 - compute the volume for a cylinder */
    cout<<"\tPlease, insert the length 'r' for the radius of the circular basis in a cylinder: ";
    cin>>r;
    if( (!cin) || (r<0) )
    {
    	cout<<"\tYou must enter a valid length 'r' for the radius of the circular basis in a cylinder!"<<endl<<endl;
    	return EXIT_FAILURE;
    }
    
    /* The radius 'r' is ok. Now, we insert the height 'h' of a cylinder. */
    cout<<"\tYou inserted the valid length 'r'="<<r<<" for the radius of the circular basis in a cylinder"<<endl;
    cout<<"\tPlease, insert the height 'h' of a cylinder: ";
    cin>>h;
    if( (!cin) || (h<0) )
    {
    	cout<<"\tYou must enter a valid height 'h' of a cylinder!"<<endl<<endl;
    	return EXIT_FAILURE;
    }
    
    /* All parameters are correct! */
    cout<<"\tYou inserted the valid height 'h'="<<r<<" for the height of a cylinder"<<endl;
    vc=volume(r,h);
    cout<<"\tThe volume for the cylinder of interest is: "<<vc<<endl<<endl;
    cout.flush();
    
    /* STEP #3 - compute the volume of a cuboid */
    cout<<"\tPlease, insert the width 'a' of a cuboid: ";
    cin>>d;
    if( (!cin) || (d<0) )
    {
    	cout<<"\tYou must enter a valid width 'a' of a cuboid!"<<endl<<endl;
    	return EXIT_FAILURE;
    }
   	
   	/* The width is ok. Now, we insert the depth 'b' of a cuboid. */
   	cout<<"\tYou inserted the valid width 'a'="<<d<<" of a cuboid"<<endl;
   	cout<<"\tPlease, insert the depth 'b' of a cuboid: ";
    cin>>r;
    if( (!cin) || (r<0) )
    {
    	cout<<"\tYou must enter a valid depth 'b' of a cuboid!"<<endl<<endl;
    	return EXIT_FAILURE;
    }
    
    /* The depth is ok. Now, we insert the height 'c' of a cuboid. */
   	cout<<"\tYou inserted the valid depth 'b'="<<r<<" of a cuboid"<<endl;
    cout<<"\tPlease, insert the height 'c' of a cuboid: ";
    cin>>h;
    if( (!cin) || (h<0) )
    {
    	cout<<"\tYou must enter a valid height 'c' of a cuboid!"<<endl<<endl;
    	return EXIT_FAILURE;
    }
    
    /* All parameters are correct! */
    cout<<"\tYou inserted the valid height 'c'="<<h<<" of a cuboid"<<endl;
    vc=volume(d,r,h);
    cout<<"\tThe volume for the cuboid of interest is: "<<vc<<endl<<endl;
    cout.flush();
    return EXIT_SUCCESS;
}
