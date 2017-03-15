/******************************************************************************************************************************
 * Examples in the C++ language (the 'Example-010' unit test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), March 2017
 *
 * myvariadic.cpp - the source file, where the auxiliary functions for the 'Example-010' unit test are implemented.
 ******************************************************************************************************************************/
 
#include "myvariadic.h"

double average(unsigned int count,...)
{
	va_list vl;
	double tot=0.0;
	
	/* Now, we extract everything from the variadic list of parameters! */
	fprintf(stdout,"\tInvoking the 'average()' function with the following %d parameters:\n\n",count);
	fflush(stdout);
	va_start(vl,count);
	for(unsigned int i=0;i<count;i++) 
	{ 
		double p=va_arg(vl,double);
		
		/* Now, we extract the parameter #i */
		if(i<count-1) fprintf(stdout,"\t\tthe parameter #%d is %3f;\n",i,p);
		else fprintf(stdout,"\t\tthe parameter #%d is %3f.\n",i,p);
		fflush(stdout);
		tot+=p;
	}
	
	/* If we arrive here, all is ok */
	va_end(vl);
	fprintf(stdout,"\n");
	return (tot/count);
}

int message(const char *fmt,...)
{
	va_list vl;
	int rc;

	/* Now, we extract everything from the variadic list of parameters! */
	fprintf(stdout,"\tInvoking the 'message()' function by using the format '%s'.\n",fmt);
	fflush(stdout);
	va_start(vl,fmt);
	fprintf(stdout,"\tFormatted message as required: '");
	rc=vfprintf(stdout,fmt,vl);
	va_end(vl);
	fprintf(stdout,"'.\n");
	fflush(stdout);
	return rc;
}
