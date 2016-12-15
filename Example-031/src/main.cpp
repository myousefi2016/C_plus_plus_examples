/**********************************************************************************************
 * Examples in the C++ language (the test 'Example-031')
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), December 2016
 *
 * main.cpp - the source file, implementing the main function for the test 'Example-031'.
 **********************************************************************************************/

#include <iostream>
#include <cstdlib>
using namespace std;

/// The main function for the <i>Example-031</i> unit test.
int main(void)
{
	/* This is the example 'Example-031', where the inclusion capabilities are verified and checked. */
    cout<<endl<<"\tThis is the example 'Example-031' in the C++ language"<<endl<<endl;
    cout.flush();

	/* STEP #0 (no operation). Now, we analyze the macro 'AUX_DEFINE' (defined in the 'myheader.h' header file). */
	#ifndef AUX_DEFINE
	
		cout<<"\tThe 'AUX_DEFINE' macro is not defined"<<endl;
		cout.flush();
		
	#else
	
		cout<<"\tThe 'AUX_DEFINE' macro is defined, and its value is: "<<AUX_DEFINE<<endl;
		cout.flush();
	
	#endif
	#ifndef AUX
		cout<<"\tThe 'AUX' macro is not defined"<<endl;
	#else
		cout<<"\tThe 'AUX' macro is defined"<<endl;
	#endif	
	cout<<"\tIncluding the 'myheader.h' header file ... ";
	cout.flush();
	#include "myheader.h"
	cout<<"ok"<<endl;
	cout.flush();
	
	/* STEP #0. Here, we include the 'myheader.h' header file without defining the AUX macro. Then, we analyze the macro 'AUX_DEFINE' (defined in the 'myheader.h' header file). It should be '40'! */
	#ifndef AUX_DEFINE
	
		cout<<"\tAfter including the 'myheader.h' header file, the 'AUX_DEFINE' macro is not defined"<<endl<<endl;
		cout.flush();

	#else
	
		cout<<"\tAfter including the 'myheader.h' header file, the 'AUX_DEFINE' macro is defined, and its value is: "<<AUX_DEFINE<<endl<<endl;
		cout.flush();
	
	#endif
	
	/* STEP #1. Here, we define the AUX macro, and try to include again the 'myheader.h' header file. All remains unchanged. */
	cout<<"\tDefining the AUX macro ... ";
	#define AUX
	cout<<"ok"<<endl;
	cout<<"\tIncluding again the 'myheader.h' header file (but without unloading the 'guard' macros) ... ";
	cout.flush();
	#include "myheader.h"
	cout<<"ok"<<endl;
	cout.flush();
	#ifndef AUX_DEFINE
	
		cout<<"\tAfter including the 'myheader.h' header file, the 'AUX_DEFINE' macro is not defined"<<endl<<endl;
		cout.flush();

	#else
	
		cout<<"\tAfter including the 'myheader.h' header file, the 'AUX_DEFINE' macro is defined, and its value is: "<<AUX_DEFINE<<endl<<endl;
		cout.flush();
	
	#endif
	
	/* STEP #2. Here, we try to unload the 'myheader.h' header file, and to include it immediately after. */
	cout<<"\tUnloading the 'guard' macros for including the 'myheader' header file (but not the 'AUX' macro) ... ";
	#undef MY_HEADER_H
	#undef AUX_DEFINE
	cout<<"ok"<<endl;
	cout<<"\tIncluding again the 'myheader.h' header file ... ";
	cout.flush();
	#include "myheader.h"
	cout<<"ok"<<endl;
	cout.flush();
	#ifndef AUX_DEFINE
	
		cout<<"\tAfter including the 'myheader.h' header file, the 'AUX_DEFINE' macro is not defined"<<endl<<endl;
		cout.flush();

	#else
	
		cout<<"\tAfter including the 'myheader.h' header file, the 'AUX_DEFINE' macro is defined, and its value is: "<<AUX_DEFINE<<endl<<endl;
		cout.flush();
	
	#endif
	
	/* STEP #3. Here, we try to unload the 'myheader.h' header file, and to include it immediately after. */
	cout<<"\tUnloading the 'guard' macros for including the 'myheader' header file (including the 'AUX' macro) ... ";
	#undef MY_HEADER_H
	#undef AUX_DEFINE
	#undef AUX
	cout<<"ok"<<endl;
	cout<<"\tIncluding again the 'myheader.h' header file ... ";
	cout.flush();
	#include "myheader.h"
	cout<<"ok"<<endl;
	cout.flush();
	#ifndef AUX_DEFINE
	
		cout<<"\tAfter including the 'myheader.h' header file, the 'AUX_DEFINE' macro is not defined"<<endl<<endl;
		cout.flush();

	#else
	
		cout<<"\tAfter including the 'myheader.h' header file, the 'AUX_DEFINE' macro is defined, and its value is: "<<AUX_DEFINE<<endl<<endl;
		cout.flush();
	
	#endif
	return EXIT_SUCCESS;
}