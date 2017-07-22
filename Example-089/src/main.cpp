/****************************************************************************************************************************
 * Examples in the C++ language (the 'Example-089' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), July 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-089' Test.
 ****************************************************************************************************************************/

#include <iostream>
#include <cstdlib>
using namespace std;

/// This template class describes a generic instance counter.
template <typename T> class CounterObject
{
	protected:

	// The number of the objects, created by this class. */
	static int objects_created;

	/// The number of the objects, created by this class, that are still alive. 
    static int objects_alive;

	/// This virtual member function deallocates an object.
	virtual ~CounterObject() { --objects_alive; }

	/// This member function creates a new object.
	CounterObject()
    {
        ++objects_created;
        ++objects_alive;
    }
	
	/// This member function creates a new object as the copy of another object.
	CounterObject(const CounterObject&)
    {
        ++objects_created;
        ++objects_alive;
    }

	public:

	/// This static function returns the number of the objects, created by this class, that are still alive.
	static int GetAliveObjectsNumber() { return CounterObject<T>::objects_alive; }

	/// This static function returns the number of the objects, created by this class. */
	static int GetCreatedObjectsNumber() { return CounterObject<T>::objects_created; }	
};

/* Initializing the internal objects! */
template <typename T> int CounterObject<T>::objects_created( 0 );
template <typename T> int CounterObject<T>::objects_alive( 0 );

class X : public CounterObject<X> { };
class Y : public CounterObject<Y> { };

/// The main function for the <i>'Example-089'</i> Test.
int main(void)
{
	/* This is the 'Example-089' Test, where the 'Curiously Recurring Template Pattern (CRTP)' technique is validated for being an instance counter. */
	cout<<endl<<"\tThis is the 'Example-089' Test in the C++ language."<<endl<<endl;
	cout.flush();

	/* TASK #1 - we analyze the initial state! */
	cout<<"\t#created objects of the class 'X': "<<X::GetCreatedObjectsNumber()<<endl;
	cout<<"\t#created objects of the class 'Y': "<<Y::GetCreatedObjectsNumber()<<endl;
	cout<<"\t#alive objects of the class 'X': "<<X::GetAliveObjectsNumber()<<endl;
	cout<<"\t#alive objects of the class 'Y': "<<Y::GetAliveObjectsNumber()<<endl<<endl;
	cout.flush();

	/* TASK #2 - creating several instances of the 'X' class! */
	cout<<"\tCreating several (4) instances of the 'X' class ... ";
	X x1,x2,x3,x4(x3),*x5=nullptr;
	cout<<"ok"<<endl;
	cout<<"\t#created objects of the class 'X': "<<X::GetCreatedObjectsNumber()<<endl;
	cout<<"\t#created objects of the class 'Y': "<<Y::GetCreatedObjectsNumber()<<endl;
	cout<<"\t#alive objects of the class 'X': "<<X::GetAliveObjectsNumber()<<endl;
	cout<<"\t#alive objects of the class 'Y': "<<Y::GetAliveObjectsNumber()<<endl<<endl;
	cout.flush();
	cout<<"\tAllocating a new instance 'x5' of the 'X' class ... ";
	x5 = new X();
	cout<<"ok"<<endl;
	cout<<"\t#created objects of the class 'X': "<<X::GetCreatedObjectsNumber()<<endl;
	cout<<"\t#created objects of the class 'Y': "<<Y::GetCreatedObjectsNumber()<<endl;
	cout<<"\t#alive objects of the class 'X': "<<X::GetAliveObjectsNumber()<<endl;
	cout<<"\t#alive objects of the class 'Y': "<<Y::GetAliveObjectsNumber()<<endl<<endl;
	cout.flush();
	cout<<"\tDeallocating the instance 'x5' of the 'X' class ... ";
	if(x5!=nullptr) { delete x5; x5=nullptr; }
	cout<<"ok"<<endl;
	cout<<"\t#created objects of the class 'X': "<<X::GetCreatedObjectsNumber()<<endl;
	cout<<"\t#created objects of the class 'Y': "<<Y::GetCreatedObjectsNumber()<<endl;
	cout<<"\t#alive objects of the class 'X': "<<X::GetAliveObjectsNumber()<<endl;
	cout<<"\t#alive objects of the class 'Y': "<<Y::GetAliveObjectsNumber()<<endl<<endl;
	cout.flush();

	/* TASK #3 - creating several instances of the 'Y' class! */
	cout<<"\tCreating several (2) instances of the 'Y' class ... ";
	Y y1,y2,*y3=nullptr;
	cout<<"ok"<<endl;
	cout<<"\t#created objects of the class 'X': "<<X::GetCreatedObjectsNumber()<<endl;
	cout<<"\t#created objects of the class 'Y': "<<Y::GetCreatedObjectsNumber()<<endl;
	cout<<"\t#alive objects of the class 'X': "<<X::GetAliveObjectsNumber()<<endl;
	cout<<"\t#alive objects of the class 'Y': "<<Y::GetAliveObjectsNumber()<<endl<<endl;
	cout.flush();
	cout<<"\tAllocating a new instance 'y3' of the 'Y' class ... ";
	y3 = new Y();
	cout<<"ok"<<endl;
	cout<<"\t#created objects of the class 'X': "<<X::GetCreatedObjectsNumber()<<endl;
	cout<<"\t#created objects of the class 'Y': "<<Y::GetCreatedObjectsNumber()<<endl;
	cout<<"\t#alive objects of the class 'X': "<<X::GetAliveObjectsNumber()<<endl;
	cout<<"\t#alive objects of the class 'Y': "<<Y::GetAliveObjectsNumber()<<endl<<endl;
	cout.flush();
	cout<<"\tDeallocating the instance 'y3' of the 'Y' class ... ";
	if(y3!=nullptr) { delete y3; y3=nullptr; }
	cout<<"ok"<<endl;
	cout<<"\t#created objects of the class 'X': "<<X::GetCreatedObjectsNumber()<<endl;
	cout<<"\t#created objects of the class 'Y': "<<Y::GetCreatedObjectsNumber()<<endl;
	cout<<"\t#alive objects of the class 'X': "<<X::GetAliveObjectsNumber()<<endl;
	cout<<"\t#alive objects of the class 'Y': "<<Y::GetAliveObjectsNumber()<<endl<<endl;
	cout.flush();
	cout<<"\tThe remaining "<<X::GetAliveObjectsNumber()<<" and "<<Y::GetAliveObjectsNumber()<<" instances of, respectively, the 'X' and the 'Y' class will be ";
	cout<<"automatically deallocated."<<endl;
	cout << endl << "\tPress the RETURN key to finish ... ";
	cout.flush();
	cin.get();
	#ifndef _MSC_VER
		cout << endl;
		cout.flush();
	#endif
	return EXIT_SUCCESS;
}

