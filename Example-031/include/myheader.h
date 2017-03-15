/******************************************************************************************************************************
 * Examples in the C++ language (the 'Example-031' unit test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), March 2017
 *
 * myheader.h - the header file, used for validating the C/C++ preprocessor capabilities in the 'Example-031' unit test.
 ******************************************************************************************************************************/

/* First level macro (guard macro) for avoiding the duplicated inclusion of this header file! */
#ifndef MY_HEADER_H

	#define MY_HEADER_H
	
	/* Second level macro (guard macro) for controlling the value of the 'AUX_DEFINE macro' */
	#ifdef AUX
	
		/* Definition of a simple macro (CASE 1). */
		#define AUX_DEFINE 20
		
	#else
	
		/* Definition of a simple macro (CASE 2). */
		#define AUX_DEFINE 40
		
	#endif

#endif
