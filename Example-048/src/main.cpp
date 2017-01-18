/**********************************************************************************************
 * Examples in the C++ language (the test 'Example-048')
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), January 2017
 *
 * main.cpp - the source file, implementing the main function for the test 'Example-048'.
 **********************************************************************************************/

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

/// The main function for the <i>Example-048</i> unit test.
int main(void)
{
	int *all=nullptr,*all2=nullptr;
	char letter='A',*letter_ptr;

	/* This is the example 'Example-048', where the use of the pointers is tested! */
    cout<<endl<<"\tThis is the example 'Example-048' in the C++ language"<<endl<<endl;
    cout.flush();
    
    /* Target #1 - allocating a new 'int' value, referred through its pointer. */
    cout<<"\tAllocating a new 'int' value, referred through its pointer 'a' ... ";
    cout.flush();
    all=new int();
    cout<<"ok"<<endl;
    cout<<"\tThe pointer 'a' to the new 'int' value: "<<all<<endl;
    cout<<"\tThe 'int' value, referred by the pointer 'a': "<<(*all)<<endl;
    cout<<"\tModifying the existing 'int' value, referred by the pointer 'a', ... ";
    (*all)=4;
    cout<<"ok"<<endl;
    cout<<"\tThe pointer 'a' to the existing 'int' value: "<<all<<endl;
    cout<<"\tThe existing 'int' value, referred by the pointer 'a': "<<(*all)<<endl;
    cout<<"\t#bytes, necessary for storing the 'int' value, referred by the pointer 'a': "<<sizeof(*all)<<endl;
    cout<<"\t#bytes, necessary for storing the pointer 'a': "<<sizeof(all)<<endl<<endl;
    cout<<"\tSetting another pointer 'a2' as the same as the pointer 'a' ... ";
    all2=all;
    cout<<"ok"<<endl;
    cout<<"\tThe pointer 'a': "<<all<<endl;
    cout<<"\tThe pointer 'b': "<<all2<<endl;
    cout<<"\tThe 'int' value, referred by the pointer 'a': "<<(*all)<<endl;
    cout<<"\tThe 'int' value, referred by the pointer 'a2': "<<(*all2)<<endl;
    cout<<"\tModifying the 'int' value, referred by the pointer 'a2' ... ";
    (*all2)=-5;
    cout<<"ok"<<endl;
    cout<<"\tThe updated 'int' value, referred by the pointer 'a': "<<(*all)<<endl;
    cout<<"\tThe updated 'int' value, referred by the pointer 'a2': "<<(*all2)<<endl<<endl;
    cout.flush();
    
    /* Target #2 - manipulating a character by using the pointers! */
    letter_ptr=&letter;
    cout<<"\tThe 'char' value, referred by the pointer 'c': "<<letter<<endl;
    cout<<"\tThe pointer 'c': "<<letter_ptr<<endl;
    cout<<"\t#bytes, necessary for storing the 'char' value, referred by the pointer 'c': "<<sizeof(*letter_ptr)<<endl;
    cout<<"\t#bytes, necessary for storing the pointer 'c': "<<sizeof(letter_ptr)<<endl;
    cout<<"\tAdding '+25' to the 'char' value, referred by the pointer 'c' ... ";
    (*letter_ptr)+=25;
    cout<<"ok"<<endl;
    cout<<"\tThe 'char' value, referred by the pointer 'c': "<<letter<<endl;
    cout<<"\tThe pointer 'c': "<<letter_ptr<<endl<<endl;
    cout.flush();
    if(all!=nullptr) delete all;
    all=nullptr;
    all2=nullptr;
    return EXIT_SUCCESS;
}
