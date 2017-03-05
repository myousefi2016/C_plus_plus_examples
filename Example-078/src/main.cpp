/**********************************************************************************************
 * Examples in the C++ language (the test 'Example-078')
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), March 2017
 *
 * main.cpp - the source file, implementing the main function for the test 'Example-078'.
 **********************************************************************************************/

#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <forward_list>
using namespace std;
#ifndef uint
	typedef unsigned int uint;
#endif

/// This predicate checks whether an <i>'uint'</i> value is an <i>odd</i> number.
bool isOdd(const uint &v) { return ( (v%2)!=0); }

/// This struct implements a custom policy for comparing <i>'uint'</i> values.
struct isEvenStruct
{
	public:
	
	/// This operator checks whether an <i>'uint'</i> value is an <i>even</i> number.
	bool operator()(const uint &v) { return ( (v%2)==0); }
};

// a predicate implemented as a function:
//bool single_digit (const int& value) { return (value<10); }

// a predicate implemented as a class:
//class is_odd_class
//{
//public:
//  bool operator() (const int& value) {return (value%2)==1; }
//} is_odd_object;


/// The main function for the <i>Example-078</i> unit test.
int main(void)
{
	/* This is the example 'Example-078', where the 'forward_list' containers are validated. */
	cout<<endl<<"\tThis is the example 'Example-078' in the C++ language"<<endl<<endl;
    cout.flush();
    
    /* TASK #1 - validating the empty constructor for the 'forward_list' containers. */
    cout<<"\tCreating an empty single-linked list 'f0' of 'uint' values ... ";
 	cout.flush();
 	forward_list<uint> f0;
 	cout<<"ok"<<endl;
    if(f0.empty()==true) cout<<"\tThe single-linked list 'f0' is empty"<<endl;
 	else cout<<"\tThe single-linked list 'f0' is not empty"<<endl;
 	cout.flush();
 	cout<<"\tThe maximum capacity of the single-linked list 'f0' is: "<<f0.max_size()<<endl;
 	cout<<"\tResizing the number of the 'uint' values as 10 in the single-linked list 'f0' ... ";
 	f0.resize(10);
 	cout<<"ok"<<endl;
 	if(f0.empty()==true) cout<<"\tThe single-linked list 'f0' is empty"<<endl;
 	else cout<<"\tThe single-linked list 'f0' is not empty"<<endl;
 	cout.flush();
 	cout<<"\tThe 'uint' values in the single-linked list 'f0' are (enumerated in the forward direction): ";
 	for(auto u : f0) cout<<u<<" ";
 	cout<<endl<<"\tRemoving iteratively the 'uint' values from the single-linked list 'f0' ... ";
 	for(uint k=0;k<10;k++) f0.pop_front();
 	cout<<"ok"<<endl;
 	if(f0.empty()==true) cout<<"\tThe single-linked list 'f0' is empty"<<endl;
 	else cout<<"\tThe single-linked list 'f0' is not empty"<<endl;
 	cout<<endl<<"\tAdding iteratively several 'uint' values to the front of the single-linked list 'f0' ... ";
 	f0.push_front(30);
 	f0.push_front(22);
 	f0.push_front(100);
 	f0.push_front(50);
 	f0.push_front(30);
 	f0.push_front(45);
 	f0.push_front(80);
 	f0.push_front(0);
 	f0.push_front(80);
 	cout<<"ok"<<endl;
 	cout<<"\tThe 'uint' values in the single-linked list 'f0' are (enumerated in the forward direction): ";
 	for(auto u : f0) cout<<u<<" ";
 	cout<<endl<<"\tReversing the order of the 'uint' values in the single-linked list 'f0' ... ";
 	f0.reverse();
 	cout<<"ok"<<endl<<"\tThe 'uint' values in the single-linked list 'f0' are (enumerated in the forward direction): ";
 	for(auto u : f0) cout<<u<<" ";
 	cout<<endl<<"\tSorting the 'uint' values in the single-linked list 'f0' (wrt the comparison operator '<') ... ";
 	f0.sort();
 	cout<<"ok"<<endl<<"\tThe 'uint' values in the single-linked list 'f0' are (enumerated in the forward direction): ";
 	for(auto u : f0) cout<<u<<" ";
 	cout<<endl<<"\tRemoving the duplicated 'uint' values in the single-linked list 'f0' ... ";
 	f0.unique();
 	cout<<"ok"<<endl<<"\tThe 'uint' values in the single-linked list 'f0' are (enumerated in the forward direction): ";
 	for(auto u : f0) cout<<u<<" ";
 	cout<<endl<<"\tSorting the 'uint' values in the single-linked list 'f0' (wrt the 'std::greater()' comparison policy) ... ";
 	f0.sort(std::greater<uint>());
 	cout<<"ok"<<endl<<"\tThe 'uint' values in the single-linked list 'f0' are (enumerated in the forward direction): ";
 	for(auto u : f0) cout<<u<<" ";
 	cout<<endl<<"\tRemoving the 100 'uint' value from the single-linked list 'f0' ... ";
 	f0.remove(100);
 	cout<<"ok"<<endl<<"\tThe 'uint' values in the single-linked list 'f0' are (enumerated in the forward direction): ";
 	for(auto u : f0) cout<<u<<" ";
 	cout<<endl;
 	cout<<"\tRemoving all odd 'uint' values from the single-linked list 'f0' ... ";
 	f0.remove_if(isOdd);
 	cout<<"ok"<<endl<<"\tThe 'uint' values in the single-linked list 'f0' are (enumerated in the forward direction): ";
 	for(auto u : f0) cout<<u<<" ";
 	cout<<endl;
 	cout<<"\tRemoving all even 'uint' values from the single-linked list 'f0' ... ";
 	f0.remove_if(isEvenStruct());
 	cout<<"ok"<<endl<<"\tThe 'uint' values in the single-linked list 'f0' are (enumerated in the forward direction): ";
 	if(f0.empty()) cout<<"none";
 	else for(auto u : f0) cout<<u<<" ";
 	cout<<endl<<endl;
 	cout.flush();
 	
 	/* TASK #2 - validating the C++11 initializer list for the 'forward_list' containers. */
	cout<<"\tCreating a new single-linked list 'f1' of 'uint' values by using the C++11 initializer list ... ";
 	forward_list<uint> f1 { 10, 20, 30, 40, 50 };
 	cout<<"ok"<<endl;
 	if(f1.empty()==true) cout<<"\tThe single-linked list 'f1' is empty"<<endl;
 	else cout<<"\tThe single-linked list 'f1' is not empty"<<endl;
 	cout<<"\tThe 'uint' values in the single-linked list 'f1' are (enumerated in the forward direction): ";
 	for(auto u : f1) cout<<u<<" ";
 	cout<<endl<<"\tThe first 'uint' value in the single-linked list 'f1' is: "<<f1.front()<<endl<<endl;
 	cout.flush();
 	
 	/* TASK #3 - validating the copy constructor for the 'forward_list' containers. */
 	cout<<"\tCreating a new single-linked list 'f2' of 'uint' values as a copy of the single-linked list 'f1' ... ";
 	forward_list<uint> f2(f1.begin(),f1.end());
 	cout<<"ok"<<endl;
 	if(f2.empty()==true) cout<<"\tThe single-linked list 'f2' is empty"<<endl;
 	else cout<<"\tThe single-linked list 'f2' is not empty"<<endl;
 	cout<<"\tThe 'uint' values in the single-linked list 'f2' are (enumerated in the forward direction): ";
 	for(auto u=f2.cbegin();u!=f2.cend();u++) cout<<(*u)<<" ";
 	cout<<endl;
 	if(f1==f2) cout<<"\tThe single-linked lists 'f1' and 'f2' coincide position by position"<<endl<<endl;
 	else cout<<"\tThe single-linked lists 'f1' and 'f2' do not coincide position by position"<<endl<<endl;
 	cout.flush();
 	
 	/* TASK #4 - validating the copy constructor for the 'forward_list' containers. */
 	cout<<"\tCreating a new single-linked list 'f3' of 'uint' values as a copy of the single-linked list 'f2' ... ";
 	forward_list<uint> f3(f2);
 	cout<<"ok"<<endl;
 	if(f3.empty()==true) cout<<"\tThe single-linked list 'f3' is empty"<<endl;
 	else cout<<"\tThe single-linked list 'f3' is not empty"<<endl;
 	cout<<"\tThe 'uint' values in the single-linked list 'f3' are (enumerated in the forward direction): ";
 	for(auto u=f3.begin();u!=f3.end();u++) cout<<(*u)<<" ";
 	cout<<endl;
 	if(f2==f3) cout<<"\tThe single-linked lists 'f2' and 'f3' coincide position by position"<<endl<<endl;
 	else cout<<"\tThe single-linked lists 'f2' and 'f3' do not coincide position by position"<<endl<<endl;
 	cout.flush();
 	
 	/* TASK #5 - validating the constructor, which creates a new 'forward_list' container, and initializes it with several copies of the same 'uint' value. */
 	cout<<"\tAllocating and initializing a new single-linked list 'f4' with multiple copies of the same 'uint' value ... ";
 	forward_list<uint> *f4=nullptr;
 	f4=new forward_list<uint>(5,3);
 	cout<<"ok"<<endl;
 	if(f4->empty()==true) cout<<"\tThe single-linked list 'f4' is empty"<<endl;
 	else cout<<"\tThe single-linked list 'f4' is not empty"<<endl;
 	cout<<"\tThe 'uint' values in the single-linked list 'f4' are (enumerated in the forward direction): ";
 	for(auto u=f4->begin();u!=f4->end();u++) cout<<(*u)<<" ";
 	cout<<endl<<"\tAdding several 'uint' values to the front of the single-linked list 'f4' ... ";
 	auto it=f4->before_begin();
 	f4->emplace_after(it,100);
 	f4->emplace_after(it,200);
 	f4->emplace_after(it,300);
 	f4->emplace_front(50);
 	f4->insert_after(it,33);
 	f4->insert_after(it,{3,2,1});
 	f4->insert_after(f4->cbefore_begin(),f3.begin(),f3.end());
 	cout<<"ok"<<endl;
	cout<<"\tThe 'uint' values in the single-linked list 'f4' are (enumerated in the forward direction): ";
 	for(auto u=f4->begin();u!=f4->end();u++) cout<<(*u)<<" ";
 	cout<<endl<<"\tDistributing the existing 'uint' values in the single-linked list 'f4' between the single-linked lists 'f0' and 'f4' ... ";
 	it=f4->begin();
 	std::advance(it,9);
 	f0.splice_after(f0.before_begin(),*f4,f4->before_begin(),it);
 	cout<<"ok"<<endl;
 	cout<<"\tThe 'uint' values in the single-linked list 'f0' are (enumerated in the forward direction): ";
 	for(auto u : f0) cout<<u<<" ";
 	cout<<endl<<"\tThe 'uint' values in the single-linked list 'f4' are (enumerated in the forward direction): ";
 	for(auto u : *f4) cout<<u<<" ";
 	cout<<endl<<endl;
 	
 	/* TASK #6 - comparing the content of the 'forward_list' containers. */
 	if(f0==*f4) cout<<"\tThe single-linked lists 'f0' and 'f4' contain the same 'uint' values position by position (wrt the '==' operator)"<<endl;
 	else cout<<"\tThe single-linked lists 'f0' and 'f4' do not contain the same 'uint' values position by position (wrt the '==' operator)"<<endl;
 	if(f0!=*f4) cout<<"\tThe single-linked lists 'f0' and 'f4' do not contain the same 'uint' values position by position (wrt the '!=' operator)"<<endl;
 	else cout<<"\tThe single-linked lists 'f0' and 'f4' contain the same 'uint' values position by position (wrt the '==' operator)"<<endl;
 	if(f0<*f4) cout<<"\tThe 'uint' values in the single-linked list 'f0' are 'strictly less than' the 'uint' values in the single-linked list 'f4' (wrt the '<' operator)"<<endl;
 	else cout<<"\tThe 'uint' values in the single-linked list 'f0' are not 'strictly less than' the 'uint' values in the single-linked list 'f4' (wrt the '<' operator)"<<endl;
 	if(f0>*f4) cout<<"\tThe 'uint' values in the single-linked list 'f0' are 'strictly larger than' the 'uint' values in the single-linked list 'f4' (wrt the '>' operator)"<<endl;
 	else cout<<"\tThe 'uint' values in the single-linked list 'f0' are not 'strictly larger than' the 'uint' values in the single-linked list 'f4' (wrt the '>' operator)"<<endl;
 	if(f0<=*f4) cout<<"\tThe 'uint' values in the single-linked list 'f0' may be either 'strictly less than' or 'the same as' the 'uint' values in the single-linked list 'f4' (wrt the '<=' operator)"<<endl;
 	else cout<<"\tThe 'uint' values in the single-linked list 'f0' are not either 'strictly less than' the 'uint' values or 'the same as' in the single-linked list 'f4' (wrt the '<=' operator)"<<endl;
 	if(f0>=*f4) cout<<"\tThe 'uint' values in the single-linked list 'f0' may be either 'strictly larger than' or 'the same as' the 'uint' values in the single-linked list 'f4' (wrt the '>=' operator)"<<endl;
 	else cout<<"\tThe 'uint' values in the single-linked list 'f0' are not either 'strictly larger than' the 'uint' values or 'the same as' in the single-linked list 'f4' (wrt the '>=' operator)"<<endl;
 	cout<<endl;
 	if(*f4<f0) cout<<"\tThe 'uint' values in the single-linked list 'f4' are 'strictly less than' the 'uint' values in the single-linked list 'f0' (wrt the '<' operator)"<<endl;
 	else cout<<"\tThe 'uint' values in the single-linked list 'f4' are not 'strictly less than' the 'uint' values in the single-linked list 'f0' (wrt the '<' operator)"<<endl;
 	if(*f4>f0) cout<<"\tThe 'uint' values in the single-linked list 'f4' are 'strictly larger than' the 'uint' values in the single-linked list 'f0' (wrt the '>' operator)"<<endl;
 	else cout<<"\tThe 'uint' values in the single-linked list 'f4' are not 'strictly larger than' the 'uint' values in the single-linked list 'f0' (wrt the '>' operator)"<<endl;
 	if(*f4<=f0) cout<<"\tThe 'uint' values in the single-linked list 'f4' may be either 'strictly less than' or 'the same as' the 'uint' values in the single-linked list 'f0' (wrt the '<=' operator)"<<endl;
 	else cout<<"\tThe 'uint' values in the single-linked list 'f4' are not either 'strictly less than' the 'uint' values or 'the same as' in the single-linked list 'f0' (wrt the '<=' operator)"<<endl;
 	if(*f4>=f0) cout<<"\tThe 'uint' values in the single-linked list 'f4' may be either 'strictly larger than' or 'the same as' the 'uint' values in the single-linked list 'f0' (wrt the '>=' operator)"<<endl;
 	else cout<<"\tThe 'uint' values in the single-linked list 'f4' are not either 'strictly larger than' the 'uint' values or 'the same as' in the single-linked list 'f0' (wrt the '>=' operator)"<<endl;
 	cout<<endl;
 	
 	/* TASK #7 - swapping the content of the 'forward_list' containers 'f4' and 'f3'. */
 	cout<<"\tThe 'uint' values in the single-linked list 'f3' are (enumerated in the forward direction): ";
 	for(auto u=f3.begin();u!=f3.end();u++) cout<<(*u)<<" ";
 	cout<<endl<<"\tThe 'uint' values in the single-linked list 'f4' are (enumerated in the forward direction): ";
 	for(auto u=f4->cbegin();u!=f4->cend();u++) cout<<(*u)<<" ";
 	cout<<endl<<"\tSwapping the content of the single-linked lists 'f3' and 'f4' ... ";
 	f3.swap(*f4);
 	cout<<"ok"<<endl;
 	cout<<"\tThe 'uint' values in the single-linked list 'f3' are (enumerated in the forward direction): ";
 	for(auto u=f3.begin();u!=f3.end();u++) cout<<(*u)<<" ";
 	cout<<endl<<"\tThe 'uint' values in the single-linked list 'f4' are (enumerated in the forward direction): ";
 	for(auto u=f4->cbegin();u!=f4->cend();u++) cout<<(*u)<<" ";
 	cout<<endl<<endl;
 	cout.flush();
 	
 	/* TASK #8 - merging the content of several 'forward_list' containers.*/
 	cout<<"\tSorting the 'uint' values in the single-linked list 'f3' (wrt the comparison operator '<') ... ";
 	f3.sort();
 	cout<<"ok"<<endl<<"\tSorting the 'uint' values in the single-linked list 'f4' (wrt the comparison operator '<') ... ";
 	f4->sort();
 	cout<<"ok"<<endl<<"\tMerging and saving the 'uint' values of the single-linked lists 'f3' and 'f4' in another single-linked list 'f5' ... ";
 	forward_list<uint> f5;
 	f5.assign(f4->begin(),f4->end());
 	f5.merge(f3);
 	cout<<"ok"<<endl;
 	cout<<"\tRemoving duplicated 'uint' values from the single-linked list 'f5' ... ";
 	f5.unique();
 	cout<<"ok"<<endl<<"\tThe 'uint' values in the single-linked list 'f5' are (enumerated in the forward direction): ";
 	for(auto u=f5.begin();u!=f5.end();u++) cout<<(*u)<<" ";
 	cout<<endl<<"\tRemoving all 'uint' values in the single-linked list 'f5' ... ";
 	f5.erase_after(f5.before_begin(),f5.end());
 	cout<<"ok"<<endl;
 	if(f5.empty()) cout<<"\tThe single-linked list 'f5' is empty"<<endl<<endl;
 	else cout<<"\tThe single-linked list 'f5' is not empty"<<endl<<endl;
 	cout.flush();
 	
 	/* TASK #9 - allocating a new C-like array by using the allocator of the single-linked 'f4'. */
 	cout<<"\tAllocating a new C-like array of 9 locations by using the allocator of the single-linked list 'f4' ... ";
 	uint *p = f4->get_allocator().allocate(9);
 	cout<<"ok"<<endl<<"\tInitializing the locations of the new C-like array ... ";
 	for(uint i=0;i<9;i++) f4->get_allocator().construct(&p[i],i);
 	cout<<"ok"<<endl<<"\tThe 'uint' values in the new allocated array:";
 	for(uint i=0;i<9;i++) cout<<" "<<*(p+i);
 	cout<<endl;
 	cout<<"\tDeallocating the new C-like array ... ";
 	for(uint i=0;i<9;i++) f4->get_allocator().destroy(&p[i]);
 	f4->get_allocator().deallocate(p,9);
 	cout<<"ok"<<endl<<endl;
 	cout.flush();
 	p=nullptr;
    
    /* TASK #?: deallocating all auxiliary data structures in this test. */
    cout<<"\tDeallocating all 'forward_list' containers in this test ... ";
    f0.clear();
    f1.clear();
    f2.clear();
    f3.clear();
    if(f4!=nullptr) { f4->clear(); delete f4; f4=nullptr; }
    f5.clear();
    cout<<"ok"<<endl<<endl;
    cout.flush();
	return EXIT_SUCCESS;   
}

/* 
erase_after
*/