/**************************************************************************************************
 * Examples in the C++ language (the 'Example-071' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), April 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-071' Test.
 **************************************************************************************************/

#include <cstdlib>
#include <deque>
#include <iostream>
#include <algorithm>
using namespace std;

/// The main function for the <i>'Example-071'</i> Test.
int main(void)
{
	/* This is the 'Example-071' Test, where the 'deque' containers are validated. */
    cout<<endl<<"\tThis is the 'Example-071' Test in the C++ language."<<endl<<endl;
	cout.flush();
	
	/* TASK #1 - validating the empty constructor for the deques. */
    cout<<"\tCreating an empty deque 'd0' of 'int' values ... ";
 	cout.flush();
 	deque<int> d0;
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the deque 'd0' is "<<d0.size()<<"."<<endl;
    if(d0.empty()==true) cout<<"\tThe deque 'd0' is empty."<<endl;
 	else cout<<"\tThe deque 'd0' is not empty."<<endl;
 	cout<<"\tCreating 5 new locations in the deque 'd0', storing the default 'int' value 100 ... ";
 	d0.assign(5,100);
 	cout<<"ok"<<endl;
 	if(d0.empty()==true) cout<<"\tThe deque 'd0' is empty."<<endl;
 	else cout<<"\tThe deque 'd0' is not empty."<<endl;
 	cout<<"\t#values in the deque 'd0' is "<<d0.size()<<"."<<endl;
 	cout<<"\tThe 'int' values in the deque 'd0' are:";
 	for(auto it=d0.cbegin();it!=d0.cend();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	cout<<"\tInitializing the first 3 locations in the deque 'd0' (which is resized properly) ... ";
	cout.flush();
 	#ifndef _MSC_VER

		/* Here, we are not using the 'Microsoft Visual Studio' compiler. Thus, we can exploit the 'assign()' member function with the deque iterators. */
		d0.assign(d0.begin(), d0.begin() + 3);

	#else

		/* Here, we are using the 'Microsoft Visual Studio' compiler, thus the deque iterators are not derefencable. Here, we simply exploit the 'resize()' member function. */
		d0.resize(3);

	#endif
	
	/* If we arrive here, then we can continue. */
 	cout<<"ok"<<endl<<"\t#values in the deque 'd0' is "<<d0.size()<<"."<<endl;
 	cout<<"\tThe 'int' values in the deque 'd0' are:";
 	for(auto it=d0.cbegin();it!=d0.cend();++it) cout<<" "<<(*it);
 	cout<<"."<<endl<<endl;
 	cout.flush();
 	
 	/* TASK #2 - creating a new deque by giving a valid initialization. */
 	cout<<"\tCreating a deque 'd1' with 4 'int values, initialized to '37' ... ";
 	deque<int> d1 (4,37);
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the deque 'd1' is "<<d1.size()<<"."<<endl;
 	cout<<"\tThe 'int' values in the deque 'd1' are:";
 	for(auto it=d1.cbegin();it!=d1.cend();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	if(d1.empty()==true) cout<<"\tThe deque 'd1' is empty."<<endl<<endl;
 	else cout<<"\tThe deque 'd1' is not empty."<<endl<<endl;
	cout.flush();
 	
 	/* TASK #3 - creating a new deque as the copy of another deque. */
 	cout<<"\tCreating a deque 'd2' as the copy of the deque 'd1' ... ";
 	deque<int> d2 (d1.begin(),d1.end());
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the deque 'd2' is "<<d2.size()<<"."<<endl;
 	cout<<"\tThe 'int' values in the deque 'd2' are:";
 	for(auto it=d2.cbegin();it!=d2.cend();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	if(d2.empty()==true) cout<<"\tThe deque 'd2' is empty."<<endl;
 	else cout<<"\tThe deque 'd2' is not empty."<<endl;
 	if(d1==d2) cout<<"\tThe deques 'd1' and 'd2' coincide position by position (with respect to the '==' operator)."<<endl<<endl;
 	else cout<<"\tThe deques 'd1' and 'd2' do not coincide position by position (with respect to the '==' operator)."<<endl<<endl;
 	cout.flush();
 	
 	/* TASK #4 - creating a new deque as the copy of another deque. */
 	cout<<"\tCreating a deque 'd3' as the copy of the deque 'd2' ... ";
 	deque<int> d3(d2);
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the deque 'd3' is "<<d3.size()<<"."<<endl;
 	cout<<"\tThe 'int' values in the deque 'd3' are:";
 	for(auto it=d3.cbegin();it!=d3.cend();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	if(d3.empty()==true) cout<<"\tThe deque 'd3' is empty."<<endl;
 	else cout<<"\tThe deque 'd3' is not empty."<<endl;
 	if(d2!=d3) cout<<"\tThe deques 'd2' and 'd3' do not coincide position by position (with respect to the '!=' operator)."<<endl<<endl;
 	else cout<<"\tThe deques 'd2' and 'd3' coincide position by position (with respect to the '!=' operator)."<<endl<<endl;
 	cout.flush();
 	
 	/* TASK #5 - creating a new deque from a C-like array. */
 	int arr[] = { 34, 21, 1, 0, 5 };
 	cout<<"\tCreating a deque 'd4' from a C-like array ... ";
 	deque<int> d4 = deque<int>(arr, arr + sizeof(arr) / sizeof(int) );
 	cout<<"ok"<<endl;
 	cout<<"\tThe 'int' values in the deque 'd4' (in the forward direction) are:";
 	for(unsigned int k=0;k<d4.size();k++) cout<<" "<<d4.at(k);
 	cout<<"."<<endl;
 	cout<<"\tThe 'int' values in the deque 'd4' (in the reverse direction) are:";
 	for(auto it=d4.crbegin();it!=d4.crend();it++) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	cout<<"\tThe first 'int' value of the deque 'd4' (in the forward direction) is "<<d4.front()<<"."<<endl;
 	cout<<"\tRemoving the first 'int' value of the deque 'd4' (in the forward direction) ... ";
 	d4.pop_front();
 	cout<<"ok"<<endl;
 	cout<<"\tThe last 'int' value of the deque 'd4' (in the forward direction) is "<<d4.back()<<"."<<endl;
 	cout<<"\tRemoving the last 'int' value of the deque 'd4' (in the forward direction) ... ";
 	d4.pop_back();
 	cout<<"ok"<<endl;
 	cout<<"\tThe 'int' values in the deque 'd4' (in the forward direction) are:";
 	for(unsigned int k=0;k<d4.size();k++) cout<<" "<<d4.at(k);
 	cout<<"."<<endl;
	cout.flush();
 	
 	/* TASK #6 - analysis of the deque 'd4' */
 	cout<<"\t#values in the deque 'd4' is "<<d4.size()<<"."<<endl;
 	cout<<"\tThe maximum size of the deque 'd4' is "<<d4.max_size()<<"."<<endl;
 	cout<<"\tResizing the size of the deque 'd4' with the default value 56 ... ";
 	d4.resize(10,56);
 	cout<<"ok"<<endl;
 	cout<<"\tThe 'int' values in the deque 'd4' (in the forward direction) are:";
 	for(unsigned int k=0;k<d4.size();k++) cout<<" "<<d4[k];
 	cout<<"."<<endl;
 	cout<<"\tThe 'int' values in the deque 'd4' (in the reverse direction) are:";
 	for(auto it=d4.rbegin();it!=d4.rend();it++) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	cout<<"\tAdded several 'int' values to the deque 'd4' ... ";
 	d4.push_back(3);
 	d4.push_front(2);
 	cout<<"ok"<<endl;
 	cout<<"\tThe 'int' values in the deque 'd4' (in the forward direction) are:";
 	for(unsigned int k=0;k<d4.size();k++) cout<<" "<<d4[k];
 	cout<<"."<<endl;
 	cout<<"\t#values in the deque 'd4' is "<<d4.size()<<"."<<endl;
 	cout<<"\tThe maximum size of the deque 'd4' is "<<d4.max_size()<<"."<<endl;
 	cout<<"\tShrinking to fit the deque 'd4' ... ";
 	d4.shrink_to_fit();
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the deque 'd4' is "<<d4.size()<<"."<<endl<<endl;
 	cout.flush();
 	
 	/* TASK #7 - allocating a new deque 'd5' and modifying its 'int' values. */
    cout<<"\tAllocating a new deque 'd5' ... ";
 	deque<int> *d5=nullptr;
 	d5 = new deque<int>(7);
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the deque 'd5' is "<<d5->size()<<"."<<endl;
 	cout<<"\tThe 'int' values in the deque 'd5' (in the forward direction) are:";
 	for(unsigned int k=0;k<d5->size();k++) cout<<" "<<d5->at(k);
 	cout<<"."<<endl;
 	cout<<"\tUpdating the 'int' values of the deque 'd5' ... ";
 	for(unsigned int k=0;k<d5->size();k++) (*d5)[k]=k;
 	cout<<"ok"<<endl;
 	cout<<"\tThe 'int' values in the deque 'd5' are:";
 	for(auto it=d5->cbegin();it!=d5->cend();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	cout<<"\tAdding several 'int' values to the deque 'd5' ... ";
 	d5->push_back(33);
 	d5->push_back(0);
 	d5->push_back(2);
 	d5->push_front(4);
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the deque 'd5' is "<<d5->size()<<"."<<endl;
 	cout<<"\tThe 'int' values in the deque 'd5' are:";
 	for(auto it=d5->begin();it!=d5->end();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	cout<<"\tThe last 'int' value of the deque 'd5' is "<<d5->back()<<"."<<endl;
 	cout<<"\tRemoving the last 'int' value from the deque 'd5' ... ";
 	d5->pop_back();
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the deque 'd5' is "<<d5->size()<<"."<<endl;
 	cout<<"\tThe 'int' values in the deque 'd5' are:";
 	for(auto it=d5->cbegin();it!=d5->cend();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	cout<<"\tAdding the 'int' value 22 to the beginning of the deque 'd5' ... ";
 	d5->insert(d5->begin(),22);
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the deque 'd5' is "<<d5->size()<<"."<<endl;
 	cout<<"\tThe 'int' values in the deque 'd5' ar:";
 	for(auto it=d5->cbegin();it!=d5->cend();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	cout<<"\tConcatenating the deque 'd5' with the deque 'd4' ... ";
 	d5->insert(d5->end(),d4.begin(),d4.end());
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the deque 'd5' is "<<d5->size()<<"."<<endl;
 	cout<<"\tThe 'int' values in the deque 'd5' are:";
 	for(auto it=d5->cbegin();it!=d5->cend();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	cout<<"\tThe 'int' value of position 5 in the deque 'd5' is "<<d5->at(5)<<"."<<endl;
 	cout<<"\tRemoving the 'int' value of position 5 in the deque 'd5' ... ";
 	d5->erase(d5->begin()+5);
 	cout<<"ok"<<endl;
 	cout<<"\tThe 'int' values in the deque 'd5' are:";
 	for(auto it=d5->cbegin();it!=d5->cend();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	cout<<"\tRemoving the first 5 values from the deque 'd5' ... ";
 	d5->erase(d5->begin(),d5->begin()+5);
 	cout<<"ok"<<endl;
 	cout<<"\tThe 'int' values in the deque 'd5' are:";
 	for(auto it=d5->cbegin();it!=d5->cend();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	cout<<"\tThe 'int' value of position 2 in the deque 'd5' is "<<d5->at(2)<<"."<<endl;
 	cout<<"\tThe 'int' value of position 4 in the deque 'd5' is "<<d5->at(4)<<"."<<endl;
 	cout<<"\tSwapping the 'int' values of positions 2 and 4 in the deque 'd5' ... ";
 	iter_swap(d5->begin()+4,d5->begin()+2);
 	cout<<"ok"<<endl;
 	cout<<"\tThe 'int' value of position 2 in the deque 'd5' is "<<d5->at(2)<<"."<<endl;
 	cout<<"\tThe 'int' value of position 4 in the deque 'd5' is "<<d5->at(4)<<"."<<endl;
 	cout<<"\tAdding new 'int' values to the deque 'd5' ... ";
 	d5->emplace(d5->end(),20);
 	d5->emplace_back(-2);
 	d5->emplace_back(-4);
 	cout<<"ok"<<endl;
 	cout<<"\tThe 'int' values in the deque 'd5' are:";
 	for(auto it=d5->cbegin();it!=d5->cend();++it) cout<<" "<<(*it);
 	cout<<"."<<endl<<endl;
 	cout.flush();
 	
 	/* TASK #8 - swapping the content of two deques 'd2' and 'd5'. */
 	cout<<"\tThe 'int' values in the deque 'd2' are:";
 	for(auto it=d2.cbegin();it!=d2.cend();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	cout<<"\tThe 'int' values in the deque 'd5' are:";
 	for(auto it=d5->cbegin();it!=d5->cend();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	if(d2<*d5) cout<<"\tThe 'int' values in the deque 'd2' are 'strictly less than' the 'int' values in the deque 'd5' (see the '<' operator)."<<endl;
 	else cout<<"\tThe 'int' values in the deque 'd2' are not 'strictly less than' the 'int' values in the deque 'd5' (see the '<' operator)."<<endl;
 	if(d2<=*d5) cout<<"\tThe 'int' values in the deque 'd2' may be either 'strictly less than', or 'the same as' the 'int' values in the deque 'd5' (see the '<=' operator)."<<endl;
 	else cout<<"\tThe 'int' values in the deque 'd2' are not both 'strictly less than', and 'the same as' the 'int' values in the deque 'd5' (see the '<=' operator)."<<endl;
 	cout<<"\tSwapping the content of the deques 'd2' and 'd5' ... ";
 	d2.swap(*d5);
 	cout<<"ok"<<endl;
 	cout<<"\tThe 'int' values in the deque 'd2' are:";
 	for(auto it=d2.cbegin();it!=d2.cend();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	cout<<"\tThe 'int' values in the deque 'd5' are:";
 	for(auto it=d5->cbegin();it!=d5->cend();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	if(d2>*d5) cout<<"\tThe 'int' values in the deque 'd2' are 'strictly greater than' the 'int' values in the deque 'd5' (see the '>' operator)."<<endl;
 	else cout<<"\tThe 'int' values in the deque 'd2' are not 'strictly greater than' the 'int' values in the deque 'd5' (see the '>' operator)."<<endl;
 	if(d2>=*d5) cout<<"\tThe 'int' values in the deque 'd2' may be either 'strictly greater than', or 'the same as' the 'int' values in the deque 'd5' (see the '>=' operator)."<<endl;
 	else cout<<"\tThe 'int' values in the deque 'd2' are not both 'strictly greater than', and 'the same as' the 'int' values in the deque 'd5' (see the '>=' operator)."<<endl;
 	cout<<endl;
 	cout.flush();
 	
 	/* TASK #9 - allocating a new C-like array by using the allocator of the deque 'd5' */
 	cout<<"\tAllocating a new C-like array of 7 locations by using the allocator of the deque 'd5' ... ";
 	int *p = d5->get_allocator().allocate(7);
 	cout<<"ok"<<endl<<"\tInitializing the locations of the new C-like array ... ";
 	for(int i=0;i<7;i++) d5->get_allocator().construct(&p[i],i);
 	cout<<"ok"<<endl<<"\tThe 'int' values in the new allocated array are:";
 	for(int i=0;i<7;i++) cout<<" "<<*(p+i);
 	cout<<endl;
 	cout<<"\tDeallocating the new C-like array ... ";
 	for(int i=0;i<7;i++) d5->get_allocator().destroy(&p[i]);
 	d5->get_allocator().deallocate(p,7);
 	cout<<"ok"<<endl;
 	p=nullptr;
 	
 	/* TASK #10 - deallocating all deques */
    cout<<endl<<"\tDeallocating the content of all deques ... ";
    d0.clear();
    d1.clear();
    d2.clear();
    d3.clear();
    d4.clear();
    if(d5!=nullptr) delete d5;
    d5=nullptr;
    cout<<"ok"<<endl<<endl;
    return EXIT_SUCCESS;
}
