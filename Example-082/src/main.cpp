/****************************************************************************************************************************
 * Examples in the C++ language (the 'Example-082' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), July 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-082' Test.
 ****************************************************************************************************************************/

#include "rational.h"

/// The main function for the <i>'Example-082'</i> Test.
int main(void)
{
	/* This is the 'Example-082' Test, where the constructs for defining the 'Rational' class are validated. */
    cout<<endl<<"\tThis is the 'Example-082' Test in the C++ language."<<endl<<endl;
    cout.flush();
    
    /* TASK #1 - creating a first rational (with allocation). */
    cout<<"\tCreating a new rational 'a' ... ";
    Rational *a = nullptr;
    a = new Rational(7);
    cout<<"ok"<<endl<<"\tThe new rational 'a' is "<<(*a)<<"."<<endl;
    cout.flush();

    /* TASK #2 - creating another rational (without allocation). */
	cout<<"\tCreating another rational 'b' ... ";
    Rational b(5, 3);
    cout<<"ok"<<endl<<"\tThe new rational 'b' is "<<b<<"."<<endl<<endl;
    cout.flush();
    
    /* TASK #3 - creating another rational 'c=a+b'. */
    cout<<"\tComputing the rational 'c=a+b' ... ";
    Rational *c=nullptr;
    c = new Rational(*a+b);
    cout<<"ok"<<endl<<"\tThe new rational 'c=a+b' is "<<*c<<"."<<endl<<endl;
    cout.flush();
    
    /* TASK #4 - creating another rational 'd=a-b'. */
    cout<<"\tComputing the rational 'd=a-b' ... ";
    Rational *d=nullptr;
    d = new Rational(*a-b);
    cout<<"ok"<<endl<<"\tThe new rational 'd=a-b' is "<<*d<<"."<<endl<<endl;
    cout.flush();
    
    /* TASK #5 - creating another rational 'e=a*b'. */
    cout<<"\tComputing the rational 'e=a*b' ... ";
    Rational *e=nullptr;
    e = new Rational(*a*b);
    cout<<"ok"<<endl<<"\tThe new rational 'e=a*b' is "<<*e<<"."<<endl<<endl;
    cout.flush();
    
    /* TASK #6 - creating another rational 'f=a/b'. */
    cout<<"\tComputing the rational 'f=a/b' ... ";
    Rational *f=nullptr;
    f = new Rational(*a/b);
    cout<<"ok"<<endl<<"\tThe new rational 'f=a/b' is "<<*f<<"."<<endl<<endl;
    cout.flush();
    
    /* TASK #7 - deallocating all existing rationals in this test! */
    cout<<"\tDeallocating all rationals in this test ... ";
    if(a!=nullptr) { delete a; a=nullptr; }
    if(c!=nullptr) { delete c; c=nullptr; }
    if(d!=nullptr) { delete d; d=nullptr; } 
    if(e!=nullptr) { delete e; e=nullptr; }
    if(f!=nullptr) { delete f; f=nullptr; }
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
