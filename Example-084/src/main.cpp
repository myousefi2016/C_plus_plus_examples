/****************************************************************************************************************************
 * Examples in the C++ language (the 'Example-084' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), July 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-084' Test.
 ****************************************************************************************************************************/

#include <cstdlib>
#include <iostream>
#include <typeinfo>
using namespace std;

/// This dummy class describes the <i>'parent class'</i> in the <i>'(simple) inheritance'</i> mechanism.
class ParentClass
{
	public:
	
	/// This virtual member function deallocates an instance of the <i>'parent class'</i> in the <i>'(simple) inheritance'</i> mechanism.
	virtual ~ParentClass() 
	{ 
		cout<<"\t\t-) running the destructor member function in the 'ParentClass' class"<<endl;
		cout.flush();
	}
	
	/// This member function performs a dummy operation, offered by the <i>'parent class'</i> in the <i>'(simple) inheritance'</i> mechanism.
	inline void dummyOperation()
	{
		cout<<"\t\t-) running the (not virtual) 'dummyOperation()' member function in the 'ParentClass' class"<<endl;
		cout.flush();
	}
	
	protected:

	/// This (protected) member function creates an instance of the <i>'parent class'</i> in the <i>'(simple) inheritance'</i> mechanism.
	inline ParentClass()
	{
		cout<<"\t\t-) running the (protected) constructor member function in the 'ParentClass' class"<<endl;
		cout.flush();
	}
};

/// This dummy class describes the <i>'child class'</i> in the <i>'(simple) inheritance'</i> mechanism.
class ChildClass : public ParentClass
{
	public:
	
	/// This member function creates an instance of the <i>'child class'</i> in the <i>'(simple) inheritance'</i> mechanism.
	ChildClass()
	{
		cout<<"\t\t-) running the constructor member function in the 'ChildClass' class"<<endl;
		cout.flush();
	}
	
	/// This virtual member function deallocates an instance of the <i>'child class'</i> in the <i>'(simple) inheritance'</i> mechanism.
	virtual ~ChildClass() 
	{ 
		cout<<"\t\t-) running the destructor member function in the 'ChildClass' class"<<endl;
		cout.flush();
	}
	
	/// This member function performs a dummy operation, offered by the <i>'child class'</i> in the <i>'(simple) inheritance'</i> mechanism.
	inline void dummyOperation()
	{
		cout<<"\t\t-) running the (not virtual) 'dummyOperation()' member function in the 'ChildClass' class"<<endl;
		cout.flush();
	}
};

/// The main function for the <i>'Example-084'</i> Test.
int main(void)
{
	ChildClass *c0=nullptr;

	/* This is the 'Example-084' Test, where the constructs for exploiting the (simple) inheritance are validated. */
    cout<<endl<<"\tThis is the 'Example-084' Test in the C++ language."<<endl<<endl;
    cout.flush();
    
    /* TASK #0 - constructing a new instance 'c0' of the 'child class'. */
    const type_info& f =typeid(c0);
    cout<<"\tCreating a new instance 'c0' of the 'ChildClass' class (saved in a variable of type '"<< f.name()<<"') ... "<<endl<<endl;
	c0 = new ChildClass();
	cout<<endl<<"\tMission completed."<<endl<<endl;
	cout.flush();
	
	/* TASK #1 - performing a dummy operation on the instance 'c0' of the 'child class'. */
	cout<<"\tPerforming a dummy operation on the instance 'c0' of the 'child class' ... "<<endl<<endl;
	c0->dummyOperation();
	cout<<endl<<"\tMission completed."<<endl<<endl;
	cout.flush();
	
	/* TASK #2 - deallocating all instances of the 'child class' in this test. */
	cout<<"\tDeallocating the instance 'c0' of the 'ChildClass' class ... "<<endl<<endl;
	if(c0!=nullptr) { delete c0; c0=nullptr; }
	cout<<endl<<"\tMission completed."<<endl;
    cout << endl<< "\tPress the RETURN key to finish ... ";
	cout.flush();
	cin.get();
	#ifndef _MSC_VER
		cout << endl;
		cout.flush();
	#endif
	return EXIT_SUCCESS;
}
