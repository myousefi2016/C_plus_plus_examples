/****************************************************************************************************************************
 * Examples in the C++ language (the 'Example-087' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), July 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-087' Test.
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

/// The main function for the <i>'Example-087'</i> Test.
int main(void)
{
	/* This is the 'Example-087' Test, where the constructs for checking the variables types are validated. */
	cout<<endl<<"\tThis is the 'Example-087' Test in the C++ language."<<endl<<endl;
	cout.flush();
	
	/* TASK #1- analyzing the type of an 'integer' variable. */
	int i=47;
	cout<<"\tAnalyzing the type of the variable 'i="<<i<<"' ... ";
	auto s = demangle(i);
	cout<<"ok"<<endl;
	cout<<"\tThe resulting type of the variable 'i' is '"<<s<<"'."<<endl<<endl;
	cout.flush();
	
	/* TASK #2- analyzing the type of any 'C-like string' variable. */
	const char * c = "this is a C-like string";
    cout<<"\tAnalyzing the type of the variable 'c="<<c<<"' ... ";
    s = demangle(c);
    cout<<"ok"<<endl;
    cout<<"\tThe resulting type of the variable 'c' is '"<<s<<"'."<<endl<<endl;
	cout.flush();
	
	/* TASK #3- analyzing the type of any 'C++-like string' variable. */
	string a = "this is a C++-like string";
    cout<<"\tAnalyzing the type of the variable 'a="<<a<<"' ... ";
    s = demangle(a);
    cout<<"ok"<<endl;
    cout<<"\tThe resulting type of the variable 'a' is '"<<s<<"'."<<endl<<endl;
	cout.flush();
	
	/* TASK #4- analyzing the type of a variable, and tries to declare automatically another variable with the same type. */
	auto f = 1.1f;
	cout<<"\tAnalyzing the type of the variable 'f="<<f<<"' ... ";
	s = demangle(f);
	cout<<"ok"<<endl;
	cout<<"\tThe resulting type of the variable 'f' is '"<<s<<"'."<<endl<<endl;
	decltype(f) f1;
	cout<<"\tTrying to allocate a new variable 'f1="<<f1<<"' with the same type as the variable 'f' ... ";
	s=demangle(f1);
	cout<<"ok"<<endl;
	if(typeid(f)==typeid(f1)) cout<<"\tThe variables 'f' and 'f1' have the same type '"<<s<<"'."<<endl<<endl;
	else cout<<"\tThe variables 'f' and 'f1' have not the same type."<<endl<<endl;
	cout << "\tPress the RETURN key to finish ... ";
	cout.flush();
	cin.get();
	#ifndef _MSC_VER
		cout << endl;
		cout.flush();
	#endif
	return EXIT_SUCCESS;
}
