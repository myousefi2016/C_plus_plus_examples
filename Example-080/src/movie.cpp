/**************************************************************************************************
 * Examples in the C++ language (the 'Example-080' unit test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), March 2017
 *
 * movie.cpp - the source file, implementing the 'Movie' class for the 'Example-080' unit test.
 **************************************************************************************************/
 
#include "movie.h"
#include <iostream>
#include <cassert>
using namespace std;

Movie::Movie()
{
	/* Dummy initialization! */
	this->setTitle("Untitled");
	this->setYear(1895);
	this->rating=string("Trash film");
}

Movie::Movie(const Movie& m)
{
	this->setYear(m.getYear());
	this->setRating(m.getRating());
	this->setTitle(m.getTitle());
}

Movie::Movie(const string title,const int year,const string rating)
{
	this->setTitle(title);
	this->setYear(year);
	this->rating=string(rating);
}

Movie::~Movie()
{
	/* We deallocate 'title' and 'rating' */
	this->title.clear();
	this->rating.clear();
}

const string Movie::getTitle() const { return this->title; }
		
const int Movie::getYear() const { return this->year; }
		
const string Movie::getRating() const { return this->rating; }
		
void Movie::setTitle(const string title) 
{
	/* We update 'title' with a not empty string. */
	assert(title.size()!=0);
	this->title=title;
}
		
void Movie::setYear(const int year) 
{
	/* The first film was born and filmed in 1895 by Lumiere Bros. */
	assert(year>=1895);
	this->year=year;
}
		
void Movie::setRating(const string rating) 
{
	/* We accept a not empty string as 'rating' */
	assert(rating.size()!=0);
	this->rating=rating;
}