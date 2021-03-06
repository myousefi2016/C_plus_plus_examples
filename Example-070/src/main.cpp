/**************************************************************************************************
 * Examples in the C++ language (the 'Example-070' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), June 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-070' Test.
 **************************************************************************************************/

#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

/// The main function for the <i>'Example-070'</i> Test.
int main(void)
{
	/* This is the 'Example-070' Test, where the 'vector' containers are validated. */
    cout<<endl<<"\tThis is the 'Example-070' Test in the C++ language."<<endl<<endl;
	cout.flush();
	
	/* TASK #1 - validating the empty constructor for the 'vector' containers. */
 	cout<<"\tCreating an empty vector 'v0' of 'int' values ... ";
 	cout.flush();
 	vector<int> v0;
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the vector 'v0' is "<<v0.size()<<"."<<endl;
 	if(v0.empty()==true) cout<<"\tThe vector 'v0' is empty."<<endl;
 	else cout<<"\tThe vector 'v0' is not empty."<<endl;
	cout<<"\tCreating 5 new locations in the vector 'v0', storing the default 'int' value 100 ... ";
 	v0.assign(5,100);
 	cout<<"ok"<<endl;
 	if(v0.empty()==true) cout<<"\tThe vector 'v0' is empty."<<endl;
 	else cout<<"\tThe vector 'v0' is not empty."<<endl;
 	cout<<"\t#values in the vector 'v0' is "<<v0.size()<<"."<<endl;
 	cout<<"\tThe 'int' values in the vector 'v0' are:";
 	for(auto it=v0.cbegin();it!=v0.cend();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
	cout<<"\tInitializing only the first 3 locations in the vector 'v0' (which is resized properly) ... ";
 	v0.assign(v0.begin(),v0.begin()+3);
 	cout<<"ok"<<endl<<"\t#values in the vector 'v0' is "<<v0.size()<<"."<<endl;
 	cout<<"\tThe 'int' values in the vector 'v0' are:";
 	for(auto it=v0.cbegin();it!=v0.cend();++it) cout<<" "<<(*it);
 	cout<<"."<<endl<<endl;
	cout << "\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();
	
	/* TASK #2 - creating a new vector by giving a valid initialization. */
 	cout<<"\tCreating a vector 'v1' with 4 'int values, initialized to '37' ... ";
 	vector<int> v1 (4,37);
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the vector 'v1' is "<<v1.size()<<"."<<endl;
 	cout<<"\tThe 'int' values in the vector 'v1' are:";
 	for(auto it=v1.cbegin();it!=v1.cend();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	if(v1.empty()==true) cout<<"\tThe vector 'v1' is empty."<<endl<<endl;
 	else cout<<"\tThe vector 'v1' is not empty."<<endl<<endl;
	cout << "\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();
	
	/* TASK #3 - creating a new vector as the copy of another vector. */
 	cout<<"\tCreating a vector 'v2' as the copy of the vector 'v1' ... ";
 	vector<int> v2 (v1.begin(),v1.end());
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the vector 'v2' is "<<v2.size()<<"."<<endl;
 	cout<<"\tThe 'int' values in the vector 'v2' are:";
 	for(auto it=v2.cbegin();it!=v2.cend();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	if(v2.empty()==true) cout<<"\tThe vector 'v2' is empty."<<endl;
 	else cout<<"\tThe vector 'v2' is not empty."<<endl;
 	if(v1==v2) cout<<"\tThe vectors 'v1' and 'v2' coincide position by position (with respect to the '==' operator)."<<endl<<endl;
 	else cout<<"\tThe vectors 'v1' and 'v2' do not coincide position by position (with respect to the '==' operator)."<<endl<<endl;
 	cout << "\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();
 	
 	/* TASK #4 - creating a new vector as the copy of another vector. */
 	cout<<"\tCreating a vector 'v3' as the copy of the vector 'v2' ... ";
 	vector<int> v3(v2);
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the vector 'v3' is "<<v3.size()<<"."<<endl;
 	cout<<"\tThe 'int' values in the vector 'v3' are:";
 	for(auto it=v3.cbegin();it!=v3.cend();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	if(v3.empty()==true) cout<<"\tThe vector 'v3' is empty."<<endl;
 	else cout<<"\tThe vector 'v3' is not empty."<<endl;
 	if(v2!=v3) cout<<"\tThe vectors 'v2' and 'v3' do not coincide position by position (with respect to the '!=' operator)."<<endl<<endl;
 	else cout<<"\tThe vectors 'v2' and 'v3' coincide position by position (with respect to the '!=' operator)."<<endl<<endl;
 	cout << "\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();
	
	/* TASK #5 - creating a new vector from a C-like array. */
 	int arr[] = { 34, 21, 1, 0, 5 };
 	cout<<"\tCreating a vector 'v4' from a C-like array ... ";
 	vector<int> v4 = vector<int>(arr, arr + sizeof(arr) / sizeof(int) );
 	cout<<"ok"<<endl;
 	cout<<"\tThe 'int' values in the vector 'v4' (in the forward direction) are:";
 	for(unsigned int k=0;k<v4.size();k++) cout<<" "<<v4.at(k);
 	cout<<"."<<endl;
 	cout<<"\tThe 'int' values in the vector 'v4' (in the reverse direction) are:";
 	for(auto it=v4.crbegin();it!=v4.crend();it++) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	cout<<"\tThe first 'int' value of the vector 'v4' (in the forward direction) is "<<v4.front()<<"."<<endl;
 	cout<<"\tThe last 'int' value of the vector 'v4' (in the forward direction) is "<<v4.back()<<"."<<endl<<endl;
 	cout << "\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();
	
	/* TASK #6 - analysis of the vector 'v4' */
 	cout<<"\t#values in the vector 'v4' is "<<v4.size()<<"."<<endl;
 	cout<<"\tThe capacity of the vector 'v4' is "<<v4.capacity()<<"."<<endl;
 	cout<<"\tThe maximum size of the vector 'v4' is "<<v4.max_size()<<"."<<endl;
 	cout<<"\tResizing the size of the vector 'v4' with the default value 56 ... ";
 	v4.resize(10,56);
 	cout<<"ok"<<endl;
 	cout<<"\tReserving more locations for future modification to the vector 'v4' ... ";
 	v4.reserve(20);
 	cout<<"ok"<<endl;
 	cout<<"\tThe 'int' values in the vector 'v4' (in the forward direction) are:";
 	for(unsigned int k=0;k<v4.size();k++) cout<<" "<<v4[k];
 	cout<<"."<<endl;
 	cout<<"\tThe 'int' values in the vector 'v4' (in the reverse direction) are:";
 	for(auto it=v4.rbegin();it!=v4.rend();it++) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	cout<<"\t#values in the vector 'v4' is "<<v4.size()<<"."<<endl;
 	cout<<"\tThe capacity of the vector 'v4' is "<<v4.capacity()<<"."<<endl;
 	cout<<"\tThe maximum size of the vector 'v4' is "<<v4.max_size()<<"."<<endl;
 	cout<<"\tShrinking to fit the vector 'v4' ... ";
 	v4.shrink_to_fit();
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the vector 'v4' is "<<v4.size()<<"."<<endl;
 	cout<<"\tThe capacity of the vector 'v4' is "<<v4.capacity()<<"."<<endl<<endl;
	cout << "\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();
	
	/* TASK #7 - allocating a new vector 'v5' and modifying its 'int' values. */
 	cout<<"\tAllocating a new vector 'v5' ... ";
 	vector<int> *v5=nullptr;
 	v5 = new vector<int>(7);
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the vector 'v5' is "<<v5->size()<<"."<<endl;
 	cout<<"\tThe 'int' values in the vector 'v5' (in the forward direction) are:";
 	for(unsigned int k=0;k<v5->size();k++) cout<<" "<<(*v5)[k];
 	cout<<"."<<endl;
 	cout<<"\tUpdating the 'int' values of the vector 'v5', seen as a C-like 'int*' array ... ";
 	for(unsigned int k=0;k<v5->size();k++) v5->data()[k]=k;
 	cout<<"ok"<<endl;
 	cout<<"\tThe 'int' values in the vector 'v5' are:";
 	for(auto it=v5->cbegin();it!=v5->cend();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	cout<<"\tAdding several 'int' values to the bottom of the vector 'v5' ... ";
 	v5->push_back(4);
 	v5->push_back(33);
 	v5->push_back(0);
 	v5->push_back(2);
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the vector 'v5' is "<<v5->size()<<"."<<endl;
 	cout<<"\tThe 'int' values in the vector 'v5' are:";
 	for(auto it=v5->begin();it!=v5->end();++it) cout<<" "<<(*it);
 	cout<<"."<<endl<<endl;
 	cout << "\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();
	
	/* TASK #8 - operating on the 'int' values in the vector 'v5'. */
 	cout<<"\tThe last 'int' value of the vector 'v5' is "<<v5->back()<<"."<<endl;
 	cout<<"\tRemoving the last 'int' value from the vector 'v5' ... ";
 	v5->pop_back();
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the vector 'v5' is "<<v5->size()<<"."<<endl;
 	cout<<"\tThe 'int' values in the vector 'v5' are: ";
 	for(auto it=v5->cbegin();it!=v5->cend();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	cout<<"\tAdding the 'int' value 22 to the beginning of the vector 'v5' ... ";
 	v5->insert(v5->begin(),22);
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the vector 'v5' is "<<v5->size()<<"."<<endl;
 	cout<<"\tThe 'int' values in the vector 'v5' are:";
 	for(auto it=v5->cbegin();it!=v5->cend();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	cout<<"\tConcatenating the vector 'v5' with the vector 'v4' ... ";
 	v5->insert(v5->end(),v4.begin(),v4.end());
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the vector 'v5' is "<<v5->size()<<"."<<endl;
 	cout<<"\tThe 'int' values in the vector 'v5' are:";
 	for(auto it=v5->cbegin();it!=v5->cend();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	cout<<"\tThe 'int' value of position 5 in the vector 'v5' is: "<<v5->at(5)<<"."<<endl;
 	cout<<"\tRemoving the 'int' value of position 5 in the vector 'v5' ... ";
 	v5->erase(v5->begin()+5);
 	cout<<"ok"<<endl;
 	cout<<"\tThe 'int' values in the vector 'v5' are:";
 	for(auto it=v5->cbegin();it!=v5->cend();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	cout<<"\tRemoving the first 5 values from the vector 'v5' ... ";
 	v5->erase(v5->begin(),v5->begin()+5);
 	cout<<"ok"<<endl;
 	cout<<"\tThe 'int' values in the vector 'v5' are:";
 	for(auto it=v5->cbegin();it!=v5->cend();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	cout<<"\tThe 'int' value of position 2 in the vector 'v5' is "<<v5->at(2)<<"."<<endl;
 	cout<<"\tThe 'int' value of position 4 in the vector 'v5' is "<<v5->at(4)<<"."<<endl;
 	cout<<"\tSwapping the 'int' values of positions 2 and 4 in the vector 'v5' ... ";
 	iter_swap(v5->begin()+4,v5->begin()+2);
 	cout<<"ok"<<endl;
 	cout<<"\tThe 'int' value of position 2 in the vector 'v5' is "<<v5->at(2)<<"."<<endl;
 	cout<<"\tThe 'int' value of position 4 in the vector 'v5' is "<<v5->at(4)<<"."<<endl;
 	cout<<"\tAdding new 'int' values to the vector 'v5' ... ";
 	v5->emplace(v5->end(),20);
 	v5->emplace_back(-2);
 	v5->emplace_back(-4);
 	cout<<"ok"<<endl;
 	cout<<"\tThe 'int' values in the vector 'v5' are:";
 	for(auto it=v5->cbegin();it!=v5->cend();++it) cout<<" "<<(*it);
 	cout<<"."<<endl<<endl;
	cout << "\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();
	
	/* TASK #9 - swapping the content of two vectors 'v2' and 'v5'. */
 	cout<<"\tThe 'int' values in the vector 'v2' are:";
 	for(auto it=v2.cbegin();it!=v2.cend();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	cout<<"\tThe 'int' values in the vector 'v5' are:";
 	for(auto it=v5->cbegin();it!=v5->cend();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	cout<<"\tThe 'int' values in the vector 'v2':"<<endl<<endl;
 	if(v2<(*v5)) cout<<"\t\t-) are 'strictly less than' the 'int' values in the vector 'v5' (with respect to the '<' operator);"<<endl;
 	else cout<<"\t\t-) are not 'strictly less than' the 'int' values in the vector 'v5' (with respect to the '<' operator);"<<endl;
 	if(v2<=(*v5)) cout<<"\t\t-) may be either 'strictly less than', or 'the same as' the 'int' values in the vector 'v5' (with respect to the '<=' operator);"<<endl;
 	else cout<<"\t\t-) are not both 'strictly less than', and 'the same as' the 'int' values in the vector 'v5' (with respect to the '<=' operator);"<<endl;
 	if(v2>(*v5)) cout<<"\t\t-) are 'strictly greater than' the 'int' values in the vector 'v5' (with respect to the '>' operator);"<<endl;
 	else cout<<"\t\t-) are not 'strictly greater than' the 'int' values in the vector 'v5' (with respect to the '>' operator);"<<endl;
 	if(v2>=(*v5)) cout<<"\t\t-) may be either 'strictly greater than', or 'the same as' the 'int' values in the vector 'v5' (with respect to the '>=' operator)."<<endl<<endl;
 	else cout<<"\t\t-) are not both 'strictly greater than', and 'the same as' the 'int' values in the vector 'v5' (with respect to the '>=' operator)."<<endl<<endl;
 	cout<<"\tSwapping the content of the vectors 'v2' and 'v5' ... ";
 	v2.swap(*v5);
 	cout<<"ok"<<endl;
 	cout<<"\tThe 'int' values in the vector 'v2' are:";
 	for(auto it=v2.cbegin();it!=v2.cend();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	cout<<"\tThe 'int' values in the vector 'v5' are:";
 	for(auto it=v5->cbegin();it!=v5->cend();++it) cout<<" "<<(*it);
 	cout<<"."<<endl;
 	cout<<"\tThe 'int' values in the vector 'v2':"<<endl<<endl;
 	if(v2<(*v5)) cout<<"\t\t-) are 'strictly less than' the 'int' values in the vector 'v5' (with respect to the '<' operator);"<<endl;
 	else cout<<"\t\t-) are not 'strictly less than' the 'int' values in the vector 'v5' (with respect to the '<' operator);"<<endl;
 	if(v2<=(*v5)) cout<<"\t\t-) may be either 'strictly less than', or 'the same as' the 'int' values in the vector 'v5' (with respect to the '<=' operator);"<<endl;
 	else cout<<"\t\t-) are not both 'strictly less than', and 'the same as' the 'int' values in the vector 'v5' (with respect to the '<=' operator);"<<endl;
 	if(v2>(*v5)) cout<<"\t\t-) are 'strictly greater than' the 'int' values in the vector 'v5' (with respect to the '>' operator);"<<endl;
 	else cout<<"\t\t-) are not 'strictly greater than' the 'int' values in the vector 'v5' (with respect to the '>' operator);"<<endl;
 	if(v2>=(*v5)) cout<<"\t\t-) may be either 'strictly greater than', or 'the same as' the 'int' values in the vector 'v5' (with respect to the '>=' operator)."<<endl<<endl;
 	else cout<<"\t\t-) are not both 'strictly greater than', and 'the same as' the 'int' values in the vector 'v5' (with respect to the '>=' operator)."<<endl<<endl;
	cout << "\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();
	
	/* TASK #10 - allocating a new C-like array by using the allocator of the vector 'v5' */
 	cout<<"\tAllocating a new C-like array of 7 locations by using the allocator of the vector 'v5' ... ";
 	int *p = v5->get_allocator().allocate(7);
 	cout<<"ok"<<endl<<"\tInitializing the locations of the new C-like array ... ";
 	for(int i=0;i<7;i++) v5->get_allocator().construct(&p[i],i);
 	cout<<"ok"<<endl<<"\tThe 'int' values in the new allocated array are:";
 	for(int i=0;i<7;i++) cout<<" "<<*(p+i);
 	cout<<"."<<endl;
 	cout<<"\tDeallocating the new C-like array ... ";
 	for(int i=0;i<7;i++) v5->get_allocator().destroy(&p[i]);
 	v5->get_allocator().deallocate(p,7);
 	cout<<"ok"<<endl<<endl;
 	p=nullptr;
	cout << "\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();
	
	/* TASK #11 - deallocating all vectors */
    cout<<"\tDeallocating all vectors in this test ... ";
    v0.clear();
    v1.clear();
    v2.clear();
    v3.clear();
    v4.clear();
    if(v5!=nullptr) delete v5;
    v5=nullptr;
    cout<<"ok"<<endl<<endl;
	cout << "\tPress the RETURN key to finish ... ";
	cin.get();
	#ifndef _MSC_VER
		cout << endl;
		cout.flush();
	#endif
	return EXIT_SUCCESS;
}

