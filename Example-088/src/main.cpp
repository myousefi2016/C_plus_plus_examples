/****************************************************************************************************************************
 * Examples in the C++ language (the 'Example-088' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), July 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-088' Test.
 ****************************************************************************************************************************/

#include <iostream>
#include <cstdlib>
#include <string>
#include <typeinfo>
#ifdef __GNUG__

	/* If we are using the GCC/G++, we can improve this operation! */	
	#include <memory>
	#include <cxxabi.h>

#endif
using namespace std;

/// This template function tries to demangle the name for the type of a given variable. */
template <class T> string demangle(const T&t)
{
	/* We are using the GCC/G++ ? */
	#ifdef __GNUG__
	
		int status = -4;
		
		/* If we are using the GCC/G++, we can improve this operation! */
		std::unique_ptr<char, void(*)(void*)> res { abi::__cxa_demangle(typeid(t).name(), NULL, NULL, &status), std::free };
		return (status==0) ? res.get() : typeid(t).name();
	
	#else
	
		/* We cannot do much! */
		return typeid(t).name();
		
	#endif
}

/// This is the <i>'base (template) class'</i> in the context of the <i>'Curiously Recurring Template Pattern (CRTP)'</i>.
template <class T> class CRTPBaseClass
{
	public:

	/// This member function allocates a new instance of this class.
	inline CRTPBaseClass() { cout<<"\tThe constructor member function for the 'CRTPBaseClass' template class is invoked."<<endl; }

	/// This virtual member function deallocates an instance of this class.
	virtual ~CRTPBaseClass() { cout<<"\tThe destructor member function for the 'CRTPBaseClass' template class is invoked."<<endl; }

	/// This member function performs a dummy operation over the current instance of this class.
	inline void dummyOperation() 
	{ 
		/* Here, we perform a static cast in order to invoke the actual implementation of this member function in the 'derived class'. */
		cout<<"\tThe implementation of the 'dummyOperation()' member function in the 'CRTPBaseClass' template class is invoked (forward step)."<<endl;
		cout.flush();
		static_cast<T*>(this)->dummyOperation();
	}
};

/// This is the <i>'derived (template) class'</i> in the context of the <i>'Curiously Recurring Template Pattern (CRTP)'</i>.
class CRTPDerivedClass : public CRTPBaseClass< CRTPDerivedClass >
{
	public:

	/// This member function allocates a new instance of this class.
	inline CRTPDerivedClass() { cout<<"\tThe constructor member function for the 'CRTPDerivedClass' class is invoked."<<endl; }

	/// This virtual member function deallocates an instance of this class.
	virtual ~CRTPDerivedClass() { cout<<"\tThe destructor member function for the 'CRTPDerivedClass' class is invoked."<<endl; }

	/// This member function performs a dummy operation over the current instance of this class.
	inline void dummyOperation() 
	{ 
		/* This is the actual implementation of this member function in the current instance of this class (the actual 'derived class'). */
		cout<<"\tThe actual implementation of the 'dummyOperation()' member function in the 'CRTPDerivedClass' class is invoked."<<endl;
		cout.flush();
	}
};

/// The main function for the <i>'Example-088'</i> Test.
int main(void)
{
	/* This is the 'Example-088' Test, where the 'Curiously Recurring Template Pattern (CRTP)' technique is validated. */
	cout<<endl<<"\tThis is the 'Example-088' Test in the C++ language."<<endl<<endl;
	cout.flush();

	/* TASK #1 - creating a new instance of the CRTP (template) class. */
	CRTPBaseClass<CRTPDerivedClass> *c = nullptr;
	c = new CRTPDerivedClass();
	cout<<"\tAllocated a new instance 'c' of the '";
	auto s = demangle(&c);
	cout<<s<<"' type."<<endl<<endl;

	/* TASK #2 - invoking a member function on the new instance 'c'. */
	c->dummyOperation();
	cout<<endl;
	cout.flush();

	/* TASK #3 - deallocating all instances of the CRTP (template) class. */
	if(c!=nullptr) { delete c; c=nullptr; }
	cout << endl << "\tPress the RETURN key to finish ... ";
	cout.flush();
	cin.get();
	#ifndef _MSC_VER
		cout << endl;
		cout.flush();
	#endif
	return EXIT_SUCCESS;
}

