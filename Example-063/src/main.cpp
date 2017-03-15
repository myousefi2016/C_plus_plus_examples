/**************************************************************************************************
 * Examples in the C++ language (the 'Example-063' unit test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), March 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-063' unit test.
 **************************************************************************************************/
 
#include <cstdlib>
#include <string>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
#ifndef uint
	typedef unsigned int uint;
#endif
#ifdef _MSC_VER
	#include <functional>
#endif

/// This function is a custom function for comparing the 'string' keys.
bool compareStrings(const string& a,const string& b) { return (a<b); }

/// The main function for the <i>'Example-063'</i> unit test.
int main(void)
{
	uint n=0;

	/* This is the 'Example-063' unit test, where the 'map' containers are validated. */
    cout<<endl<<"\tThis is the 'Example-063' unit test in the C++ language."<<endl<<endl;
    cout.flush();
    
    /* TASK #1 - Creating an empty map 'm0', containing no association. New associations will be added separately to the map 'm0'. */
    cout<<"\tCreating a new map 'm0' for storing associations between a 'string' and an 'uint' value ... ";
    map<string,uint> m0;
    cout<<"ok"<<endl;
    if(m0.empty()==true) cout<<"\tThe new map 'm0' contains no association between a 'string' and an 'uint' value."<<endl;
    else cout<<"\tThe new map 'm0' contains "<<m0.size()<<" associations between a 'string' and an 'uint' value."<<endl;
    cout<<"\tAdding several associations between a 'string' and an 'uint' value ... ";
    m0["One"]=(uint)1;
    m0["Two"]=(uint)2;
    m0["Eight"]=(uint)8;
    m0["Eleven"]=(uint)11;
    m0.insert(std::pair<string,uint>("Five",5));
    m0.insert(m0.begin(),std::pair<string,uint>("Four",4));
    cout<<"ok"<<endl;
 	if(m0.empty()==true) cout<<"\tThe new map 'm0' contains no association between a 'string' and an 'uint' value."<<endl;
    else
    {
    	/* We export the associations in the not empty map 'm0'. */
    	cout<<"\tThe new map 'm0' contains the following "<<m0.size()<<" associations between a 'string' and an 'uint' value, enumerated in the forward direction:"<<endl<<endl;
    	for(auto it=m0.cbegin();it!=m0.cend();it++,n++) 
    	{ 
    		cout<<"\t\tthe string '"<<it->first<<"' is associated with the 'uint' value "<<it->second; 
    		if(n==m0.size()-1) cout<<".";
    		else cout<<";";
    		cout<<endl; 
    	}
    	
  		/* We export EOL... */
    	cout<<endl;
    	cout.flush();
    }
    
    /* TASK #2 - Creating a copy of another map. */
    cout<<"\tCreating the copy 'm1' of the existing map 'm0' ... ";
    map<string,uint> m1(m0.crbegin(),m0.crend());
    cout<<"ok"<<endl;
    if(m1.empty()==true) cout<<"\tThe new map 'm1' contains no association between a 'string' and an 'uint' value."<<endl;
    else cout<<"\tThe new map 'm1' contains "<<m1.size()<<" associations between a 'string' and an 'uint' value."<<endl;
 	if(m0==m1) cout<<"\tThe maps 'm0' and 'm1' contain exactly the same associations between a 'string' and an 'uint' value (with respect to the '==' operator)."<<endl;
    else cout<<"\tThe maps 'm0' and 'm1' do not contain exactly the same associations between a 'string' and an 'uint' value (with respect to the '==' operator)."<<endl;
    cout<<"\tThe maximum capacity of the map 'm1' is "<<m1.max_size()<<"."<<endl;
    if(m1.count("Three")==0) { cout<<"\tThe map 'm1' contains no association, involving the string 'Three'."<<endl; }
    else { cout<<"\tThe map 'm1' contains an association, involving the string 'Three'."<<endl; }
    cout<<"\tRetrieving the lower bound of the 'Five' string key ... ";
    auto itl=m1.lower_bound("Five");
    cout<<"ok. Found the string '"<<itl->first<<"', associated with the 'uint' value "<<itl->second<<"."<<endl;
    cout<<"\tRetrieving the upper bound of the 'One' string key ... ";
    auto itu=m1.upper_bound("Five");
    cout<<"ok. Found the string '"<<itu->first<<"', associated with the 'uint' value "<<itu->second<<"."<<endl;
    cout<<endl;
    cout.flush();
    
    /* TASK #3 - Creating again a copy of another map. */
    cout<<"\tCreating the copy 'm2' of the existing map 'm1' ... ";
    auto m2=m1;
    cout<<"ok"<<endl;
    if(m1==m2) cout<<"\tThe maps 'm1' and 'm2' contain exactly the same associations between a 'string' and an 'uint' value (with respect to the '==' operator)."<<endl;
    else cout<<"\tThe maps 'm1' and 'm2' do not contain exactly the same associations between a 'string' and an 'uint' value (with respect to the '==' operator)."<<endl;
    auto it=m2.find("Four");
    if(it!=m2.end())
    {
    	cout<<"\tThe map 'm2' contains an association, involving the string 'Four'."<<endl;
    	cout<<"\tRemoving the association, involving the string 'Four', from the map 'm2' ... ";
    	m2.erase(it);
    	cout<<"ok"<<endl;
    	cout<<"\tThe new map 'm2' contains the following "<<m2.size()<<" associations between a 'string' and an 'uint' value:"<<endl<<endl;
    	n=0;
    	for(auto it=m2.cbegin();it!=m2.cend();it++,n++) 
    	{ 
    		cout<<"\t\tthe string '"<<it->first<<"' is associated with the 'uint' value "<<it->second; 
    		if(n==m2.size()-1) cout<<".";
    		else cout<<";";
    		cout<<endl; 
    	}
    	
  		/* We export EOL... */
    	cout<<endl;
    	cout.flush();
    }
    else cout<<"\tThe map 'm2' contains no association, involving the string 'Two'"<<endl;
    if(m1==m2) cout<<"\tThe maps 'm1' and 'm2' contain exactly the same associations between a 'string' and an 'uint' value (with respect to the '==' operator)."<<endl;
    else cout<<"\tThe maps 'm1' and 'm2' do not contain exactly the same associations between a 'string' and an 'uint' value (with respect to the '==' operator)."<<endl;
    cout<<endl;
    cout.flush();
    
    /* TASK #4 - Creating a new map 'm3' for performing the swapping operation. */
    cout<<"\tCreating an empty map 'm3' for storing associations between a 'string' and an 'uint' value ... ";
    map<string,uint> m3;
    cout<<"ok"<<endl;
    if(m3.empty()==true) cout<<"\tThe new map 'm3' contains no association between a 'string' and an 'uint' value."<<endl;
    else cout<<"\tThe new map 'm3' contains "<<m3.size()<<" associations between a 'string' and an 'uint' value."<<endl;
    if(m1.empty()==true) cout<<"\tThe new map 'm1' contains no association between a 'string' and an 'uint' value"<<endl;
    else cout<<"\tThe new map 'm1' contains "<<m1.size()<<" associations between a 'string' and an 'uint' value"<<endl;
    cout<<"\tSwapping the content of the maps 'm1' and 'm3' ... ";
    m1.swap(m3);
    cout<<"ok"<<endl;
    if(m3.empty()==true) cout<<"\tThe new map 'm3' contains no association between a 'string' and an 'uint' value."<<endl;
    else cout<<"\tThe new map 'm3' contains "<<m3.size()<<" associations between a 'string' and an 'uint' value."<<endl;
    if(m1.empty()==true) cout<<"\tThe new map 'm1' contains no association between a 'string' and an 'uint' value."<<endl;
    else cout<<"\tThe new map 'm1' contains "<<m1.size()<<" associations between a 'string' and an 'uint' value."<<endl;
    cout<<endl;
    cout.flush();
    
    /* TASK #5 - Allocating a new map 'm4' by using a custom function for sorting the keys. */
    cout<<"\tAllocating a new map 'm4' for storing associations between a 'string' and an 'uint' value by using the custom function 'compareStrings()' for sorting correctly the keys ('strings', in this case) ... ";
    map< string, uint, bool(*)(const string&,const string&)> *m4=nullptr;
    m4=new map< string, uint, bool(*)(const string&,const string&)>(compareStrings);
    cout<<"ok"<<endl;
    cout<<"\tAdding several associations between a 'string' and an 'uint' value to the new map 'm4' ... ";
    m4->emplace(string("Thirteen"),13);
    m4->emplace(string("Fourteen"),14);
    m4->emplace_hint(m4->end(),string("Nine"),9);
    m4->emplace(string("One"),1);
    m4->emplace_hint(m4->end(),string("Ten"),10);
    cout<<"ok"<<endl;
    if(m4->empty()==true) cout<<"\tThe new map 'm4' contains no association between a 'string' and an 'uint' value."<<endl;
    else cout<<"\tThe new map 'm4' contains the following "<<m4->size()<<" associations between a 'string' and an 'uint' value:"<<endl<<endl;
    cout<<"\t\tthe string 'Thirteen' is associated with the 'uint' value "<<m4->at(string("Thirteen"))<<";"<<endl;
    cout<<"\t\tthe string 'Fourteen' is associated with the 'uint' value "<<m4->at(string("Fourteen"))<<";"<<endl;
    cout<<"\t\tthe string 'Nine' is associated with the 'uint' value "<<m4->at(string("Nine"))<<";"<<endl;
    cout<<"\t\tthe string 'One' is associated with the 'uint' value "<<m4->at(string("One"))<<";"<<endl;
    cout<<"\t\tthe string 'Ten' is associated with the 'uint' value "<<m4->at(string("Ten"))<<"."<<endl<<endl;
    cout.flush();
    
    /* TASK #6 - allocating a new C-like array by using the allocator of the map 'm4' */
    cout<<"\tAllocating a new C-like array of 6 locations (containing a pair 'string'/'uint') by using the allocator of the map 'm4' ... ";
    std::pair<const string,uint>* p = m4->get_allocator().allocate(6);
    cout<<"ok"<<endl<<"\tInitializing the locations of the new C-like array (stored as pairs) ... ";
    m4->get_allocator().construct(&p[0],make_pair<const string,uint>(string("Zero"),0));
    m4->get_allocator().construct(&p[1],make_pair<const string,uint>(string("One"),1));
    m4->get_allocator().construct(&p[2],make_pair<const string,uint>(string("Two"),2));
    m4->get_allocator().construct(&p[3],make_pair<const string,uint>(string("Three"),3));
    m4->get_allocator().construct(&p[4],make_pair<const string,uint>(string("Four"),4));
    m4->get_allocator().construct(&p[5],make_pair<const string,uint>(string("Five"),5));
    cout<<"ok"<<endl<<"\tThe associations between a 'string' and an 'uint' value (stored as pairs) in the new allocated array are the following:"<<endl<<endl;
    for(int i=0;i<6;i++) 
    {
    	cout<<"\t\tthe string '"<<p[i].first<<"' is associated with the 'uint' value "<<p[i].second;
    	if(i<5) cout<<";"<<endl;
    	else cout<<"."<<endl;
    }
    
    /* Now, we deallocate the new C-like array 'p'. */
    cout<<endl;
 	cout<<"\tDeallocating the new C-like array ... ";
 	for(int i=0;i<6;i++) m4->get_allocator().destroy(&p[i]);
  	m4->get_allocator().deallocate(p,6);
    cout<<"ok"<<endl<<endl;
 	p=nullptr;
    
    /* TASK #7 - Creating an empty map 'm5' by using a custom struct for sorting the keys. */
 	cout<<"\tCreating an empty map 'm5' by using the 'std::greater<string>' struct for sorting the keys ('strings', in this case) ... ";
 	map<string, uint, std::greater<string> > m5;
 	cout<<"ok"<<endl;
 	if(m5.empty()==true) cout<<"\tThe new map 'm5' contains no association between a 'string' and an 'uint' value."<<endl;
    else cout<<"\tThe new map 'm5' contains "<<m5.size()<<" associations between a 'string' and an 'uint' value."<<endl;
 	cout<<"\tAdding several associations between a 'string' and an 'uint' value to the new map 'm5' ... ";
    m5["Seven"]=7;
    m5["Eight"]=8;
    m5["Twelve"]=12;
    m5.emplace_hint(m5.end(),"Seventeen",17);
    cout<<"ok"<<endl;
    cout<<"\tThe new map 'm5' contains the following "<<m5.size()<<" associations between a 'string' and an 'uint' value:"<<endl<<endl;
    cout<<"\t\tthe string 'Seven' is associated with the 'uint' value "<<m5.at(string("Seven"))<<";"<<endl;
    cout<<"\t\tthe string 'Eight' is associated with the 'uint' value "<<m5.at(string("Eight"))<<";"<<endl;
    cout<<"\t\tthe string 'Twelve' is associated with the 'uint' value "<<m5.at(string("Twelve"))<<";"<<endl;
    cout<<"\t\tthe string 'Seventeen' is associated with the 'uint' value "<<m5.at(string("Seventeen"))<<"."<<endl<<endl;
    cout.flush();
	
	/* TASK 8 - Deallocating all maps, used in this test. */
    cout<<"\tDeallocating all maps and other auxiliary data structures in this test ... ";
    m0.clear();
    m1.clear();
    m2.clear();
    m3.clear();
    if(m4!=nullptr) { m4->clear(); delete m4; }
    m4=nullptr;
    m5.clear();
    cout<<"ok"<<endl<<endl;
    cout.flush();
    return EXIT_SUCCESS;  
}
