/**************************************************************************************************
 * Examples in the C++ language (the 'Example-076' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), June 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-076' Test.
 **************************************************************************************************/

#include <cstdlib>
#include <iostream>
#include <set>
using namespace std;

/// The custom function for comparing two <i>'long'</i> values.
bool compare_long_values(const long& a,const long& b) { return (a<b); }

/// The custom struct for comparing two <i>'long'</i> values.
struct CompareLongValues
{
	/// This operator compares two <i>'long'</i> values.
	bool operator()(const long& a,const long&b) { return (a>b); }
};

/// The main function for the <i>'Example-076'</i> Test.
int main(void)
{
	/* This is the 'Example-076' Test, where the 'set' containers are validated. */
    cout<<endl<<"\tThis is the 'Example-076' Test in the C++ language."<<endl<<endl;
    cout.flush();
    
    /* TASK #1 - validating the empty constructor for the sets. */
    cout<<"\tCreating an empty set 's0' of 'long' values ... ";
 	cout.flush();
 	set<long> s0;
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the set 's0' is "<<s0.size()<<"."<<endl;
    if(s0.empty()==true) cout<<"\tThe set 's0' is empty."<<endl<<endl;
 	else cout<<"\tThe set 's0' is not empty."<<endl<<endl;
	cout << "\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();
	
	/* TASK #2 - validating the constructor, which takes into the account a range of 'long' values. */
 	long ls[]= {50,30,20,10,40};
  	cout<<"\tCreating a set 's1' by starting from a range of 'long' values ... ";
  	set<long> s1 (ls,ls+5);
  	cout<<"ok"<<endl;
  	cout<<"\t#values in the set 's1' is "<<s1.size()<<"."<<endl;
    if(s1.empty()==true) cout<<"\tThe set 's1' is empty."<<endl;
 	else cout<<"\tThe set 's1' is not empty."<<endl;
  	cout<<"\tThe maximum capacity of the set 's1' is "<<s1.max_size()<<"."<<endl;
  	cout<<"\tEnumerating the 'long' values in the set 's1' (in the forward direction):";
  	for(auto it=s1.cbegin();it!=s1.cend();it++) cout<<" "<<(*it);
  	cout<<"."<<endl;
 	cout<<"\tEnumerating the 'long' values in the set 's1' (in the reverse direction):";
  	for(auto it=s1.crbegin();it!=s1.crend();it++) cout<<" "<<(*it);
  	cout<<"."<<endl<<endl;
  	cout << "\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();
  	
  	/* TASK #3 - swapping the content of two sets 's0' and 's1'. */
  	cout<<"\t#values in the set 's0' is "<<s0.size()<<"."<<endl;
    if(s0.empty()==true) cout<<"\tThe set 's0' is empty."<<endl;
 	else
 	{
 		cout<<"\tThe set 's0' is not empty, and contains the following the 'long' values:";
 		for(auto it=s0.cbegin();it!=s0.cend();it++) cout<<" "<<(*it);
  		cout<<"."<<endl;
 	}
 	cout<<"\t#values in the set 's1' is "<<s1.size()<<"."<<endl;
    if(s1.empty()==true) cout<<"\tThe set 's1' is empty."<<endl;
 	else
 	{
 		cout<<"\tThe set 's1' is not empty, and contains the following the 'long' values:";
 		for(auto it=s1.cbegin();it!=s1.cend();it++) cout<<" "<<(*it);
  		cout<<"."<<endl;
 	}
  	cout<<"\tThe 'long' values in the set 's1':"<<endl<<endl;
  	if(s1<s0) cout<<"\t\t-) are 'strictly less than' the 'long' values in the set 's0' (with respect to the '<' operator);"<<endl;
 	else cout<<"\t\t-) are not 'strictly less than' the 'long' values in the set 's0' (with respect to the '<' operator);"<<endl;
 	if(s1>s0) cout<<"\t\t-) are 'strictly greater than' the 'long' values in the set 's0' (with respect to the '>' operator);"<<endl;
 	else cout<<"\t\t-) are not 'strictly greater than' the 'long' values in the set 's0' (with respect to the '>' operator);"<<endl;
 	if(s1<=s0) cout<<"\t\t-) may be either 'strictly less than', or 'the same as' the 'long' values in the set 's0' (with respect to the '<=' operator);"<<endl;
 	else cout<<"\t\t-) are not both 'strictly less than', and 'the same as' the 'long' values in the set 's0' (with respect to the '<=' operator)."<<endl;
 	if(s1>=s0) cout<<"\t\t-) may be either 'strictly greater than', or 'the same as' the 'long' values in the set 's0' (with respect to the '>=' operator)."<<endl<<endl;
 	else cout<<"\t\t-) are not both 'strictly greater than', and 'the same as' the 'long' values in the set 's0' (with respect to the '>=' operator)."<<endl<<endl;
 	cout<<"\tSwapping the content of the sets 's0' and 's1' ... ";
 	s1.swap(s0);
 	cout<<"ok"<<endl;
 	if(s0.empty()==true) cout<<"\tThe set 's0' is empty."<<endl;
 	else
 	{
 		cout<<"\tThe set 's0' is not empty, and contains the following the 'long' values:";
 		for(auto it=s0.cbegin();it!=s0.cend();it++) cout<<" "<<(*it);
  		cout<<"."<<endl;
 	}
 	cout<<"\t#values in the set 's1' is "<<s1.size()<<"."<<endl;
    if(s1.empty()==true) cout<<"\tThe set 's1' is empty."<<endl;
 	else
 	{
 		cout<<"\tThe set 's1' is not empty, and contains the following the 'long' values:";
 		for(auto it=s1.cbegin();it!=s1.cend();it++) cout<<" "<<(*it);
  		cout<<"."<<endl;
 	}
  	cout<<"\tThe 'long' values in the set 's1':"<<endl<<endl;
  	if(s1<s0) cout<<"\t\t-) are 'strictly less than' the 'long' values in the set 's0' (with respect to the '<' operator);"<<endl;
 	else cout<<"\t\t-) are not 'strictly less than' the 'long' values in the set 's0' (with respect to the '<' operator);"<<endl;
 	if(s1>s0) cout<<"\t\t-) are 'strictly greater than' the 'long' values in the set 's0' (with respect to the '>' operator);"<<endl;
 	else cout<<"\t\t-) are not 'strictly greater than' the 'long' values in the set 's0' (with respect to the '>' operator);"<<endl;
 	if(s1<=s0) cout<<"\t\t-) may be either 'strictly less than', or 'the same as' the 'long' values in the set 's0' (with respect to the '<=' operator);"<<endl;
 	else cout<<"\t\t-) are not both 'strictly less than', and 'the same as' the 'long' values in the set 's0' (with respect to the '<=' operator)."<<endl;
 	if(s1>=s0) cout<<"\t\t-) may be either 'strictly greater than', or 'the same as' the 'long' values in the set 's0' (with respect to the '>=' operator)."<<endl<<endl;
 	else cout<<"\t\t-) are not both 'strictly greater than', and 'the same as' the 'long' values in the set 's0' (with respect to the '>=' operator)."<<endl<<endl;
 	cout << "\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();
	
	/* TASK #4 - validating the constructor, which creates a copy of an existing set of 'long' values. */
  	cout<<"\tCreating a new set 's2' as the copy of the set 's0' ... ";
  	set<long> s2=set<long>(s0);
  	cout<<"ok"<<endl;
  	cout<<"\t#values in the set 's2' is "<<s2.size()<<"."<<endl;
    if(s2.empty()==true) cout<<"\tThe set 's2' is empty."<<endl;
 	else cout<<"\tThe set 's2' is not empty."<<endl;
 	if(s2!=s0) cout<<"\tThe 'long' values in the sets 's0' and 's2' do not coincide position by position (with respect to the '!=' operator)."<<endl;
 	else cout<<"\tThe 'long' values in the sets 's0' and 's2' coincide position by position (with respect to the '!=' operator)."<<endl;
 	cout<<"\tEnumerating the 'long' values in the set 's2' (in the forward direction):";
  	for(auto it=s2.begin();it!=s2.cend();it++) cout<<" "<<(*it);
  	cout<<"."<<endl;
  	cout<<"\tEnumerating the 'long' values in the set 's2' (in the reverse direction):";
  	for(auto it=s2.rbegin();it!=s2.rend();it++) cout<<" "<<(*it);
  	cout<<"."<<endl<<endl;
  	cout << "\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();
	
	/* TASK #5 - validating the constructor, which creates a copy of an existing set of 'long' values. */
  	cout<<"\tCreating a new set 's3' as the copy of the set 's2' ... ";
  	set<long> s3=set<long>(s2.begin(),s2.end());
  	cout<<"ok"<<endl;
  	cout<<"\t#values in the set 's3' is "<<s3.size()<<"."<<endl;
    if(s3.empty()==true) cout<<"\tThe set 's3' is empty."<<endl;
 	else cout<<"\tThe set 's3' is not empty."<<endl;
 	if(s2==s3) cout<<"\tThe 'long' values in the sets 's2' and 's3' coincide position by position (with respect to the '==' operator)."<<endl;
 	else cout<<"\tThe 'long' values in the sets 's2' and 's3' do not coincide position by position (with respect to the '==' operator)."<<endl;
 	if(s3.count(45)==0) cout<<"\tThe set 's3' does not contain the 'long' value 45."<<endl;
 	else cout<<"\tThe set 's3' contains the 'long' value 45."<<endl;
 	if(s3.count(10)==0) cout<<"\tThe set 's3' does not contain the 'long' value 10."<<endl;
 	else cout<<"\tThe set 's3' contains the 'long' value 10."<<endl;
 	cout.flush();
 	auto it=s3.upper_bound(15);
 	cout<<"\tThe first 'long' value of the set 's3', which is considered to go after 15 (see the 'set::upper_bound()' member function), is "<<(*it)<<"."<<endl;
 	auto it1=s3.lower_bound(29);
 	cout<<"\tThe first 'long' value of the set 's3', which is not considered to go before 29 (see the 'set::lower_bound()' member function), is "<<(*it1)<<"."<<endl;
 	cout.flush();
 	auto it2=s3.equal_range(35);
 	cout<<"\tThe first 'long' value of the set 's3', which is not considered to go before 35 (see the 'set::equal_range()' member function), is "<<(long)(*(it2.first))<<"."<<endl;
 	cout<<"\tThe first 'long' value of the set 's3', which is considered to go after 35 (see the 'set::equal_range()' member function), is "<<(long)(*(it2.second))<<"."<<endl<<endl;
 	cout.flush();
 	cout << "\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();
 	
 	/* TASK #6 - validating the constructor, which creates a new set with a custom function. */
 	cout<<"\tCreating a new set 's4' by using the 'compare_long_values()' custom function for sorting the 'long' values ... ";
 	set<long,bool(*)(const long&,const long&)> s4(compare_long_values);
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the set 's4' is "<<s4.size()<<"."<<endl;
    if(s4.empty()==true) cout<<"\tThe set 's4' is empty."<<endl;
 	else cout<<"\tThe set 's4' is not empty."<<endl;
 	cout<<"\tAdding several 'long' values to the set 's4' ... ";
 	s4.insert(20);
 	s4.insert(-2);
 	s4.emplace(10);
 	s4.emplace_hint(s4.begin(),-100);
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the set 's4' is "<<s4.size()<<"."<<endl;
    if(s4.empty()==true) cout<<"\tThe set 's4' is empty."<<endl;
 	else cout<<"\tThe set 's4' is not empty."<<endl;
 	cout<<"\tEnumerating the 'long' values in the set 's4' (in the forward direction):";
  	for(auto it=s4.begin();it!=s4.cend();it++) cout<<" "<<(*it);
  	cout<<"."<<endl;
  	cout<<"\tEnumerating the 'long' values in the set 's4' (in the reverse direction):";
  	for(auto it=s4.rbegin();it!=s4.rend();it++) cout<<" "<<(*it);
  	cout<<"."<<endl;
  	if(s4.find(45)==s4.end()) cout<<"\tThe 'long' value 45 does not belong to the set 's4'."<<endl;
  	else cout<<"\tThe 'long' value 45 belongs to the set 's4'."<<endl;
 	if(s4.find(10)==s4.end()) cout<<"\tThe 'long' value 10 does not belong to the set 's4'."<<endl;
 	else
 	{
 		cout<<"\tThe 'long' value 10 belongs to the set 's4'."<<endl;
 		cout<<"\tRemoving the 'long' value '10' from the set 's4' ... ";
 		s4.erase(10);
 		cout<<"ok"<<endl;
 		cout<<"\t#values in the set 's4' is "<<s4.size()<<"."<<endl;
 		if(s4.find(10)==s4.end()) cout<<"\tThe 'long' value 10 does not belong to the set 's4'."<<endl;
 		else cout<<"\tThe 'long' value 10 still belongs to the set 's4'."<<endl;
 	}
	
	/* Enumerating the 'long' values in the set 's4'. */
 	cout<<"\tEnumerating the 'long' values in the set 's4' (in the forward direction):";
  	for(auto it=s4.begin();it!=s4.cend();it++) cout<<" "<<(*it);
  	cout<<"."<<endl;
  	cout<<"\tEnumerating the 'long' values in the set 's4' (in the reverse direction):";
  	for(auto it=s4.rbegin();it!=s4.rend();it++) cout<<" "<<(*it);
  	cout<<"."<<endl<<endl << "\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();
	
	/* TASK #7 - validating the constructor, which creates a new set with a custom (struct) function. */
  	cout<<"\tCreating a new set 's5' by using the 'CompareLongValues' custom struct for sorting the 'long' values ... ";
  	set<long,CompareLongValues> *s5 = new set<long,CompareLongValues>();
  	cout<<"ok"<<endl;
  	cout<<"\tAdding several 'long' values to the set 's5' ... ";
  	for(long k=0;k<5;k++) s5->insert(3*k);
  	cout<<"ok"<<endl;
  	cout<<"\tEnumerating the 'long' values in the set 's5' (in the forward direction):";
  	for(auto it=s5->begin();it!=s5->cend();it++) cout<<" "<<(*it);
  	cout<<"."<<endl;
  	cout<<"\tEnumerating the 'long' values in the set 's5' (in the reverse direction):";
  	for(auto it=s5->rbegin();it!=s5->rend();it++) cout<<" "<<(*it);
	cout<<"."<<endl<<endl << "\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();
	
	/* TASK #8 - allocating a new C-like array by using the allocator of the set 's5' */
 	cout<<"\tAllocating a new C-like array of 7 locations by using the allocator of the set 's5' ... ";
 	long *p = s5->get_allocator().allocate(7);
 	cout<<"ok"<<endl<<"\tInitializing the locations of the new C-like array ... ";
 	for(long i=0;i<7;i++) s5->get_allocator().construct(&p[i],i);
 	cout<<"ok"<<endl<<"\tThe 'long' values in the new allocated array are:";
 	for(long i=0;i<7;i++) cout<<" "<<*(p+i);
 	cout<<"."<<endl;
 	cout<<"\tDeallocating the new C-like array ... ";
 	for(long i=0;i<7;i++) s5->get_allocator().destroy(&p[i]);
 	s5->get_allocator().deallocate(p,7);
 	cout<<"ok"<<endl<<endl;
 	p=nullptr;
 	cout<<"\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();
	
	/* TASK #9: deallocating all auxiliary data structures in this test. */
 	cout<<"\tDeallocating all sets in this test ... ";
 	s0.clear();
	s1.clear();
	s2.clear();
	s3.clear();
	s4.clear();
	if(s5!=nullptr) { s5->clear(); delete s5; s5=nullptr; }
	cout<<"ok"<<endl<<endl;
	cout << "\tPress the RETURN key to finish ... ";
	cin.get();
	#ifndef _MSC_VER
		cout << endl;
		cout.flush();
	#endif
	return EXIT_SUCCESS;    
}
