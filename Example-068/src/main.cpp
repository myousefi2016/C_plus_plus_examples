/**************************************************************************************************
 * Examples in the C++ language (the 'Example-068' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), June 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-068' Test.
 **************************************************************************************************/

#include <cstdlib>
#include <tuple>
#include <string>
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

/// The main function for the <i>'Example-068'</i> Test.
int main(void)
{
	string s;

	/* This is the 'Example-068' Test, where the 'tuple' containers are validated. */
	cout<<endl<<"\tThis is the 'Example-068' Test in the C++ language."<<endl<<endl;
	cout.flush();

	/* TASK #1 - Creating a new tuple 't0', containing a 'string' and an 'int' value. */
	cout<<"\tCreate a new tuple 't0', containing a 'string' and an 'int' value ... ";
	tuple<string,int> *t0 = new tuple<string,int>("John",18);
	cout<<"ok"<<endl;
	cout<<"\tThe tuple 't0' has "<<std::tuple_size< decltype( (tuple<string,int>)(*t0) ) >::value<<" elements of different type."<<endl;
	cout<<"\tThe 'string' element in the tuple 't0' is '"<<std::get<0>(*t0)<<"'."<<endl;
	cout<<"\tThe 'int' value in the tuple 't0' is "<<std::get<1>(*t0)<<"."<<endl<<endl;
	cout << "\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();

	/* TASK #2 - Creating a copy 't1' of the tuple 't0'. */
	cout<<"\tCreating a new tuple 't1' as a copy of the existing tuple 't0' ... ";
	auto t1=*t0;
	cout<<"ok"<<endl;
	cout<<"\tThe content of the field #0 in the tuple 't1' is '"<<std::get<0>(t1)<<"'."<<endl;
	cout<<"\tThe content of the field #1 in the tuple 't1' is "<<std::get<1>(t1)<<"."<<endl;
	if(*t0==t1) cout<<"\tThe tuples 't0' and 't1' coincide element by element (with respect to the '==' operator)."<<endl;
	else cout<<"\tThe tuples 't0' and 't1' do not coincide element by element (with respect to the '==' operator)."<<endl;
	if(*t0!=t1) cout<<"\tThe tuples 't0' and 't1' do not coincide element by element (with respect to the '!=' operator)."<<endl<<endl;
	else cout<<"\tThe tuples 't0' and 't1' coincide element by element (with respect to the '!=' operator)."<<endl<<endl;
	cout << "\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();

	/* TASK #3 - Creating a new tuple 't2', containing a 'string' and an 'int' value. */
	cout<<"\tCreating a new tuple 't2' by starting from a 'string' and an 'int' value (see the 'make_tuple()' template function) ... ";
	auto t2=make_tuple(string("Jack"),5);
	cout<<"ok"<<endl;
	cout<<"\tThe 'string' element in the tuple 't2' is '"<<std::get<0>(t2)<<"'."<<endl;
	cout<<"\tThe 'int' value in the tuple 't2' is "<<std::get<1>(t2)<<"."<<endl;
	if(t1==t2) cout<<"\tThe tuples 't1' and 't2' coincide element by element (with respect to the '==' operator)."<<endl;
	else cout<<"\tThe tuples 't1' and 't2' do not coincide element by element (with respect to the '==' operator)."<<endl;
	if(t1!=t2) cout<<"\tThe tuples 't1' and 't2' do not coincide element by element (with respect to the '!=' operator)."<<endl<<endl;
	else cout<<"\tThe tuples 't1' and 't2' coincide element by element (with respect to the '!=' operator)."<<endl<<endl;
	cout << "\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();

	/* TASK #4 - Swapping the content of the tuples 't1' and 't2'. */
	cout<<"\tThe 'string' element in the tuple 't1' is '"<<std::get<0>(t1)<<"'."<<endl;
	cout<<"\tThe 'int' value in the tuple 't1' is "<<std::get<1>(t1)<<"."<<endl;
	cout<<"\tThe 'string' element in the tuple 't2' is '"<<std::get<0>(t2)<<"'."<<endl;
	cout<<"\tThe 'int' value in the tuple 't2' is "<<std::get<1>(t2)<<"."<<endl;
	cout<<"\tThe tuple 't1':"<<endl<<endl;
	if(t1<t2) cout<<"\t\t-) is 'strictly less than' the tuple 't2' (with respect to the '<' operator);"<<endl;
	else cout<<"\t\t-) is not 'strictly less than' the tuple 't2' (with respect to the '<' operator);"<<endl;
	if(t1>t2) cout<<"\t\t-) is 'strictly greater than' the tuple 't2' (with respect to the '>' operator);"<<endl;
	else cout<<"\t\t-) is not 'strictly greater than' the tuple 't2' (with respect to the '>' operator);"<<endl;
	if(t1<=t2) cout<<"\t\t-) may be either 'strictly less than', or 'the same as' the tuple 't2' (with respect to the '<=' operator);"<<endl;
	else cout<<"\t\t-) is not both 'strictly less than', and 'the same as' the tuple 't2' (with respect to the '<=' operator);"<<endl;
	if(t1>=t2) cout<<"\t\t-) may be either 'strictly greater than', or 'the same as' the tuple 't2' (with respect to the '>=' operator)."<<endl;
	else cout<<"\t\t-) is not both 'strictly greater than', and 'the same as' the tuple 't2' (with respect to the '>=' operator)."<<endl;
	cout<<endl;
	cout<<"\tSwapping the content of the tuples 't1' and 't2' ... ";
	t1.swap(t2);
	cout<<"ok"<<endl;
	cout<<"\tThe 'string' element in the tuple 't1' is '"<<std::get<0>(t1)<<"'."<<endl;
	cout<<"\tThe 'int' value in the tuple 't1' is "<<std::get<1>(t1)<<"."<<endl;
	cout<<"\tThe 'string' element in the tuple 't2' is '"<<std::get<0>(t2)<<"'."<<endl;
	cout<<"\tThe 'int' value in the tuple 't2' is "<<std::get<1>(t2)<<"."<<endl;
	cout<<"\tThe tuple 't1':"<<endl<<endl;
	if(t1<t2) cout<<"\t\t-) is 'strictly less than' the tuple 't2' (with respect to the '<' operator);"<<endl;
	else cout<<"\t\t-) is not 'strictly less than' the tuple 't2' (with respect to the '<' operator);"<<endl;
	if(t1>t2) cout<<"\t\t-) is 'strictly greater than' the tuple 't2' (with respect to the '>' operator);"<<endl;
	else cout<<"\t\t-) is not 'strictly greater than' the tuple 't2' (with respect to the '>' operator);"<<endl;
	if(t1<=t2) cout<<"\t\t-) may be either 'strictly less than', or 'the same as' the tuple 't2' (with respect to the '<=' operator);"<<endl;
	else cout<<"\t\t-) is not both 'strictly less than', and 'the same as' the tuple 't2' (with respect to the '<=' operator);"<<endl;
	if(t1>=t2) cout<<"\t\t-) may be either 'strictly greater than', or 'the same as' the tuple 't2' (with respect to the '>=' operator)."<<endl;
	else cout<<"\t\t-) is not both 'strictly greater than', and 'the same as' the tuple 't2' (with respect to the '>=' operator)."<<endl;
	cout<<endl;
	cout << "\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();

	/* TASK #5 - Creating a new tuple 't3'. */
	cout<<"\tCreating a new tuple 't3' by using the automatic detection of its elements (see the 'tuple_element()' template function) ... ";
	auto t3=make_tuple( 25, "'t3'", 88.4);
	cout<<"ok"<<endl;
	cout<<"\tExtracting and recognizing automatically the type of the elements in the new tuple 't3' ... ";
	std::tuple_element<0,decltype(t3)>::type t30 = std::get<0>(t3);
	std::tuple_element<1,decltype(t3)>::type t31 = std::get<1>(t3);
	std::tuple_element<2,decltype(t3)>::type t32 = std::get<2>(t3);
	cout<<"ok"<<endl;
	cout<<"\tThe new tuple 't3' contains the following fields:"<<endl<<endl;
	cout<<"\t\t-) the field #0 in the tuple 't3' contains "<<t30<<";"<<endl;
	cout<<"\t\t-) the field #1 in the tuple 't3' contains '"<<t31<<"';"<<endl;
	cout<<"\t\t-) the field #2 in the tuple 't3' contains "<<t32<<"."<<endl<<endl;
	cout << "\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();

	/* TASK #6 - Creating a new tuple 't4' by packing together the elements of the tuple 't3'. */
	cout<<"\tCreating a new tuple 't4' by packing together the elements in the existing tuple 't3' (see the 'forward_as_tuple()' template function) ... ";
	auto t4=std::forward_as_tuple(t30,t31,t32);
	cout<<"ok"<<endl;
	cout<<"\tThe tuple 't4' has "<<std::tuple_size< decltype(t4) >::value<<" elements of different type."<<endl;
	cout<<"\tExtracting and recognizing automatically the type of the elements in the new tuple 't4' ... ";
	std::tuple_element<0,decltype(t4)>::type t40 = std::get<0>(t4);
	std::tuple_element<1,decltype(t4)>::type t41 = std::get<1>(t4);
	std::tuple_element<2,decltype(t4)>::type t42 = std::get<2>(t4);
	cout<<"ok"<<endl;
	cout<<"\tThe new tuple 't4' contains the following fields:"<<endl<<endl;
	cout<<"\t\t-) the field #0 in the tuple 't4' contains "<<t40<<";"<<endl;
	cout<<"\t\t-) the field #1 in the tuple 't4' contains '"<<t41<<"';"<<endl;
	cout<<"\t\t-) the field #2 in the tuple 't4' contains "<<t42<<"."<<endl<<endl;
	cout<<"\tRetrieving the field #1 in the tuple 't4' (and ignoring the remaining fields)  ... ";
	std::tie(std::ignore, s, std::ignore) = t4;
	cout<<"ok"<<endl;
	cout<<"\tThe field #1 in the tuple 't4' is '"<<s<<"'."<<endl;
	if(t3==t4) cout<<"\tThe tuples 't3' and 't4' coincide element by element (with respect to the '==' operator)."<<endl;
	else cout<<"\tThe tuples 't3' and 't4' do not coincide element by element (with respect to the '==' operator)."<<endl;
	if(t3!=t4) cout<<"\tThe tuples 't3' and 't4' do not coincide element by element (with respect to the '!=' operator)."<<endl;
	else cout<<"\tThe tuples 't3' and 't4' coincide element by element (with respect to the '!=' operator)."<<endl;
	cout<<endl;
	cout << "\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();

	/* TASK #7 - Creating a new tuple 't5' by concatenating the tuples 't3' and 't4'. */
	cout<<"\tCreating a new tuple 't5' by concatenating the tuples 't1' and 't3' ... ";
	auto t5=std::tuple_cat(t1,t3);
	cout<<"ok"<<endl;
	cout<<"\tThe existing tuple 't1' has "<<std::tuple_size< decltype(t1) >::value<<" elements of different type."<<endl;
	cout<<"\tThe existing tuple 't3' has "<<std::tuple_size< decltype(t3) >::value<<" elements of different type."<<endl;
	cout<<"\tThe new tuple 't5' has "<<std::tuple_size< decltype(t5) >::value<<" elements of different type."<<endl;
	cout<<"\tExtracting and recognizing automatically the type of the elements in the new tuple 't5' ... ";
	std::tuple_element<0,decltype(t5)>::type t50 = std::get<0>(t5);
	std::tuple_element<1,decltype(t5)>::type t51 = std::get<1>(t5);
	std::tuple_element<2,decltype(t5)>::type t52 = std::get<2>(t5);
	std::tuple_element<3,decltype(t5)>::type t53 = std::get<3>(t5);
	std::tuple_element<4,decltype(t5)>::type t54 = std::get<4>(t5);
	cout<<"ok"<<endl;
	cout << "\tThe new tuple 't5' contains the following fields:" << endl << endl;
	cout<<"\t\t-) the field #0 in the tuple 't5' contains '"<<t50<<"';"<<endl;
	cout<<"\t\t-) the field #1 in the tuple 't5' contains "<<t51<<";"<<endl;
	cout<<"\t\t-) the field #2 in the tuple 't5' contains "<<t52<<";"<<endl;
	cout<<"\t\t-) the field #3 in the tuple 't5' contains '"<<t53<<"';"<<endl;
	cout<<"\t\t-) the field #4 in the tuple 't5' contains "<<t54<<"."<<endl<<endl;
	cout << "\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();
	
	/* TASK #8 - deallocating all tuples in this test! */
	cout<<"\tDeallocating all tuples in this test ... ";
	if(t0!=nullptr) delete t0;
	t0=nullptr;
	cout<<"ok"<<endl<<endl;
	cout << "\tPress the RETURN key to finish ... ";
	cin.get();
	#ifndef _MSC_VER
		cout << endl;
		cout.flush();
	#endif
	return EXIT_SUCCESS;  
}

