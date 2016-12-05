/********************************************************************************************************
 * Examples in the C++ language (the test 'Example-011')
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), December 2016
 *
 * myclass.h - the header file, containing the class of interest for the test 'Example-011'.
 ********************************************************************************************************/

/* Optional inclusion */
#ifndef MY_CLASS_H

	#define MY_CLASS_H
	
	#include <iostream>
	using namespace std;

	class MyClass
	{
		private:

		int v;

		public:

		MyClass(const int &a) : v(a) { ; }

		inline const int & value() const { return this->v; }
	};

	int operator + (const MyClass &a, const MyClass &b)
	{
		cout<<"\tExecuting the operator '+' between two instances of the 'MyClass' class"<<endl<<endl;
		cout.flush();
		return a.value()+b.value();
	}

#endif
