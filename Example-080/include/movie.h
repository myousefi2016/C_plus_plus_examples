/**************************************************************************************************
 * Examples in the C++ language (the 'Example-080' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), May 2017
 *
 * movie.h - the header file, defining the 'Movie' class for the 'Example-080' Test.
 **************************************************************************************************/
 
#ifndef MOVIE_H

	#define MOVIE_H

	#include <string>
	#include <iostream>
	using namespace std;
	
	/// This class describes a record, describing a generic movie.
	class Movie
	{
		public:
		
		/// This member function creates a new instance of this class.
		Movie();
		
		/// This member function creates a new instance of this class.
		Movie(const string title,const int year,const string rating);
		
		/// This member function creates a new instance of this class.
		Movie(const Movie& m);
		
		/// This virtual member function deallocates an instance of this class.
		virtual ~Movie();
		
		/// This member function returns the title of the movie, described by the current record.
		const string getTitle() const;
		
		/// This member function returns the distribution year of the movie, described by the current record.
		const int getYear() const;
		
		/// This member function returns the rating of the movie, described by the current record.
		const string getRating() const;
		
		/// This member function updates the title of the movie, described by the current record.
		void setTitle(const string title);
		
		/// This member function updates the distribution year of the movie, described by the current record.
		void setYear(const int year);
		
		/// This member function updates the rating of the movie, described by the current record.
		void setRating(const string rating);
		
		/// This friend operator exports the content of the current record, describing a generic movie.
		inline friend ostream& operator<<(ostream& os,Movie &m)
		{
			os<<"\t-) the title of the movie is '"<<m.getTitle()<<"';"<<endl;
			os<<"\t-) the distribution year of the movie is '"<<m.getYear()<<"';"<<endl;
			os<<"\t-) the (personal) rating of the movie is '"<<m.getRating()<<"'."<<endl<<endl;
			os.flush();
			return os;
		}

		private:
		
		/// The title of the movie, described by the current record.
		string title;
		
		/// The rating of the movie, described by the current record.
		string rating;
		
		/// The distribution year of the movie, described by the current record.
		int year;
	};
	
#endif
