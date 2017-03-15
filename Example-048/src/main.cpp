/**************************************************************************************************
 * Examples in the C++ language (the 'Example-048' unit test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), March 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-048' unit test.
 **************************************************************************************************/
 
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

/// The main function for the <i>Example-048</i> unit test.
int main(void)
{
	int *all=nullptr,*all2=nullptr;
	char letter='A',*letter_ptr;

	/* This is the 'Example-048' unit test, where the C-like pointers are tested. */
    cout<<endl<<"\tThis is the 'Example-048' unit test in the C++ language."<<endl<<endl;
    cout.flush();

    /* TASK #1 - allocating a new 'int' value, referred through its C-like pointer. */
    cout<<"\tAllocating a new 'int' value, referred through its C-like pointer 'a' ... ";
    cout.flush();
    all=new int();
    cout<<"ok"<<endl;
    cout<<"\tThe C-like pointer 'a' to the new 'int' value is "<<all<<"."<<endl;
    cout<<"\tThe 'int' value, referred by the C-like pointer 'a', is "<<(*all)<<"."<<endl<<endl;
    cout<<"\tModifying the existing 'int' value, referred by the C-like pointer 'a' ... ";
    (*all)=4;
    cout<<"ok"<<endl;
    cout<<"\tThe C-like pointer 'a' to the existing 'int' value is "<<all<<"."<<endl;
    cout<<"\tThe existing 'int' value, referred by the C-like pointer 'a', is "<<(*all)<<"."<<endl;
    cout<<"\t#bytes, necessary for storing the 'int' value, referred by the C-like pointer 'a', is "<<sizeof(*all)<<"."<<endl;
    cout<<"\t#bytes, necessary for storing the C-like pointer 'a', is "<<sizeof(all)<<"."<<endl<<endl;
    cout.flush();
    
    /* TASK #3 - manipulating the content of the C-like pointers. */
    cout<<"\tSetting another C-like pointer 'a2' as the same as the C-like pointer 'a' ... ";
    all2=all;
    cout<<"ok"<<endl;
    cout<<"\tThe C-like pointer 'a' is "<<all<<"."<<endl;
    cout<<"\tThe C-like pointer 'b' is "<<all2<<"."<<endl;
    cout<<"\tThe 'int' value, referred by the C-like pointer 'a', is "<<(*all)<<"."<<endl;
    cout<<"\tThe 'int' value, referred by the C-like pointer 'a2', is "<<(*all2)<<"."<<endl;
    cout<<"\tModifying the 'int' value, referred by the C-like pointer 'a2' ... ";
    (*all2)=-5;
    cout<<"ok"<<endl;
    cout<<"\tThe updated 'int' value, referred by the C-like pointer 'a', is "<<(*all)<<"."<<endl;
    cout<<"\tThe updated 'int' value, referred by the C-like pointer 'a2', is "<<(*all2)<<"."<<endl<<endl;
    cout.flush();
    
     /* TASK #4 - manipulating a character by using the C-like pointers! */
    letter_ptr=&letter;
    cout<<"\tThe 'char' value, referred by the C-like pointer 'c', is '"<<letter<<"'."<<endl;
    cout<<"\tThe C-like pointer 'c' is "<<letter_ptr<<"."<<endl;
    cout<<"\t#bytes, necessary for storing the 'char' value, referred by the C-like pointer 'c', is "<<sizeof(*letter_ptr)<<"."<<endl;
    cout<<"\t#bytes, necessary for storing the C-like pointer 'c', is "<<sizeof(letter_ptr)<<"."<<endl;
    cout<<"\tAdding '+25' to the 'char' value, referred by the C-like pointer 'c' ... ";
    (*letter_ptr)+=25;
    cout<<"ok"<<endl;
    cout<<"\tThe 'char' value, referred by the C-like pointer 'c', is '"<<letter<<"'."<<endl;
    cout<<"\tThe C-like pointer 'c' is "<<letter_ptr<<"."<<endl<<endl;
    cout.flush();
    
    
    /* TASK #5 - deallocating the memory, referred by the C-like pointers in this test. */
    cout<<"\tDeallocating the memory, referred by the C-like pointers in this test ... ";
    if(all!=nullptr) delete all;
    all=nullptr;
    all2=nullptr;
    cout<<"ok"<<endl<<endl;
    cout.flush();
    return EXIT_SUCCESS;
}
