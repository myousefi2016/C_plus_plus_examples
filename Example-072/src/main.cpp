/**************************************************************************************************
 * Examples in the C++ language (the 'Example-072' unit test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), March 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-072' unit test.
 **************************************************************************************************/

#include <cstdlib>
#include <list>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/// This predicate recognizes the <i>odd</i> values.
bool isOdd(const int& value) { return ((value%2)!=0); }

/// This struct implements a predicate for recognizing the <i>even</i> values.
struct EvenStruct
{
	/// This operator recognizes the <i>odd</i> values.
	bool operator() (const int& value) { return ((value%2)==0); }
};

/// The main function for the <i>'Example-072'</i> unit test.
int main(void)
{
	/* This is the 'Example-071' unit test, where the 'list' containers are validated. */
    cout<<endl<<"\tThis is the 'Example-072' unit test in the C++ language."<<endl<<endl;
	cout.flush();
	
	/* TASK #1 - validating the empty constructor for the lists. */
    cout<<"\tCreating an empty list 'l0' of 'int' values ... ";
 	cout.flush();
 	list<int> l0;
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the list 'l0' is "<<l0.size()<<"."<<endl;
    if(l0.empty()==true) cout<<"\tThe list 'l0' is empty."<<endl;
 	else cout<<"\tThe list 'l0' is not empty."<<endl;
 	cout.flush();
 	cout<<"\tCreating 5 new locations in the list 'l0', storing the default 'int' value 100 ... ";
 	l0.assign(5,100);
 	cout<<"ok"<<endl;
 	if(l0.empty()==true) cout<<"\tThe list 'l0' is empty."<<endl;
 	else cout<<"\tThe list 'l0' is not empty."<<endl;
 	cout<<"\t#values in the list 'l0' is "<<l0.size()<<"."<<endl;
 	cout<<"\tThe 'int' values in the list 'l0' are:";
 	for(auto it=l0.cbegin();it!=l0.cend();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	cout<<"\tInitializing the first 3 locations in the list 'l0' (which is resized properly) ... ";
	cout.flush();
	l0.resize(3);
	cout<<"ok"<<endl<<"\t#values in the list 'l0' is "<<l0.size()<<"."<<endl;
 	cout<<"\tThe 'int' values in the list 'l0' are:";
 	for(auto it=l0.cbegin();it!=l0.cend();++it) cout<<" "<<(*it);
 	cout<<"."<<endl<<endl;
 	cout.flush();

	/* TASK #2 - creating a new list by giving a valid initialization. */
 	cout<<"\tCreating a list 'l1' with 4 'int values, initialized to '37' ... ";
 	list<int> l1 (4,37);
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the list 'l1' is "<<l1.size()<<"."<<endl;
 	cout<<"\tThe 'int' values in the list 'l1' are:";
 	for(auto it=l1.cbegin();it!=l1.cend();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	if(l1.empty()==true) cout<<"\tThe list 'l1' is empty."<<endl<<endl;
 	else cout<<"\tThe list 'l1' is not empty."<<endl<<endl;
	cout.flush();
	
	/* TASK #3 - creating a new list as the copy of another list. */
 	cout<<"\tCreating a list 'l2' as the copy of the list 'l1' ... ";
 	list<int> l2 (l1.begin(),l1.end());
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the list 'l2' is "<<l2.size()<<endl;
 	cout<<"\tThe 'int' values in the list 'l2' are:";
 	for(auto it=l2.cbegin();it!=l2.cend();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	if(l2.empty()==true) cout<<"\tThe list 'l2' is empty."<<endl;
 	else cout<<"\tThe list 'l2' is not empty."<<endl;
 	if(l1==l2) cout<<"\tThe lists 'l1' and 'l2' coincide position by position (with respect to the '==' operator)."<<endl<<endl;
 	else cout<<"\tThe lists 'l1' and 'l2' do not coincide position by position (with respect to the '==' operator)."<<endl<<endl;
 	cout.flush();
 	
 	/* TASK #4 - creating a new list as the copy of another list. */
 	cout<<"\tCreating a list 'l3' as the copy of the list 'l2' ... ";
 	list<int> l3(l2);
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the list 'l3': "<<l3.size()<<"."<<endl;
 	cout<<"\tThe 'int' values in the list 'l3' are:";
 	for(auto it=l3.cbegin();it!=l3.cend();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	if(l3.empty()==true) cout<<"\tThe list 'l3' is empty."<<endl;
 	else cout<<"\tThe list 'l3' is not empty."<<endl;
 	if(l2!=l3) cout<<"\tThe lists 'l2' and 'l3' do not coincide position by position (with respect to the '!=' operator)."<<endl<<endl;
 	else cout<<"\tThe lists 'l2' and 'l3' coincide position by position (with respect to the '!=' operator)."<<endl<<endl;
 	cout.flush();
 	
 	/* TASK #5 - creating a new list from a C-like array. */
 	int arr[] = { 34, 21, 1, 0, 5 };
 	cout<<"\tCreating a list 'l4' from a C-like array ... ";
 	list<int> l4 = list<int>(arr, arr + sizeof(arr) / sizeof(int) );
 	cout<<"ok"<<endl;
 	cout<<"\tThe 'int' values in the list 'l4' (in the forward direction) are:";
 	for(auto it=l4.begin();it!=l4.end();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	cout<<"\tThe 'int' values in the list 'l4' (in the reverse direction) are:";
 	for(auto it=l4.crbegin();it!=l4.crend();it++) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	cout<<"\tThe first 'int' value of the list 'l4' (in the forward direction) is "<<l4.front()<<"."<<endl;
 	cout<<"\tRemoving the first 'int' value of the list 'l4' (in the forward direction) ... ";
 	l4.pop_front();
 	cout<<"ok"<<endl;
 	cout<<"\tThe last 'int' value of the list 'l4' (in the forward direction) is "<<l4.back()<<"."<<endl;
 	cout<<"\tRemoving the last 'int' value of the list 'l4' (in the forward direction) ... ";
 	l4.pop_back();
 	cout<<"ok"<<endl;
 	cout<<"\tThe 'int' values in the list 'l4' (in the forward direction) are:";
 	for(auto it=l4.begin();it!=l4.end();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	cout<<"\tThe 'int' values in the list 'l4' (in the reverse direction) are:";
 	for(auto it=l4.rbegin();it!=l4.rend();it++) cout<<" "<<(*it);
 	cout<<"."<<endl<<endl;
 	cout.flush();
 	
 	/* TASK #6 - analysis of the list 'l4' */
 	cout<<"\t#values in the list 'l4' is "<<l4.size()<<"."<<endl;
 	cout<<"\tThe maximum size of the list 'l4' is "<<l4.max_size()<<"."<<endl;
    cout<<"\tResizing the size of the list 'l4' with the default value 33 ... ";
 	l4.resize(10,33);
 	cout<<"ok"<<endl;
 	cout<<"\tAdded several 'int' values to the list 'l4' ... ";
 	l4.push_back(3);
 	l4.push_front(2);
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the list 'l4' is "<<l4.size()<<"."<<endl;
    cout<<"\tThe 'int' values in the list 'l4' (in the forward direction) are:";
 	for(auto it=l4.begin();it!=l4.end();++it) cout<<" "<<(*it);
 	cout<<"."<<endl<<"\tRemoving the duplicated 'int' values in the list 'l4' ... ";
 	l4.unique();
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the list 'l4' is "<<l4.size()<<"."<<endl;
    cout<<"\tThe 'int' values in the list 'l4' (in the forward direction) are:";
 	for(auto it=l4.begin();it!=l4.end();++it) cout<<" "<<(*it);
 	cout<<"."<<endl<<"\tSorting the 'int' values in the list 'l4' ... ";
    l4.sort();
    cout<<"ok"<<endl;
 	cout<<"\t#values in the list 'l4' is "<<l4.size()<<endl;
    cout<<"\tThe 'int' values in the list 'l4' (in the forward direction) are:";
 	for(auto it=l4.begin();it!=l4.end();++it) cout<<" "<<(*it);
    cout<<endl<<"\tReversing the order of the 'int' values in the list 'l4' ... ";
    l4.reverse();
    cout<<"ok"<<endl;
    cout<<"\t#values in the list 'l4' is "<<l4.size()<<"."<<endl;
    cout<<"\tThe 'int' values in the list 'l4' (in the forward direction) are:";
 	for(auto it=l4.begin();it!=l4.end();++it) cout<<" "<<(*it);
    cout<<endl<<endl;
    cout.flush();
    
 	/* TASK #7 - allocating a new list 'l5' and modifying its 'int' values. */
    cout<<"\tAllocating a new list 'l5' ... ";
 	list<int> *l5=nullptr;
 	l5 = new list<int>();
 	cout<<"ok"<<endl;
 	cout<<"\tAdding new 'int' values to the list 'l5' ... ";
 	for(int i=1;i<5;i++) l5->push_back(i);
 	list<int>::iterator it=l5->begin();
 	it++;
 	l5->insert(it,10);
 	l5->insert(it,2,20);
 	--it;
 	vector<int> v (2,30);
 	l5->insert(it,v.begin(),v.end());
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the list 'l5' is "<<l5->size()<<"."<<endl;
    cout<<"\tThe 'int' values in the list 'l5' (in the forward direction) are:";
 	for(auto it=l5->begin();it!=l5->end();++it) cout<<" "<<(*it);
 	cout<<"."<<endl<<endl;
 	cout.flush();
 	
 	/* TASK #8 - comparing, swapping, and merging the lists 'l4' and 'l5'. */
 	cout<<"\tSorting the content of the lists 'l4' and 'l5' ... ";
 	l4.sort();
 	l5->sort();
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the list 'l4' is "<<l4.size()<<"."<<endl;
    cout<<"\tThe 'int' values in the list 'l4' (in the forward direction) are:";
 	for(auto it=l4.begin();it!=l4.end();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	cout<<"\t#values in the list 'l5' is "<<l5->size()<<"."<<endl;
    cout<<"\tThe 'int' values in the list 'l5' (in the forward direction) are:";
 	for(auto it=l5->begin();it!=l5->end();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	if(l4<*l5) cout<<"\tThe 'uint' values in the list 'l4' are 'strictly less than' the 'int' values in the list 'l5' (with respect to the '<' operator)."<<endl;
 	else cout<<"\tThe 'uint' values in the list 'l4' are not 'strictly less than' the 'int' values in the list 'l5' (with respect to the '<' operator)."<<endl;
 	if(l4<=*l5) cout<<"\tThe 'uint' values in the list 'l4' may be either 'strictly less than', or 'the same as' the 'int' values in the list 'l5' (with respect to the '<=' operator)."<<endl;
 	else cout<<"\tThe 'uint' values in the list 'l4' are not both 'strictly less than', and 'the same as' the 'int' values in the list 'l5' (with respect to the '<=' operator)."<<endl;
 	cout<<"\tMerging the lists 'l4' and 'l5', and saving the result in the existing list 'l4' ... ";
 	l4.merge(*l5);
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the list 'l4' is "<<l4.size()<<"."<<endl;
    cout<<"\tThe 'int' values in the list 'l4' (in the forward direction) are:";
 	for(auto it=l4.begin();it!=l4.end();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	cout<<"\t#values in the list 'l5' is "<<l5->size()<<"."<<endl;
 	cout<<endl<<"\tSwapping the content of the list 'l4' and 'l5' ... ";
 	l5->swap(l4);
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the list 'l4' is "<<l4.size()<<"."<<endl;
    cout<<"\tThe 'int' values in the list 'l4' (in the forward direction) are:";
    if(l4.empty()==true) cout<<" none";
    else { for(auto it=l4.begin();it!=l4.end();++it) cout<<" "<<(*it); }
 	cout<<"."<<endl;
 	cout<<"\t#values in the list 'l5' is "<<l5->size()<<"."<<endl;
    cout<<"\tThe 'int' values in the list 'l5' (in the forward direction) are:";
 	for(auto it=l5->begin();it!=l5->end();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	if(l4>*l5) cout<<"\tThe 'uint' values in the list 'l4' are 'strictly greater than' the 'int' values in the list 'l5' (with respect to the '>' operator)."<<endl;
 	else cout<<"\tThe 'uint' values in the list 'l4' are not 'strictly greater than' the 'int' values in the list 'l5' (with respect to the '>' operator)."<<endl;
 	if(l4>=*l5) cout<<"\tThe 'uint' values in the list 'l4' may be either 'strictly greater than', or 'the same as' the 'int' values in the list 'l5' (with respect to the '>=' operator)."<<endl;
 	else cout<<"\tThe 'uint' values in the list 'l4' are not both 'strictly greater than', and 'the same as' the 'int' values in the list 'l5' (with respect to the '>=' operator)."<<endl;
 	cout<<endl;
 	
 	/* TASK #9 - manipulating the 'int' values in the list 'l5'. */
 	it=l5->begin();
 	advance(it,2);
 	cout<<"\tRemoving the 'int' value "<<(*it)<<" in position 2 ... ";
 	l5->erase(it);
 	cout<<"ok"<<endl<<"\t#values in the list 'l5' is "<<l5->size()<<"."<<endl;
 	cout<<"\tThe 'int' values in the list 'l5' (in the forward direction) are:";
 	for(auto it=l5->begin();it!=l5->end();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	it=l5->begin();
 	advance(it,3);
 	list<int>::iterator it1=l5->begin();
 	advance(it1,5);
 	cout<<"\tRemoving the 'int' values of the list 'l5' from position 3 to 4 ... ";
 	l5->erase(it,it1);
 	cout<<"ok"<<endl<<"\t#values in the list 'l5' is "<<l5->size()<<"."<<endl;
 	cout<<"\tThe 'int' values in the list 'l5' (in the forward direction) are:";
 	for(auto it=l5->begin();it!=l5->end();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	cout<<"\tRemoving all occurrences of the 'int' value 20 from the list 'l5' ... ";
 	l5->remove(20);
 	cout<<"ok"<<endl<<"\t#values in the list 'l5' is "<<l5->size()<<"."<<endl;
 	cout<<"\tThe 'int' values in the list 'l5' (in the forward direction) are:";
 	for(auto it=l5->begin();it!=l5->end();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	cout<<"\tRemoving the odd 'int' values from the list 'l5' (see the 'isOdd()' custom function) ... ";
 	l5->remove_if(isOdd);
 	cout<<"ok"<<endl<<"\t#values in the list 'l5' is "<<l5->size()<<"."<<endl;
 	cout<<"\tThe 'int' values in the list 'l5' (in the forward direction) are:";
 	for(auto it=l5->begin();it!=l5->end();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	cout<<"\tAssigning the remaining 'int' values of the list 'l5' also to the list 'l4' ... ";
 	l4.assign(l5->begin(),l5->end());
 	cout<<"ok"<<endl<<"\t#values in the list 'l4' is "<<l4.size()<<"."<<endl;
 	cout<<"\tThe 'int' values in the list 'l4' (in the forward direction) are:";
 	for(auto it=l4.begin();it!=l4.end();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	cout<<"\tRemoving the even 'int' values from the list 'l5' (see the 'EvenStruct' custom struct) ... ";
 	l5->remove_if(EvenStruct());
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the list 'l5' is "<<l5->size()<<"."<<endl;
    cout<<"\tThe 'int' values in the list 'l5' (in the forward direction) are:";
    if(l5->empty()==true) cout<<" none";
    else { for(auto it=l5->begin();it!=l5->end();++it) cout<<" "<<(*it); }
 	cout<<"."<<endl<<endl;
 	cout.flush();
 	
 	/* TASK #10 - transferring the 'int' values between two lists. */
 	cout<<"\tUpdating the content of the existing lists 'l3' and 'l4' ... ";
 	l3.clear();
 	l4.clear();
 	for (int i=1; i<=4; ++i) l3.emplace_back(i);
 	for (int i=1; i<=3; ++i) l4.emplace_front(i*10);
 	l4.emplace(l4.begin(),50);
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the list 'l3' is "<<l3.size()<<"."<<endl;
    cout<<"\tThe 'int' values in the list 'l3' (in the forward direction) are:";
    if(l3.empty()==true) cout<<" none";
    else { for(auto it=l3.begin();it!=l3.end();++it) cout<<" "<<(*it); }
 	cout<<"."<<endl;
 	cout<<"\t#values in the list 'l4' is "<<l4.size()<<"."<<endl;
    cout<<"\tThe 'int' values in the list 'l4' (in the forward direction) are:";
    if(l4.empty()==true) cout<<" none";
    else { for(auto it=l4.begin();it!=l4.end();++it) cout<<" "<<(*it); }
 	cout<<"."<<endl;
 	cout<<"\tTransferring several 'int' values between the lists 'l3' and 'l4' ... ";
 	it=l3.begin();
 	++it;
 	l3.splice(it,l4);
 	l4.splice(l4.begin(),l3,it);
 	it=l3.begin();
 	std::advance(it,3);
 	l3.splice(l3.begin(),l3,it,l3.end());
 	cout<<"ok"<<endl<<"\tThe 'int' values in the list 'l3' (in the forward direction) are:";
    if(l3.empty()==true) cout<<" none";
    else { for(auto it=l3.begin();it!=l3.end();++it) cout<<" "<<(*it); }
 	cout<<"."<<endl;
 	cout<<"\t#values in the list 'l4' is "<<l4.size()<<"."<<endl;
    cout<<"\tThe 'int' values in the list 'l4' (in the forward direction) are:";
    if(l4.empty()==true) cout<<" none";
    else { for(auto it=l4.begin();it!=l4.end();++it) cout<<" "<<(*it); }
 	cout<<"."<<endl<<endl;
 	cout.flush();
	
	/* TASK #11 - allocating a new C-like array by using the allocator of the list 'l5' */
 	cout<<"\tAllocating a new C-like array of 7 locations by using the allocator of the list 'l5' ... ";
 	int *p = l5->get_allocator().allocate(7);
 	cout<<"ok"<<endl<<"\tInitializing the locations of the new C-like array ... ";
 	for(int i=0;i<7;i++) l5->get_allocator().construct(&p[i],i);
 	cout<<"ok"<<endl<<"\tThe 'int' values in the new allocated array are:";
 	for(int i=0;i<7;i++) cout<<" "<<*(p+i);
 	cout<<"."<<endl;
 	cout<<"\tDeallocating the new C-like array ... ";
 	for(int i=0;i<7;i++) l5->get_allocator().destroy(&p[i]);
 	l5->get_allocator().deallocate(p,7);
 	cout<<"ok"<<endl;
 	p=nullptr;

	/* TASK #12 - deallocating all lists */
    cout<<endl<<"\tDeallocating the content of all lists ... ";
    l0.clear();
    l1.clear();
    l2.clear();
    l3.clear();
    l4.clear();
    if(l5!=nullptr) delete l5;
    l5=nullptr;
    cout<<"ok"<<endl<<endl;
    cout.flush();
    return EXIT_SUCCESS;
}
