/**************************************************************************************************
 * Examples in the C++ language (the 'Example-077' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), April 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-077' Test.
 **************************************************************************************************/

#include <cstdlib>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
#ifndef ulong
	typedef unsigned long ulong;
#endif

/// The custom function for comparing two <i>'ulong'</i> values.
bool compare_ulong_values(const ulong& a,const ulong& b) { return (a<b); }

/// The custom struct for comparing two <i>'ulong'</i> values.
struct CompareUlongValues
{
	/// This operator compares two <i>'ulong'</i> values.
	bool operator()(const ulong& a,const ulong&b) { return (a>b); }
};

/// The main function for the <i>'Example-077'</i> Test.
int main(void)
{
	/* This is the 'Example-077' Test, where the 'multiset' containers are validated. */
	cout<<endl<<"\tThis is the 'Example-077' Test in the C++ language."<<endl<<endl;
  	cout.flush();
  	
  	/* TASK #1 - validating the empty constructor for the multisets. */
   	cout<<"\tCreating an empty multiset 's0' of 'ulong' values ... ";
 	cout.flush();
 	multiset<ulong> s0;
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the multiset 's0' is "<<s0.size()<<"."<<endl;
    if(s0.empty()==true) cout<<"\tThe multiset 's0' is empty."<<endl<<endl;
 	else cout<<"\tThe multiset 's0' is not empty."<<endl<<endl;
 	cout.flush();
  	
  	/* TASK #2 - validating the constructor, which takes into the account a range of 'ulong' values. */
 	ulong ls[]= {50,30,20,10,40,10,40,10,10};
  	cout<<"\tCreating a multiset 's1' by starting from a range of 'ulong' values ... ";
  	multiset<ulong> s1 (ls,ls+9);
  	cout<<"ok"<<endl;
  	cout<<"\t#values in the multiset 's1' is "<<s1.size()<<"."<<endl;
    if(s1.empty()==true) cout<<"\tThe multiset 's1' is empty."<<endl;
 	else cout<<"\tThe multiset 's1' is not empty."<<endl;
  	cout<<"\tThe maximum capacity of the multiset 's1' is "<<s1.max_size()<<"."<<endl;
  	cout<<"\tEnumerating the 'ulong' values in the multiset 's1' (in the forward direction):";
  	for(auto it=s1.cbegin();it!=s1.cend();it++) cout<<" "<<(*it);
  	cout<<"."<<endl;
 	cout<<"\tEnumerating the 'ulong' values in the multiset 's1' (in the reverse direction):";
  	for(auto it=s1.crbegin();it!=s1.crend();it++) cout<<" "<<(*it);
  	cout<<"."<<endl<<endl<<"\tRetrieving the #duplicated instances of the 'ulong' values in the multiset 's1' as follows:"<<endl<<endl;
  	for(unsigned int k=0;k<9;k++) 
  	{ 
  		if(k<8) cout<<"\t#duplicated instances of the 'ulong' value "<<ls[k]<<" is "<<s1.count(ls[k])<<";"<<endl;
  		else cout<<"\t#duplicated instances of the 'ulong' value "<<ls[k]<<" is "<<s1.count(ls[k])<<"."<<endl;
  	}
  	
  	/* If we arrive here, all is ok. */
  	cout<<endl;
  	cout.flush();
  	
  	/* TASK #3 - swapping the content of two multisets 's0' and 's1'. */
  	cout<<"\t#values in the multiset 's0' is "<<s0.size()<<"."<<endl;
    if(s0.empty()==true) cout<<"\tThe multiset 's0' is empty."<<endl;
 	else cout<<"\tThe multiset 's0' is not empty."<<endl;
 	cout<<"\t#values in the multiset 's1' is "<<s1.size()<<"."<<endl;
    if(s1.empty()==true) cout<<"\tThe multiset 's1' is empty."<<endl;
 	else cout<<"\tThe multiset 's1' is not empty."<<endl;
 	cout<<"\tSwapping the content of the multisets 's0' and 's1' ... ";
 	s1.swap(s0);
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the multiset 's0' is "<<s0.size()<<"."<<endl;
    if(s0.empty()==true) cout<<"\tThe multiset 's0' is empty."<<endl;
 	else cout<<"\tThe multiset 's0' is not empty."<<endl;
 	cout<<"\t#values in the multiset 's1' is "<<s1.size()<<"."<<endl;
    if(s1.empty()==true) cout<<"\tThe multiset 's1' is empty."<<endl;
 	else cout<<"\tThe multiset 's1' is not empty."<<endl;
 	if(s1<s0) cout<<"\tThe 'ulong' values in the multiset 's1' are 'strictly less than' the 'ulong' values in the multiset 's0' (with respect to the '<' operator)."<<endl;
 	else cout<<"\tThe 'ulong' values in the multiset 's1' are not 'strictly less than' the 'ulong' values in the multiset 's0' (with respect to the '<' operator)."<<endl;
 	if(s1>s0) cout<<"\tThe 'ulong' values in the multiset 's1' are 'strictly greater than' the 'ulong' values in the multiset 's0' (with respect to the '>' operator)."<<endl;
 	else cout<<"\tThe 'ulong' values in the multiset 's1' are not 'strictly greater than' the 'ulong' values in the multiset 's0' (with respect to the '>' operator)."<<endl;
 	if(s1<=s0) cout<<"\tThe 'ulong' values in the multiset 's1' may be either 'strictly less than', or 'the same as' the 'ulong' values in the multiset 's0' (with respect to the '<=' operator)."<<endl;
 	else cout<<"\tThe 'ulong' values in the multiset 's1' are not both 'strictly less than', and 'the same as' the 'ulong' values in the multiset 's0' (with respect to the '<=' operator)."<<endl;
 	if(s1>=s0) cout<<"\tThe 'ulong' values in the multiset 's1' may be either 'strictly greater than', or 'the same as' the 'ulong' values in the multiset 's0' (with respect to the '>=' operator)."<<endl;
 	else cout<<"\tThe 'ulong' values in the multiset 's1' are not both 'strictly greater than', and 'the same as' the 'ulong' values in the multiset 's0' (with respect to the '>=' operator)."<<endl;
 	cout<<endl;
 	cout.flush();
 	
 	/* TASK #4 - validating the constructor, which creates a copy of an existing multiset of 'ulong' values. */
  	cout<<"\tCreating a new multiset 's2' as the copy of the multiset 's0' ... ";
  	multiset<ulong> s2=multiset<ulong>(s0);
  	cout<<"ok"<<endl;
  	cout<<"\t#values in the multiset 's2' is "<<s2.size()<<"."<<endl;
    if(s2.empty()==true) cout<<"\tThe multiset 's2' is empty."<<endl;
 	else cout<<"\tThe multiset 's2' is not empty."<<endl;
 	if(s2!=s0) cout<<"\tThe 'ulong' values in the multisets 's0' and 's2' do not coincide position by position (with respect to the '!=' operator)."<<endl;
 	else cout<<"\tThe 'ulong' values in the multisets 's0' and 's2' coincide position by position (with respect to the '!=' operator)."<<endl;
 	cout<<"\tEnumerating the 'ulong' values in the multiset 's2' (in the forward direction):";
  	for(auto it=s2.begin();it!=s2.cend();it++) cout<<" "<<(*it);
  	cout<<"."<<endl;
  	cout<<"\tEnumerating the 'ulong' values in the multiset 's2' (in the reverse direction):";
  	for(auto it=s2.rbegin();it!=s2.rend();it++) cout<<" "<<(*it);
  	cout<<"."<<endl<<endl;
  	cout.flush();
 	
 	/* TASK #5 - validating the constructor, which creates a copy of an existing multiset of 'ulong' values. */
  	cout<<"\tCreating a new multiset 's3' as the copy of the multiset 's2' ... ";
  	multiset<ulong> s3=multiset<ulong>(s2.begin(),s2.end());
  	cout<<"ok"<<endl;
  	cout<<"\t#values in the multiset 's3' is "<<s3.size()<<"."<<endl;
    if(s3.empty()==true) cout<<"\tThe multiset 's3' is empty."<<endl;
 	else cout<<"\tThe multiset 's3' is not empty."<<endl;
 	if(s2==s3) cout<<"\tThe 'ulong' values in the multisets 's2' and 's3' coincide position by position (with respect to the '==' operator)."<<endl;
 	else cout<<"\tThe 'ulong' values in the multisets 's2' and 's3' do not coincide position by position (with respect to the '==' operator)."<<endl;
 	if(s3.count(45)==0) cout<<"\tThe multiset 's3' does not contain the 'ulong' value 45."<<endl;
 	else cout<<"\tThe multiset 's3' contains "<<s3.count(45)<<" duplicates of the 'ulong' value 45."<<endl;
 	if(s3.count(10)==0) cout<<"\tThe multiset 's3' does not contain the 'ulong' value 10."<<endl;
 	else cout<<"\tThe multiset 's3' contains "<<s3.count(10)<<" duplicates of the 'ulong' value 10."<<endl;
 	cout.flush();
 	auto it=s3.upper_bound(15);
 	cout<<"\tThe first 'ulong' value of the multiset 's3', which is considered to go after 15 (see the 'multiset::upper_bound()' member function), is "<<(*it)<<"."<<endl;
 	auto it1=s3.lower_bound(29);
 	cout<<"\tThe first 'ulong' value of the multiset 's3', which is not considered to go before 29 (see the 'multiset::lower_bound()' member function), is "<<(*it1)<<"."<<endl;
 	cout.flush();
 	auto it2=s3.equal_range(35);
 	cout<<"\tThe first 'ulong' value of the multiset 's3', which is not considered to go before 35 (see the 'multiset::equal_range()' member function), is "<<(ulong)(*(it2.first))<<"."<<endl;
 	cout<<"\tThe first 'ulong' value of the multiset 's3', which is considered to go after 35 (see the 'multiset::equal_range()' member function), is "<<(ulong)(*(it2.second))<<"."<<endl<<endl;
 	cout.flush();
 	
 	/* TASK #6 - validating the constructor, which creates a new multiset with a custom function. */
 	cout<<"\tCreating a new multiset 's4' by using the 'compare_ulong_values()' custom function for sorting the 'ulong' values ... ";
 	multiset<ulong,bool(*)(const ulong&,const ulong&)> s4(compare_ulong_values);
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the multiset 's4' is "<<s4.size()<<"."<<endl;
    if(s4.empty()==true) cout<<"\tThe multiset 's4' is empty."<<endl;
 	else cout<<"\tThe multiset 's4' is not empty."<<endl;
 	cout<<"\tAdding several 'ulong' values to the multiset 's4' ... ";
 	s4.insert(20);
 	s4.insert(20);
 	s4.emplace(10);
 	s4.emplace(10);
 	s4.emplace_hint(s4.begin(),10);
 	s4.emplace_hint(s4.begin(),100);
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the multiset 's4' is "<<s4.size()<<"."<<endl;
    if(s4.empty()==true) cout<<"\tThe multiset 's4' is empty."<<endl;
 	else cout<<"\tThe multiset 's4' is not empty."<<endl;
 	cout<<"\tEnumerating the 'ulong' values in the multiset 's4' (in the forward direction):";
  	for(auto it=s4.begin();it!=s4.cend();it++) cout<<" "<<(*it);
  	cout<<"."<<endl;
  	cout<<"\tEnumerating the 'ulong' values in the multiset 's4' (in the reverse direction):";
  	for(auto it=s4.rbegin();it!=s4.rend();it++) cout<<" "<<(*it);
  	cout<<"."<<endl;
  	if(s4.find(45)==s4.end()) cout<<"\tThe 'ulong' value 45 does not belong to the multiset 's4'."<<endl;
  	else cout<<"\tThe 'ulong' value 45 is duplicated "<<s4.count(45)<<" times in the multiset 's4'."<<endl;
 	if(s4.find(10)==s4.end()) cout<<"\tThe 'ulong' value 10 does not belong to the multiset 's4'."<<endl;
 	else
 	{
 		cout<<"\tThe 'ulong' value 10 is duplicated "<<s4.count(10)<<" times in the multiset 's4'."<<endl;
 		cout<<"\tRemoving the 'ulong' value '10' from the multiset 's4' ... ";
 		s4.erase(10);
 		cout<<"ok"<<endl;
 		cout<<"\t#values in the multiset 's4' is "<<s4.size()<<"."<<endl;
 		if(s4.find(10)==s4.end()) cout<<"\tThe 'ulong' value 10 does not belong to the multiset 's4'."<<endl;
 		else cout<<"\tThe 'ulong' value 10 still belongs to the multiset 's4'."<<endl;
 	}
 	
 	/* Enumerating the 'ulong' values in the multiset 's4'. */
 	cout<<"\tEnumerating the 'ulong' values in the multiset 's4' (in the forward direction):";
  	for(auto it=s4.begin();it!=s4.cend();it++) cout<<" "<<(*it);
  	cout<<"."<<endl;
  	cout<<"\tEnumerating the 'ulong' values in the multiset 's4' (in the reverse direction):";
  	for(auto it=s4.rbegin();it!=s4.rend();it++) cout<<" "<<(*it);
  	cout<<"."<<endl<<endl;
  	cout.flush();
  	
  	/* TASK #7 - validating the constructor, which creates a new multiset with a custom (struct) function. */
  	cout<<"\tCreating a new multiset 's5' by using the 'CompareUlongValues' custom struct for sorting the 'ulong' values ... ";
  	multiset<ulong,CompareUlongValues> *s5 = new multiset<ulong,CompareUlongValues>();
  	cout<<"ok"<<endl;
  	cout<<"\tAdding several 'ulong' values to the multiset 's5' ... ";
  	for(ulong k=0;k<5;k++) s5->insert(3*k);
  	cout<<"ok"<<endl;
  	cout<<"\tEnumerating the 'ulong' values in the multiset 's5' (in the forward direction):";
  	for(auto it=s5->begin();it!=s5->cend();it++) cout<<" "<<(*it);
  	cout<<"."<<endl;
  	cout<<"\tEnumerating the 'ulong' values in the multiset 's5' (in the reverse direction):";
  	for(auto it=s5->rbegin();it!=s5->rend();it++) cout<<" "<<(*it);
  	cout<<"."<<endl<<endl;
  	cout.flush();
  	
  	/* TASK #8 - allocating a new C-like array by using the allocator of the multiset 's5' */
 	cout<<"\tAllocating a new C-like array of 7 locations by using the allocator of the multiset 's5' ... ";
 	ulong *p = s5->get_allocator().allocate(7);
 	cout<<"ok"<<endl<<"\tInitializing the locations of the new C-like array ... ";
 	for(ulong i=0;i<7;i++) s5->get_allocator().construct(&p[i],i);
 	cout<<"ok"<<endl<<"\tThe 'ulong' values in the new allocated array are:";
 	for(ulong i=0;i<7;i++) cout<<" "<<*(p+i);
 	cout<<"."<<endl;
 	cout<<"\tDeallocating the new C-like array ... ";
 	for(ulong i=0;i<7;i++) s5->get_allocator().destroy(&p[i]);
 	s5->get_allocator().deallocate(p,7);
 	cout<<"ok"<<endl<<endl;
 	cout.flush();
 	p=nullptr;
 	
 	/* TASK #9: deallocating all auxiliary data structures in this test. */
 	cout<<"\tDeallocating all multisets in this test ... ";
 	s0.clear();
	s1.clear();
	s2.clear();
	s3.clear();
	s4.clear();
	if(s5!=nullptr) { s5->clear(); delete s5; s5=nullptr; }
	cout<<"ok"<<endl<<endl;
	cout.flush();
	return EXIT_SUCCESS;
}
