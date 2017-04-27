/**************************************************************************************************
 * Examples in the C++ language (the 'Example-073' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), April 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-073' Test.
 **************************************************************************************************/

#include <cstdlib>
#include <queue>
#include <list>
#include <iostream>
#include <algorithm>
using namespace std;

/// The main function for the <i>'Example-073'</i> Test.
int main(void)
{
	/* This is the 'Example-073' Test, where the 'queue' containers are validated. */
    cout<<endl<<"\tThis is the 'Example-073' Test in the C++ language."<<endl<<endl;
    cout.flush();
    
    /* TASK #1: validating the empty constructor for the 'queue' containers. */
    cout<<"\tCreating the empty queue 'q0' of 'int' values ... ";
    queue<int> q0;
    cout<<"ok"<<endl;
    cout<<"\t#values in the queue 'q0' is "<<q0.size()<<"."<<endl;
	if(q0.empty()==true) cout<<"\tThe queue 'q0' is empty."<<endl<<endl;
 	else cout<<"\tThe queue 'q0' is not empty."<<endl;
 	cout.flush();
 	
 	/* TASK #2: adding several 'int' values to the queue 'q0'. */
 	cout<<"\tAdding several 'int' values to the queue 'q0' ... ";
 	q0.emplace(11);
 	q0.emplace(3);
 	q0.emplace(-1);
 	q0.push(5);
 	q0.push(6);
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the queue 'q0' is "<<q0.size()<<"."<<endl;
	if(q0.empty()==true) cout<<"\tThe queue 'q0' is empty."<<endl;
 	else cout<<"\tThe queue 'q0' is not empty."<<endl;
 	cout.flush();
 	cout<<"\tThe first 'int' value in the queue 'q0' is "<<q0.front()<<"."<<endl;
 	cout<<"\tThe last 'int' value in the queue 'q0' is "<<q0.back()<<"."<<endl;
 	cout<<"\tRemoving and visiting iteratively all 'int' values in the queue 'q0' (as follows):";
 	while(!q0.empty())
 	{
 		cout<<" "<<q0.front();
 		q0.pop();
 	}
 	
 	/* At the end, the queue 'q0' should be empty! */
 	cout<<"."<<endl<<"\t#values in the queue 'q0' is "<<q0.size()<<"."<<endl;
	if(q0.empty()==true) cout<<"\tThe queue 'q0' is empty."<<endl<<endl;
 	else cout<<"\tThe queue 'q0' is not empty."<<endl<<endl;
 	cout.flush();

 	/* TASK #3: validating the constructor for the 'queue' containers, starting from another container (e.g., the 'list' container). */
 	cout<<"\tCreating the new queue 'q1' by initializing its content through another container ... ";
 	queue<int,list<int>> q1(list<int>(2,100));
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the queue 'q1' is "<<q1.size()<<"."<<endl;
	if(q1.empty()==true) cout<<"\tThe queue 'q1' is empty."<<endl<<endl;
 	else cout<<"\tThe queue 'q1' is not empty."<<endl<<endl;
 	cout.flush();
 	
 	/* TASK #4: validating the 'copy' constructor for the 'queue' containers. */
	cout<<"\tCreating the new queue 'q2' as the copy of the queue 'q1' ... ";
	queue<int,list<int>> q2=queue<int,list<int>>(q1);
	cout<<"ok"<<endl;
 	cout<<"\t#values in the queue 'q2' is "<<q2.size()<<"."<<endl;
	if(q2.empty()==true) cout<<"\tThe queue 'q2' is empty."<<endl;
 	else cout<<"\tThe queue 'q2' is not empty."<<endl;
 	if(q1==q2) cout<<"\tThe queue 'q1' is 'the same as' the queue 'q2' (with respect to the '==' operator)."<<endl<<endl;
 	else cout<<"\tThe queue 'q1' is not 'the same as' the queue 'q2' (with respect to the '==' operator)."<<endl<<endl;
 	cout.flush();

 	/* TASK #5: allocating and initializing a new queue 'q3'! */
 	cout<<"\tAllocating and initializing the new queue 'q3' ... ";
 	queue<int> *q3=nullptr;
 	q3=new queue<int>();
 	for(int k=0;k<6;k++) q3->emplace(k);
 	cout<<"ok"<<endl;
 	cout.flush();
 	cout<<"\t#values in the queue 'q3' is "<<q3->size()<<"."<<endl;
 	if(q3->empty()==true) cout<<"\tThe queue 'q3' is empty."<<endl;
 	else cout<<"\tThe queue 'q3' is not empty."<<endl;
 	cout<<"\t#values in the queue 'q0' is "<<q0.size()<<"."<<endl;
 	if(q0.empty()==true) cout<<"\tThe queue 'q0' is empty."<<endl;
 	else cout<<"\tThe queue 'q0' is not empty."<<endl;
 	if(q0==(*q3)) cout<<"\tThe queue 'q0' is 'the same as' the queue 'q3' (with respect to the '==' operator)."<<endl;
 	if(q0<(*q3)) cout<<"\tThe queue 'q0' is 'strictly less than' the queue 'q3' (with respect to the '<' operator)."<<endl;
 	if(q0!=(*q3)) cout<<"\tThe queue 'q0' is not 'the same as' the queue 'q3' (with respect to the '!=' operator)."<<endl;
 	if(q0>(*q3)) cout<<"\tThe queue 'q0' is 'strictly greater than' the queue 'q3' (with respect to the '>' operator)."<<endl;
 	if(q0<=(*q3)) cout<<"\tThe queue 'q0' may be either 'strictly less than', or 'the same as' the queue 'q3' (with respect to the '<=' operator)."<<endl;
 	if(q0>=(*q3)) cout<<"\tThe queue 'q0' may be either 'strictly greater than', or 'the same as' the queue 'q3' (with respect to the '>=' operator)."<<endl;
 	if((*q3)==q0) cout<<"\tThe queue 'q3' is 'the same as' the queue 'q0' (with respect to the '==' operator)."<<endl;
 	if((*q3)<q0) cout<<"\tThe queue 'q3' is 'strictly less than' the queue 'q0' (with respect to the '<' operator)."<<endl;
 	if((*q3)!=q0) cout<<"\tThe queue 'q3' is not 'the same as' the queue 'q0' (with respect to the '!=' operator)."<<endl;
 	if((*q3)>q0) cout<<"\tThe queue 'q3' is 'strictly greater than' the queue 'q0' (with respect to the '>' operator)."<<endl;
 	if((*q3)<=q0) cout<<"\tThe queue 'q3' may be either 'strictly less than', or 'the same as' the queue 'q0' (with respect to the '<=' operator)."<<endl;
 	if((*q3)>=q0) cout<<"\tThe queue 'q3' may be either 'strictly greater than', or 'the same as' the queue 'q0' (with respect to the '>=' operator)."<<endl;
 	cout<<endl;
 	cout.flush();
 	
 	/* TASK #6: swapping the content of the queues 'q0' and 'q3'. */
 	cout<<"\t#values in the queue 'q0' is "<<q0.size()<<"."<<endl;
	if(q0.empty()==true) cout<<"\tThe queue 'q0' is empty."<<endl;
 	else cout<<"\tThe queue 'q0' is not empty."<<endl;
 	cout<<"\t#values in the queue 'q3' is "<<q3->size()<<"."<<endl;
 	if(q3->empty()==true) cout<<"\tThe queue 'q3' is empty."<<endl;
 	else cout<<"\tThe queue 'q3' is not empty."<<endl;
 	cout<<"\tSwapping the content of the queues 'q0' and 'q3' ... ";
 	q3->swap(q0);
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the queue 'q0' is "<<q0.size()<<"."<<endl;
	if(q0.empty()==true) cout<<"\tThe queue 'q0' is empty."<<endl;
 	else cout<<"\tThe queue 'q0' is not empty."<<endl;
 	cout<<"\t#values in the queue 'q3' is "<<q3->size()<<"."<<endl;
 	if(q3->empty()==true) cout<<"\tThe queue 'q3' is empty."<<endl<<endl;
 	else cout<<"\tThe queue 'q3' is not empty."<<endl<<endl;
 	cout.flush();
 	
 	/* TASK #7 - deallocating all queues */
    cout<<"\tDeallocating the content of all queues ... ";
    while(!q0.empty()) q0.pop();
    while(!q1.empty()) q1.pop();
    while(!q2.empty()) q2.pop();
    if(q3!=nullptr)
    {
    	while(!q3->empty()) q3->pop();
    	delete q3;
    	q3=nullptr;
    }
    
    /* All is ok. */
    cout<<"ok"<<endl<<endl;
	cout.flush();
	return EXIT_SUCCESS;
}
