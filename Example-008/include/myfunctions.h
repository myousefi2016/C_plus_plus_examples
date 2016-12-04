/********************************************************************************************************
 * Examples in the C++ language (the test 'Example-008')
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), December 2016
 *
 * myfunctions.h - the header file, containing the auxiliary functions for the test 'Example-008'.
 ********************************************************************************************************/
 
/* Optional inclusion! */
#ifndef MY_FUNCTIONS_H

	#define MY_FUNCTIONS_H

	/// The constant value of pi.	
	const static double PI=3.141592653589793;

	/// This function computes the volume of a cube (with side length equal to d).
	double volume(double d);
	
	/// This function computes the volume of a cylinder (with radius r and height h).
	double volume(double r,double h);
	
	/// This function computes the volume of a cuboid with width a, depth b, and height c.
	double volume(double a,double b,double c);
	
#endif
