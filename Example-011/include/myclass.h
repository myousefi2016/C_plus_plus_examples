/******************************************************************************************************************************
 * Examples in the C++ language (the 'Example-011' unit test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), March 2017
 *
 * myclass.h - the header file, where the auxiliary class for the 'Example-011' unit test is defined.
 ******************************************************************************************************************************/

/* Optional inclusion */
#ifndef MY_CLASS_H

	#define MY_CLASS_H
	
	#include <iostream>
	using namespace std;

	/// An auxiliary class, which the wrapper for a generic <i>'int'</i> C++ built-in value.
	class MyClass
	{
		private:
		
		/// The <i>'int'</i> C++ built-in value, described by this class.
		int v;

		public:

		/// This member function allocates a new instance of this class, which the wrapper for a generic <i>'int'</i> C++ built-in value.
		MyClass(const int &a) : v(a) { ; }

		/// This member function returns the generic <i>'int'</i> C++ built-in value, described by this class.
		inline const int & value() const { return this->v; }
	};

	/// This operator adds the generic <i>'int'</i> C++ built-in values, described by two instances of the <i>'MyClass'</i> class.
	int operator + (const MyClass &a, const MyClass &b)
	{
		cout<<"\tExecuting the operator '+' between two instances of the 'MyClass' class."<<endl;
		cout.flush();
		return a.value()+b.value();
	}

#endif
