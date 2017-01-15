/**********************************************************************************************
 * Examples in the C++ language (the test 'Example-081')
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), January 2017
 *
 * movie.h - the header file, defining the 'House' class for the test 'Example-081'.
 **********************************************************************************************/
 
#ifndef HOUSE_H

	#define HOUSE_H
	
	#include <string>
	#include <iostream>
	using namespace std;
	
	/// This class describes a record, describing a generic house.
	class House
	{
		public:
		
		/// This member function creates a new instance of this class.
		House();
		
		/// This member function creates a new instance of this class.
		House(const string c, unsigned int nob,unsigned int nor, double sm);
		
		/// This member function creates a new instance of this class.
		House(const House &h);
		
		/// This virtual member function deallocates an instance of this class.
		virtual ~House();
		
		/// This member function returns the constant reference to the color of the house, described by the current record.
		const string getCColor() const;
		
		/// This member function returns the constant reference to the number of the bathrooms in the house, described by the current record.
		const unsigned int getCNumberOfBathRooms() const;
		
		/// This member function returns the constant reference to the number of the rooms (except the bathrooms) in the house, described by the current record.
		const unsigned int getCNumberOfRooms() const;
		
		/// This member function returns the constant reference to the color of the house, described by the current record.
		const double getCSquareMeters() const;
		
		/// This member function returns the reference to the color of the house, described by the current record.
		string& getColor();
		
		/// This member function returns the reference to the number of the bathrooms in the house, described by the current record.
		unsigned int& getNumberOfBathRooms();
		
		/// This member function returns the reference to the number of the rooms (except the bathrooms) in the house, described by the current record.
		unsigned int& getNumberOfRooms();
		
		/// This member function returns the reference to the square meters of the house, described by the current record.
		double& getSquareMeters();
		
		/// This friend operator exports the content of the current record, describing a generic house.
		inline friend ostream& operator<<(ostream& os,House &h)
		{
			os<<"\tThe color: "<<h.getCColor()<<endl;
			os<<"\tThe number of the bathrooms/restrooms: "<<h.getCNumberOfBathRooms()<<endl;
			os<<"\tThe number of the rooms (except the bathrooms): "<<h.getCNumberOfRooms()<<endl;
			os<<"\tThe square meters: "<<h.getCSquareMeters()<<endl<<endl;
			os.flush();
			return os;
		}

		private:
		
		/// The color of the house, described by the current record.
		string color;
		
		/// The number of the bathrooms in the house, described by the current record.
		unsigned int num_of_bathrooms;
		
		/// The number of the rooms (except the bathrooms) in the house, described by the current record.
		unsigned int num_of_rooms;
		
		/// The square meters of the house, described by the current record.
		double squareMeters;
	};

#endif
