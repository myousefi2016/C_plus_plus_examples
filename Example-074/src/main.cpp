/**************************************************************************************************
 * Examples in the C++ language (the 'Example-074' unit test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), March 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-074' unit test.
 **************************************************************************************************/

#include <cstdlib>
#include <queue>
#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

/// The custom priority to be used in the priority deques.
class MyPriorityFunction
{
	public:
	
	/// This operator compares two <i>'integer'</i> values.
	bool operator()(const int& a, const int& b) const { return a<b; }
};

/// The main function for the <i>Example-074</i> unit test.
int main(void)
{
	/* This is the 'Example-074' unit test, where the 'priority queue' containers are validated. */
    cout<<endl<<"\tThis is the 'Example-074' unit test in the C++ language."<<endl<<endl;
    cout.flush();
    
    /* TASK #1: validating the empty constructor for the 'priority queue' containers. */
    cout<<"\tCreating the empty priority queue 'q0' of 'int' values ... ";
    priority_queue<int> q0;
    cout<<"ok"<<endl;
    cout<<"\t#values in the priority queue 'q0' is "<<q0.size()<<"."<<endl;
  	if(q0.empty()==true) cout<<"\tThe priority queue 'q0' is empty."<<endl<<endl;
 	else cout<<"\tThe priority queue 'q0' is not empty."<<endl<<endl;
 	cout.flush();
 	
 	/* TASK #2: validating the constructor for the 'priority queue' containers, starting from another container (e.g., the 'vector' container). */
 	cout<<"\tCreating the new priority queue 'q1' by initializing its content through another container ... ";
 	vector<int> aux=vector<int>(2,100);
 	priority_queue<int> q1(aux.begin(),aux.end());
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the priority queue 'q1' is "<<q1.size()<<"."<<endl;
	if(q1.empty()==true) cout<<"\tThe priority queue 'q1' is empty."<<endl<<endl;
 	else cout<<"\tThe priority queue 'q1' is not empty."<<endl<<endl;
 	cout.flush();
 	
 	/* TASK #3: swapping the content of the priority queues 'q0' and 'q1'. */
 	cout<<"\t#values in the priority queue 'q0' is "<<q0.size()<<"."<<endl;
  	if(q0.empty()==true) cout<<"\tThe priority queue 'q0' is empty."<<endl;
 	else cout<<"\tThe priority queue 'q0' is not empty."<<endl;
 	cout<<"\t#values in the priority queue 'q1' is "<<q1.size()<<"."<<endl;
  	if(q1.empty()==true) cout<<"\tThe priority queue 'q1' is empty."<<endl;
 	else cout<<"\tThe priority queue 'q1' is not empty."<<endl;
 	cout<<"\tSwapping the content of the priority queues 'q0' and 'q1' ... ";
 	q1.swap(q0);
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the priority queue 'q0' is "<<q0.size()<<"."<<endl;
  	if(q0.empty()==true) cout<<"\tThe priority queue 'q0' is empty."<<endl;
 	else cout<<"\tThe priority queue 'q0' is not empty."<<endl;
 	cout<<"\t#values in the priority queue 'q1' is "<<q1.size()<<"."<<endl;
  	if(q1.empty()==true) cout<<"\tThe priority queue 'q1' is empty."<<endl;
 	else cout<<"\tThe priority queue 'q1' is not empty."<<endl;
 	cout<<endl;
 	cout.flush();

 	/* TASK #4: validating the constructor for the 'priority queue' containers, starting from another container (e.g., the 'vector' container) and the 'std::greater' priority. */
  	cout<<"\tCreating the new priority queue 'q2' by using the 'std::greater' priority ... ";
  	priority_queue<int, vector<int>, greater<int> > q2;
  	cout<<"ok"<<endl;
  	cout<<"\tAdding several 'int' values to the priority queue 'q2' ... ";
  	q2.emplace(100);
  	q2.emplace(1);
  	q2.push(45);
  	q2.push(-3);
  	q2.push(4);
  	q2.push(-1);
  	cout<<"ok"<<endl;
  	cout<<"\t#values in the priority queue 'q2' is "<<q2.size()<<"."<<endl;
	if(q2.empty()==true) cout<<"\tThe priority queue 'q2' is empty."<<endl<<endl;
 	else cout<<"\tThe priority queue 'q2' is not empty."<<endl<<endl;
 	cout.flush();
 	
 	/* TASK #5: visiting the 'int' values in the priority queue 'q2'. */
 	cout<<"\tThe first 'int' value in the priority queue 'q2' is "<<q2.top()<<"."<<endl;
 	cout<<"\tRemoving and visiting iteratively all 'int' values in the priority queue 'q2' (as follows):";
 	while(!q2.empty())
 	{
 		cout<<" "<<q2.top();
 		q2.pop();
 	}
 	
 	/* At the end, the priority queue 'q2' should be empty! */
 	cout<<"."<<endl<<"\t#values in the priority queue 'q2' is "<<q2.size()<<"."<<endl;
	if(q2.empty()==true) cout<<"\tThe priority queue 'q2' is empty."<<endl<<endl;
 	else cout<<"\tThe priority queue 'q2' is not empty."<<endl<<endl;
 	cout.flush();
 	
 	/* TASK #6: validating the constructor for the 'priority queue' containers, starting from another container (e.g., the 'vector' container) and a custom priority. */
 	cout<<"\tCreating the new priority queue 'q3' by using the 'MyPriorityFunction' class as the custom priority ... ";
 	priority_queue<int, vector<int>, MyPriorityFunction > *q3=new priority_queue<int, vector<int>, MyPriorityFunction >();
 	cout<<"ok"<<endl;
 	cout<<"\tAdding several 'int' values to the priority queue 'q3' ... ";
 	q3->emplace(100);
  	q3->emplace(1);
  	q3->push(45);
  	q3->push(-3);
  	q3->push(4);
  	q3->push(-1);
  	cout<<"ok"<<endl;
  	cout<<"\t#values in the priority queue 'q3' is "<<q3->size()<<"."<<endl;
	if(q3->empty()==true) cout<<"\tThe priority queue 'q3' is empty."<<endl;
 	else cout<<"\tThe priority queue 'q3' is not empty."<<endl;
 	cout<<"\tThe first 'int' value in the priority queue 'q3' is "<<q3->top()<<"."<<endl;
 	cout<<"\tRemoving and visiting iteratively all 'int' values in the priority queue 'q3' (as follows):";
 	while(!q3->empty())
 	{
 		cout<<" "<<q3->top();
 		q3->pop();
 	}
 	
 	/* At the end, the priority queue 'q3' should be empty! */
 	cout<<"."<<endl<<"\t#values in the priority queue 'q3' is "<<q3->size()<<"."<<endl;
	if(q3->empty()==true) cout<<"\tThe priority queue 'q3' is empty."<<endl<<endl;
 	else cout<<"\tThe priority queue 'q3' is not empty."<<endl<<endl;
 	cout.flush();
 
 	/* TASK #7 - deallocating all priority queues */
    cout<<"\tDeallocating the content of all priority queues ... ";
    aux.clear();
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
