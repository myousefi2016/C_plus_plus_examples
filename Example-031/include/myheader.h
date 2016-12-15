/**********************************************************************************************
 * Examples in the C++ language (the test 'Example-031')
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), December 2016
 *
 * myheader.h - the header file, used for testing some capabilities in the test 'Example-031'.
 **********************************************************************************************/

/* First level macro for avoid duplicated inclusions of this header file! */
#ifndef MY_HEADER_H

	#define MY_HEADER_H
	
	/* Second level macro for controlling the 'AUX_DEFINE macro' */
	#ifdef AUX
	
		/* Definition of a simple macro (CASE 1) */
		#define AUX_DEFINE 20
		
	#else
	
		/* Definition of a simple macro (CASE 2) */
		#define AUX_DEFINE 40
		
	#endif

#endif
