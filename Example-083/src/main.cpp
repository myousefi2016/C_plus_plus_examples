/****************************************************************************************************************************
 * Examples in the C++ language (the 'Example-083' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), July 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-083' Test.
 ****************************************************************************************************************************/

#include "my_class.h"
#include <cstdlib>
#include <iostream>
using namespace my_namespace;
using namespace std;

/// The main function for the <i>'Example-083'</i> Test.
int main(void)
{
	MyClass *c0=nullptr,*c1=nullptr,*c2=nullptr,*c3=nullptr,*c4=nullptr,*c5=NULL;

	/* This is the 'Example-083' Test, where the constructs for defining the 'MyClass' class are validated. */
    cout<<endl<<"\tThis is the 'Example-083' Test in the C++ language."<<endl<<endl;
    cout.flush();
    
    /* TASK #1 - allocating a new instance of the 'MyClass' class. */
	cout<<"\tAllocating a new instance 'c0' of the 'MyClass' class ... ";
	c0 = new MyClass();
	cout<<"ok"<<endl;
	c0->print();
	
	/* TASK #2 - allocating a new instance of the 'MyClass' class by using a brief initialization. */
	cout<<"\tAllocating a new instance 'c1' of the 'MyClass' class ... ";
	c1 = new MyClass(1);
	cout<<"ok"<<endl;
	c1->print();
	
	/* TASK #3 - allocating a new instance of the 'MyClass' class as a copy of the 'c1' variable. */
	cout<<"\tAllocating a new copy 'c2' of the instance 'c1' ... ";
	c2 = new MyClass(c1);
	cout<<"ok"<<endl;
	cout<<"\tThe first value in new variable 'c2' is "<<c2->getValueA()<<"."<<endl;
	cout<<"\tThe second value in new variable 'c2' is "<<c2->getValueB()<<"."<<endl;
	cout<<"\tThe third value in new variable 'c2' is "<<c2->getValueC()<<"."<<endl<<endl;
	cout.flush();
	
	/* TASK #4 - updating the values in the 'c2' variable. */
	cout<<"\tUpdating all values in new variable 'c2' ... ";
	c2->setValueA(4);
	c2->setValueB(-3);
	c2->setValueC(-5);
	cout<<"ok"<<endl;
	cout<<"\tThe first value in new variable 'c2' is "<<c2->getValueA()<<"."<<endl;
	cout<<"\tThe second value in new variable 'c2' is "<<c2->getValueB()<<"."<<endl;
	cout<<"\tThe third value in new variable 'c2' is "<<c2->getValueC()<<"."<<endl<<endl;
	cout.flush();
	
	/* TASK #5 - creating a new copy of updated variable 'c2'. */
	cout<<"\tAllocating a new copy 'c3' of the updated variable 'c2' ... ";
	c3=new MyClass(c2);
	cout<<"ok"<<endl;
	c3->print();
	
	/* TASK #6 - creating a new copy by using a not valid pointer (the 'nullptr' value). */
	cout<<"\tAllocating a new copy 'c4' by using a not valid pointer (the 'nullptr' value) ... ";
	try { c4 = new MyClass(nullptr); }
	catch(domain_error de)
	{
		cout<<endl<<endl<<"\t\tAllocation failed: "<<de.what()<<"."<<endl<<endl;
		cout.flush();
		c4=nullptr;
	}
	catch(exception e) 
	{
		cout<<endl<<endl<<"\t\tAllocation failed: "<<e.what()<<"."<<endl<<endl;
		c4=nullptr;
	}
	
	/* TASK #7 - creating a new copy by using a not valid pointer (the 'NULL' value). */
	cout<<"\tAllocating a new copy 'c5' by using a not valid pointer (the 'NULL' value) ... ";
	try { c5 = new MyClass((MyClass*)NULL); }
	catch(domain_error de)
	{
		cout<<endl<<endl<<"\t\tAllocation failed: "<<de.what()<<"."<<endl<<endl;
		cout.flush();
		c5=nullptr;
	}
	catch(exception e) 
	{
		cout<<endl<<endl<<"\t\tAllocation failed: "<<e.what()<<"."<<endl<<endl;
		c5=nullptr;
	}
    
    /* TASK ? - now, we deallocate all instances of the 'MyClass' class in this test. */
    cout<<"\tDeallocating all instances of the 'MyClass' class in this test ... ";
    if(c0!=nullptr) { delete c0; c0=nullptr; }
    if(c1!=nullptr) { delete c1; c1=nullptr; }
    if(c2!=nullptr) { delete c2; c2=nullptr; }
    if(c3!=nullptr) { delete c3; c3=nullptr; } 
    if(c4!=nullptr) { delete c4; c4=nullptr; }
    if(c5!=NULL) { delete c5; c5=nullptr; }
    cout<<"ok"<<endl<<endl;
    cout << "\tPress the RETURN key to finish ... ";
	cout.flush();
	cin.get();
	#ifndef _MSC_VER
		cout << endl;
		cout.flush();
	#endif
	return EXIT_SUCCESS;
}
