/**************************************************************************************************
 * Examples in the C++ language (the 'Example-069' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), April 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-069' Test.
 **************************************************************************************************/

#include <cstdlib>
#include <array>
#include <tuple>
#include <iostream>
#include <algorithm>
using namespace std;

/// The main function for the <i>Example-069</i> Test.
int main(void)
{
	/* This is the 'Example-069' Test, where the 'array' containers are validated. */
    cout<<endl<<"\tThis is the 'Example-069' Test in the C++ language."<<endl<<endl;
    cout.flush();
    
    /* TASK #1 - validating the empty constructor for the 'array' containers. */
 	cout<<"\tCreating a new array 'a0' of 3 'int' values (without an explicit initialization) ... ";
 	cout.flush();
 	array<int,3> a0;
 	cout<<"ok"<<endl;
    if(a0.empty()==true) { cout<<"\tThe new array 'a0' is empty."<<endl; }
 	else cout<<"\tThe new array 'a0' is not empty."<<endl;
 	cout<<"\tThe 'int' values in the new array 'a0' are:";
    if(a0.size()==0) { cout<<"none."<<endl; }
 	else { for(auto i : a0) cout<<" "<<i; cout<<"."<<endl; }
 	cout<<"\tSetting explicitly '6' as the unique 'int' value for all locations of the array 'a0' ... ";
 	a0.fill(6);
 	cout<<"ok"<<endl;
 	cout<<"\tThe 'int' values in the new array 'a0' are:";
 	for(auto it=a0.crbegin();it!=a0.crend();it++) cout<<" "<<(*it);
 	cout<<"."<<endl<<endl;
 	cout.flush();
 	
 	/* TASK #2 - validating the standard constructor for the 'array' containers. */
 	cout<<"\tCreating a new array 'a1' of 3 'int' values (with an explicit and complete initialization) ... ";
 	array<int,3> a1={1,2,3};
 	cout<<"ok"<<endl;
 	cout<<"\tThe maximum capacity of the array 'a1' is "<<a1.max_size()<<"."<<endl;
 	cout<<"\tThe array 'a1' contains "<<a1.size()<<" 'int' values."<<endl;
 	cout<<"\tThe 'int' values in the array 'a1' (in the forward direction) are:";
 	for(auto it=a1.begin();it!=a1.end();it++) cout<<" "<<(*it);
 	cout<<"."<<endl<<"\tThe 'int' values in the array 'a1' (in the reverse direction) are:";
 	for(auto it=a1.rbegin();it!=a1.rend();it++) cout<<" "<<(*it);
 	cout<<"."<<endl<<endl;
 	cout.flush();
 	
 	/* TASK #3 - validating the copy constructor for the 'array' containers. */
 	cout<<"\tCreating a new array 'a2' as the copy of the array 'a1' ... ";
 	array<int,3> a2=a1;
 	cout<<"ok"<<endl;
 	cout<<"\tThe first 'int' value in the array 'a1' is "<<a1.front()<<"."<<endl;
 	cout<<"\tThe 'int' value of the array 'a1' in position #1 is "<<a1.at(1)<<"."<<endl;
 	cout<<"\tThe last 'int' value in the array 'a1' is "<<a1.back()<<"."<<endl;
 	if(a2==a1) cout<<"\tThe arrays 'a1' and 'a2' contain the same 'int' values position by position (with respect to the '==' operator)."<<endl;
 	else cout<<"\tThe arrays 'a1' and 'a2' do not contain the same 'int' values position by position (with respect to the '==' operator)."<<endl;
 	if(a2!=a1) cout<<"\tThe arrays 'a1' and 'a2' do not contain the same 'int' values position by position (with respect to the '!=' operator)."<<endl<<endl;
 	else cout<<"\tThe arrays 'a1' and 'a2' contain the same 'int' values position by position (with respect to the '!=' operator)."<<endl<<endl;
 	cout.flush();
 	
 	/* TASK #4 - validating the standard constructor for the 'array' containers. */
 	cout<<"\tCreating a new array 'a3' of 3 'int' values (with an explicit but incomplete initialization) ... ";
 	array<int,3> a3={5,2};
 	cout<<"ok"<<endl;
 	cout<<"\tThe new array 'a3' contains "<<tuple_size<decltype(a3)>::value<<" 'int' values."<<endl;
 	cout<<"\tThe 'int' values in the new array 'a3' (in the reverse direction) are:";
 	for(int k=2;k>=0;k--) cout<<" "<<a3[k];
 	cout<<"."<<endl<<"\tThe 'int' values in the new array 'a3' (in the forward direction) are:";
 	int* aux=(int*)a3.data();
	for(int k=0;k<a2.size();k++) cout<<" "<<aux[k];
	cout<<"."<<endl<<endl;
	cout.flush();
	
	/* TASK #5 - swapping the content of the arrays 'a2' and 'a3'. */
	cout<<"\tThe 'int' values in the new array 'a2' are:";
	for(auto it=a2.cbegin();it!=a2.cend();it++) cout<<" "<<(*it);
	cout<<"."<<endl<<"\tThe 'int' values in the new array 'a3' are:";
	for(auto it=a3.cbegin();it!=a3.cend();it++) cout<<" "<<(*it);
	cout<<"."<<endl;
	if(a2<a3) cout<<"\tThe 'int' values in the array 'a2' are 'strictly less than' the 'int' values in the array 'a3' (with respect to the '<' operator)."<<endl;
 	else cout<<"\tThe 'int' values in the array 'a2' are not 'strictly less than' the 'int' values in the array 'a3' (with respect to the '<' operator)."<<endl;
 	cout<<"\tSwapping the content of the arrays 'a2' and 'a3' ... ";
    a2.swap(a3);
    cout<<"ok"<<endl<<"\tThe 'int' values in the new array 'a2' are:";
	for(auto it=a2.cbegin();it!=a2.cend();it++) cout<<" "<<(*it);
	cout<<"."<<endl<<"\tThe 'int' values in the new array 'a3' are:";
	for(auto it=a3.cbegin();it!=a3.cend();it++) cout<<" "<<(*it);
	cout<<"."<<endl;
	if(a2>a3) cout<<"\tThe 'int' values in the array 'a2' are 'strictly greater than' the 'int' values in the array 'a3' (with respect to the '>' operator)."<<endl;
 	else cout<<"\tThe 'int' values in the array 'a2' are not 'strictly greater than' the 'int' values in the array 'a3' (with respect to the '>' operator)."<<endl;
 	cout.flush();
 	
 	/* TASK #6 - accessing elements of the array 'a2' (interpreted as a tuple). */
 	cout<<endl<<"\tThe 'int' value in the location #0 of the array 'a2' (interpreted as a multidimensional 'tuple', see the 'get()' and the 'tuple_element()' template functions) is ";
 	tuple_element<0,decltype(a3)>::type a=get<0>(a2);
 	cout<<a<<"."<<endl;
	cout<<"\tThe 'int' value in the location #1 of the array 'a2' (interpreted as a multidimensional 'tuple', see the 'get()' and the 'tuple_element()' template functions) is ";
 	a=get<1>(a2);
 	cout<<a<<"."<<endl;
 	cout<<"\tThe 'int' value in the location #2 of the array 'a2' (interpreted as a multidimensional 'tuple', see the 'get()' and the 'tuple_element()' template functions) is ";
 	a=get<2>(a2);
 	cout<<a<<"."<<endl<<endl;
 	cout.flush();
    return EXIT_SUCCESS;
}
