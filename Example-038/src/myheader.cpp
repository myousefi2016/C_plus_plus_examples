/********************************************************************************************************
 * Examples in the C++ language (the 'Example-038' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), June 2017
 *
 * myheader.cpp - the source file, implementing the auxiliary functions for the 'Example-038' Test.
 ********************************************************************************************************/

#include "myheader.h"
#include <cmath>
using namespace std;

double getSquaredDistance(int x1,int y1,int x2,int y2) { return ( pow((x2-x1),2.0)+pow((y2-y1),2.0) ); }

double getDistance(int x1,int y1,int x2,int y2) { return sqrt( getSquaredDistance(x1,y1,x2,y2) ); }

