/*******************************************************************************************************************************
 * Examples in the C++ language (the 'Example-083' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), July 2017
 *
 * my_class.cpp - the source file, implementing the 'MyClass' class for the 'Example-083' Test.
 *******************************************************************************************************************************/

#include "my_class.h"

/* The following source code belongs to the 'my_namespace' namespace. */
namespace my_namespace
{
	MyClass :: MyClass() noexcept : a(0), b(0), c(0) { ; }
	
	MyClass :: MyClass(int o) noexcept : a(o+1), b(o+2), c(o+3) { ; }
	
	MyClass :: MyClass(const MyClass &mc) noexcept : a(mc.a), b(mc.b), c(mc.c) { ; }
	
	MyClass :: MyClass(const MyClass *mc)
	{
		/* First, we check if everything is ok! */
		if( (mc==NULL) || (mc==nullptr) ) throw std::domain_error("The constructor receives a 'not valid' pointer ('NULL' or 'nullptr')");
		this->setValueA(mc->getValueA());
		this->setValueB(mc->getValueB());
		this->setValueC(mc->getValueC());
	}
	
	void MyClass::print(ostream& os) const
	{
		os<<"\tThe first value in the current tuple is "<<this->getValueA()<<"."<<endl;
		os<<"\tThe second value in the current tuple is "<<this->getValueB()<<"."<<endl;
		os<<"\tThe third value in the current tuple is "<<this->getValueC()<<"."<<endl<<endl;
		os.flush();
	}
}
