/*****************************************************************************************************************
 * Examples in the C++ language (the 'Example-083' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), July 2017
 *
 * my_class.h - the header file, defining the 'MyClass' class for the 'Example-083' Test.
 ******************************************************************************************************************/

/* We must include this header file? */
#ifndef MY_CLASS_H

	#define MY_CLASS_H
	
	#include <iostream>
	#include <exception>
	using namespace std;
	
	/* The following code belongs to the custom 'my_namespace' namespace. */
	namespace my_namespace
	{
		/// A custom class, describing a tuple of <i>'3'</i> integer values.
		/**
		 * Here, an instance of this class contains 3 integer values 'a-b-c' (in this order).
		 */
		class MyClass
		{
			public:
			
			/// This member function creates a tuple of <i>'3'</i> integer null values.
			MyClass() noexcept;
			
			/// This member function creates a tuple of <i>'3'</i> integer values.
			/**
			 * Here, the first value is 'o+1', the second value is 'o+2', and the third value is 'o+3'.
			 */
			MyClass(int o) noexcept;
			
			/// This member function creates a copy of another instance of this class.
			MyClass(const MyClass& mc) noexcept;
			
			/// This member function creates a copy of another instance of this class.
			/**
			 * It raises an exception if 'mc' is either 'NULL', or 'nullptr'.
			 */
			MyClass(const MyClass *mc);
			
			/// This virtual member function deallocates an instance of this class.
			virtual ~MyClass() noexcept { ; }
			
			/// This member function updates the first value in the current tuple of <i>'3'</i> integer values.
			inline void setValueA(const int &a) noexcept { this->a=a; }
			
			/// This member function updates the second value in the current tuple of <i>'3'</i> integer values.
			inline void setValueB(const int &b) noexcept { this->b=b; }
			
			/// This member function updates the third value in the current tuple of <i>'3'</i> integer values.
			inline void setValueC(const int &c) noexcept { this->c=c; }
			
			/// This member function returns the first value in the current tuple of <i>'3'</i> integer values.
			inline const int getValueA() const noexcept { return this->a; }
			
			/// This member function returns the second value in the current tuple of <i>'3'</i> integer values.
			inline const int getValueB() const noexcept { return this->b; }
			
			/// This member function returns the second value in the current tuple of <i>'3'</i> integer values.
			inline const int getValueC() const noexcept { return this->c; }
			
			/// This member function exports the <i>'3'</i> integer values in the current tuple on a generic output stream.
			void print(ostream& os = cout) const;
			
			protected:
			
			/// The first integer value in the current tuple.
			/**
		 	 * Here, an instance of this class contains 3 integer values 'a-b-c' (in this order).
		 	 */
			int a;
			
			/// The second integer value in the current tuple.
			/**
		 	 * Here, an instance of this class contains 3 integer values 'a-b-c' (in this order).
		 	 */
			int b;
			
			/// The third integer value in the current tuple.
			/**
		 	 * Here, an instance of this class contains 3 integer values 'a-b-c' (in this order).
		 	 */
			int c;
		};
	}
	
#endif
