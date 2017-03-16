/**************************************************************************************************
 * Examples in the C++ language (the 'Example-081' unit test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), March 2017
 *
 * house.cpp - the source file, implementing the 'House' class for the 'Example-081' unit test.
 **************************************************************************************************/

#include "house.h"
using namespace std;

House::House() : color("no color"), num_of_bathrooms(1), num_of_rooms(1), squareMeters(35) { ; }
		
House::House(const string c, unsigned int nob,unsigned int nor, double sm) : color(c), num_of_bathrooms(nob), num_of_rooms(nor), squareMeters(sm) { ; }

House::House(const House &h) : color(h.getCColor()), num_of_bathrooms(h.getCNumberOfBathRooms()), num_of_rooms(h.getCNumberOfRooms()), squareMeters(h.getCSquareMeters()) { ; }
		
House::~House() { this->color.clear(); }
		
const string House::getCColor() const { return this->color; }
		
const unsigned int House::getCNumberOfBathRooms() const { return this->num_of_bathrooms; }

const unsigned int House::getCNumberOfRooms() const { return this->num_of_rooms; }
		
const double House::getCSquareMeters() const { return this->squareMeters; }
		
string& House::getColor() { return this->color; }
		
unsigned int& House::getNumberOfBathRooms() { return this->num_of_bathrooms; }
		
unsigned int& House::getNumberOfRooms() { return this->num_of_rooms; }
		
double& House::getSquareMeters() { return this->squareMeters; }
