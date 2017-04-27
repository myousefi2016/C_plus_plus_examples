/**************************************************************************************************
 * Examples in the C++ language (the 'Example-075' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), April 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-075' Test.
 **************************************************************************************************/

#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <deque>
#include <stack>
using namespace std;
#ifndef uint
	typedef unsigned int uint;
#endif

/// The main function for the <i>'Example-075'</i> Test.
int main(void)
{
	/* This is the 'Example-075' Test, where the 'stack' containers are validated. */
    cout<<endl<<"\tThis is the 'Example-075' Test in the C++ language."<<endl<<endl;
    cout.flush();

	/* TASK #1: validating the empty constructor for the 'stack' containers. */
    cout<<"\tCreating the empty stack 's0' of 'uint' values ... ";
    stack<uint> s0;
    cout<<"ok"<<endl;
    cout<<"\t#values in the stack 's0' is "<<s0.size()<<"."<<endl;
  	if(s0.empty()==true) cout<<"\tThe stack 's0' is empty."<<endl<<endl;
 	else cout<<"\tThe stack 's0' is not empty."<<endl<<endl;
 	cout.flush();

	/* TASK #2: validating the constructor, which creates a 'stack' container from another container. */
 	cout<<"\tCreating a new stack 's1' of 'uint' values by starting from the content of another container ... ";
 	deque<uint> d (5,44);
 	stack<uint> s1(d);
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the stack 's1' is "<<s1.size()<<"."<<endl;
  	if(s1.empty()==true) cout<<"\tThe stack 's1' is empty."<<endl;
 	else cout<<"\tThe stack 's1' is not empty."<<endl;
 	cout<<"\tThe first 'uint' value in the stack 's1' is "<<s1.top()<<"."<<endl<<endl;
 	cout.flush();
 	
 	/* TASK #3: validating the constructor, which exploits a custom container. */
 	cout<<"\tCreating a new stack 's2' of 'uint' values by using a custom container ... ";
 	vector<uint> v;
 	stack< uint, vector<uint> > *s2=new stack< uint, vector<uint> >(v);
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the stack 's2' is "<<s2->size()<<"."<<endl;
  	if(s2->empty()==true) cout<<"\tThe stack 's2' is empty."<<endl<<endl;
 	else cout<<"\tThe stack 's2' is not empty."<<endl<<endl;
 	cout.flush();
 	cout<<"\tAdding several 'uint' values to the stack 's2' ... ";
 	s2->emplace(2);
 	s2->emplace(5);
 	s2->emplace(20);
 	s2->emplace(0);
 	s2->push(1);
 	s2->push(4);
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the stack 's2' is "<<s2->size()<<"."<<endl;
  	if(s2->empty()==true) cout<<"\tThe stack 's2' is empty."<<endl;
 	else cout<<"\tThe stack 's2' is not empty."<<endl;
 	cout.flush();
 	
 	/* TASK #4: visiting the 'uint' values in the stack 's2'. */
 	cout<<"\tThe first 'uint' value in the stack 's2' is "<<s2->top()<<"."<<endl;
 	cout<<"\tRemoving and visiting iteratively all 'uint' values in the stack 's2' (as follows):";
 	while(!s2->empty())
 	{
 		cout<<" "<<s2->top();
 		s2->pop();
 	}
 	
 	/* We validate this operation! */
 	cout<<"."<<endl<<"\t#values in the stack 's2' is "<<s2->size()<<"."<<endl;
  	if(s2->empty()==true) cout<<"\tThe stack 's2' is empty."<<endl<<endl;
 	else cout<<"\tThe stack 's2' is not empty."<<endl<<endl;
 	cout.flush();
 	
 	/* TASK #5: swapping the content of the stacks 's0' and 's1'. */
 	cout<<"\t#values in the stack 's0' is "<<s0.size()<<"."<<endl;
  	if(s0.empty()==true) cout<<"\tThe stack 's0' is empty."<<endl;
 	else cout<<"\tThe stack 's0' is not empty."<<endl;
 	cout<<"\t#values in the stack 's1' is "<<s1.size()<<"."<<endl;
  	if(s1.empty()==true) cout<<"\tThe stack 's1' is empty."<<endl;
 	else cout<<"\tThe stack 's1' is not empty."<<endl;
 	cout<<"\tSwapping the content of the stacks 's0' and 's1' ... ";
 	s1.swap(s0);
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the stack 's0' is "<<s0.size()<<"."<<endl;
  	if(s0.empty()==true) cout<<"\tThe stack 's0' is empty."<<endl;
 	else cout<<"\tThe stack 's0' is not empty."<<endl;
 	cout<<"\t#values in the stack 's1' is "<<s1.size()<<"."<<endl;
  	if(s1.empty()==true) cout<<"\tThe stack 's1' is empty."<<endl;
 	else cout<<"\tThe stack 's1' is not empty."<<endl;
 	cout<<endl;
 	
 	/* TASK #6: comparing the content of the stacks 's0' and 's1'. */
 	if(s0==s1) cout<<"\tThe stack 's0' is 'the same as' the stack 's1' (with respect to the '==' operator)."<<endl;
 	if(s0<s1) cout<<"\tThe stack 's0' is 'strictly less than' the stack 's1' (with respect to the '<' operator)."<<endl;
 	if(s0!=s1) cout<<"\tThe stack 's0' is not 'the same as' the stack 's1' (with respect to the '!=' operator)."<<endl;
 	if(s0>s1) cout<<"\tThe stack 's0' is 'strictly greater than' the stack 's1' (with respect to the '>' operator)."<<endl;
 	if(s0<=s1) cout<<"\tThe stack 's0' may be either 'strictly less than', or 'the same as' the stack 's1' (with respect to the '<=' operator)."<<endl;
 	if(s0>=s1) cout<<"\tThe stack 's0' may be either 'strictly greater than', or 'the same as' the stack 's1' (with respect to the '>=' operator)."<<endl;
 	if(s1==s0) cout<<"\tThe stack 's1' is 'the same as' the stack 's0' (with respect to the '==' operator)."<<endl;
 	if(s1<s0) cout<<"\tThe stack 's1' is 'strictly less than' the stack 's0' (with respect to the '<' operator)."<<endl;
 	if(s1!=s0) cout<<"\tThe stack 's1' is not 'the same as' the stack 's0' (with respect to the '!=' operator)."<<endl;
 	if(s1>s0) cout<<"\tThe stack 's1' is 'strictly greater than' the stack 's0' (with respect to the '>' operator)."<<endl;
 	if(s1<=s0) cout<<"\tThe stack 's1' may be either 'strictly less than', or 'the same as' the stack 's0' (with respect to the '<=' operator)."<<endl;
 	if(s1>=s0) cout<<"\tThe stack 's1' may be either 'strictly greater than', or 'the same as' the stack 's0' (with respect to the '>=' operator)."<<endl;
 	cout<<endl;
 	cout.flush();

	/* TASK #7: deallocating all auxiliary data structures in this test. */
  	cout<<"\tDeallocating all stacks in this test ... ";
  	d.clear();
  	v.clear();
  	while(!s0.empty()) { s0.pop(); }
  	while(!s1.empty()) { s1.pop(); }
  	if(s2!=nullptr)
  	{
  		while(!s2->empty()) { s2->pop(); }
  		delete s2;
  		s2=nullptr;
  	}
  	
  	/* If we arrive here, all is ok! */
  	cout<<"ok"<<endl<<endl;
  	cout.flush();
  	return EXIT_SUCCESS;
}
