/**************************************************************************************************
 * Examples in the C++ language (the 'Example-031' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), June 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-031' Test.
 **************************************************************************************************/

#include <iostream>
#include <cstdlib>
using namespace std;

/// The main function for the <i>'Example-031'</i> Test.
int main(void)
{
	/* This is the 'Example-031' Test, where the C/C++ preprocessor inclusion capabilities are verified and checked. */
    cout<<endl<<"\tThis is the 'Example-031' Test in the C++ language."<<endl<<endl;
    cout.flush();
    
    /* STEP #1 - Here, we analyze the 'AUX_DEFINE' and the 'AUX' macro (defined in the 'myheader.h' header file) before and after including this header file. */
	#ifndef AUX_DEFINE
		cout<<"\tBefore including the 'myheader.h' file, the 'AUX_DEFINE' macro is not defined."<<endl;
	#else
		cout<<"\tTBefore including the 'myheader.h' file, the 'AUX_DEFINE' macro is defined, and its value is "<<AUX_DEFINE<<"."<<endl;
	#endif
	#ifndef AUX
		cout<<"\tBefore including the 'myheader.h' file, the 'AUX' macro is not defined."<<endl;
	#else
		cout<<"\tBefore including the 'myheader.h' file, the 'AUX' macro is defined."<<endl;
	#endif	
	cout<<"\tIncluding the 'myheader.h' header file ... ";
	#include "myheader.h"
	cout<<"ok"<<endl;
	#ifndef AUX_DEFINE
		cout<<"\tAfter including the 'myheader.h' file, the 'AUX_DEFINE' macro is not defined."<<endl;
	#else
		cout<<"\tAfter including the 'myheader.h' file, the 'AUX_DEFINE' macro is defined, and its value is "<<AUX_DEFINE<<"."<<endl;
	#endif
	#ifndef AUX
		cout<<"\tAfter including the 'myheader.h' file, the 'AUX' macro is not defined."<<endl;
	#else
		cout<<"\tAfter including the 'myheader.h' file, the 'AUX' macro is defined."<<endl;
	#endif
	cout<<endl;
	cout.flush();
	
	/* STEP #1. Here, we define the 'AUX' macro, and try to include again the 'myheader.h' header file. All remains unchanged. */
	cout<<"\tDefining the 'AUX' macro ... ";
	#define AUX
	cout<<"ok"<<endl;
	cout<<"\tIncluding again the 'myheader.h' header file (but without unloading the 'guard' macros) ... ";
	#include "myheader.h"
	cout<<"ok"<<endl;
	#ifndef AUX_DEFINE
		cout<<"\tAfter including the 'myheader.h' file, the 'AUX_DEFINE' macro is not defined."<<endl;
	#else
		cout<<"\tAfter including the 'myheader.h' file, the 'AUX_DEFINE' macro is defined, and its value is "<<AUX_DEFINE<<"."<<endl;
	#endif
	#ifndef AUX
		cout<<"\tAfter including the 'myheader.h' file, the 'AUX' macro is not defined."<<endl;
	#else
		cout<<"\tAfter including the 'myheader.h' file, the 'AUX' macro is defined."<<endl;
	#endif
	cout<<endl;
	cout.flush();
	
	/* STEP #2. Here, we try to unload the 'myheader.h' header file, and to include it immediately after. */
	cout<<"\tUnloading the 'guard' macros for including the 'myheader' header file (but not the 'AUX' macro) ... ";
	#undef MY_HEADER_H
	#undef AUX_DEFINE
	cout<<"ok"<<endl;
	cout<<"\tIncluding again the 'myheader.h' header file ... ";
	#include "myheader.h"
	cout<<"ok"<<endl;
	#ifndef AUX_DEFINE
		cout<<"\tAfter including the 'myheader.h' file, the 'AUX_DEFINE' macro is not defined."<<endl;
	#else
		cout<<"\tAfter including the 'myheader.h' file, the 'AUX_DEFINE' macro is defined, and its value is "<<AUX_DEFINE<<"."<<endl;
	#endif
	#ifndef AUX
		cout<<"\tAfter including the 'myheader.h' file, the 'AUX' macro is not defined."<<endl;
	#else
		cout<<"\tAfter including the 'myheader.h' file, the 'AUX' macro is defined."<<endl;
	#endif
	cout<<endl;
	cout.flush();
	
	/* STEP #3. Here, we try to unload the 'myheader.h' header file, and to include it immediately after. */
	cout<<"\tUnloading the 'guard' macros for including the 'myheader' header file (also the 'AUX' macro) ... ";
	#undef MY_HEADER_H
	#undef AUX_DEFINE
	#undef AUX
	cout<<"ok"<<endl;
	cout<<"\tIncluding again the 'myheader.h' header file ... ";
	#include "myheader.h"
	cout<<"ok"<<endl;
	#ifndef AUX_DEFINE
		cout<<"\tAfter including the 'myheader.h' file, the 'AUX_DEFINE' macro is not defined."<<endl;
	#else
		cout<<"\tAfter including the 'myheader.h' file, the 'AUX_DEFINE' macro is defined, and its value is "<<AUX_DEFINE<<"."<<endl;
	#endif
	#ifndef AUX
		cout<<"\tAfter including the 'myheader.h' file, the 'AUX' macro is not defined."<<endl<<endl;
	#else
		cout<<"\tAfter including the 'myheader.h' file, the 'AUX' macro is defined."<<endl<<endl;
	#endif
	cout << "\tPress the RETURN key to finish ... ";
	cout.flush();
	cin.get();
	#ifndef _MSC_VER
		cout << endl;
		cout.flush();
	#endif
    return EXIT_SUCCESS;    
}

