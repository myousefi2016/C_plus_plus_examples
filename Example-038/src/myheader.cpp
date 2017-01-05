/********************************************************************************************************
 * Examples in the C++ language (the test 'Example-038')
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), December 2016
 *
 * myheader.cpp - the source file, implementing the auxiliary functions for the test 'Example-038'.
 ********************************************************************************************************/

#include "myheader.h"
#include <cmath>
using namespace std;

double getSquaredDistance(int x1,int y1,int x2,int y2)
{
	double ddist;
	
	/* We use the auxiliary variable 'ddist' */
	ddist=pow((x2-x1),2.0)+pow((y2-y1),2.0);
	return ddist;
}

double getDistance(int x1,int y1,int x2,int y2) { return sqrt( getSquaredDistance(x1,y1,x2,y2) ); }
