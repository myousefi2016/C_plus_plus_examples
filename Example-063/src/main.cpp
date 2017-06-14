/**************************************************************************************************
 * Examples in the C++ language (the 'Example-063' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), June 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-063' Test.
 **************************************************************************************************/

#include <cstdlib>
#include <string>
#include <iostream>
#include <map>
#ifndef uint
	typedef unsigned int uint;
#endif
#ifdef _MSC_VER
	#include <functional>
#endif
using namespace std;

/// This function is a custom function for comparing the 'string' keys.
bool compareStrings(const string& a,const string& b) { return (a<b); }

/// The main function for the <i>'Example-063'</i> Test.
int main(void)
{
	uint n = 0;

	/* This is the 'Example-063' Test, where the 'map' containers are validated. */
	cout<<endl<<"\tThis is the 'Example-063' Test in the C++ language."<<endl<<endl;
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
	if (m0.empty() == true) cout << "\tThe new map 'm0' contains no association between a 'string' and an 'uint' value." << endl;
	else
	{
	    /* We export the associations in the not empty map 'm0'. */
	    cout<<"\tThe new map 'm0' contains the following "<<m0.size()<<" associations between a 'string' and an 'uint' value, enumerated in the forward direction:"<<endl<<endl;
	    for(auto it=m0.cbegin();it!=m0.cend();it++,n++) 
	    { 
	    	cout<<"\t\t-) the string '"<<it->first<<"' is associated with the 'uint' value "<<it->second; 
	    	if(n==m0.size()-1) cout<<".";
	    	else cout<<";";
	    	cout<<endl; 
	    }
  	
		/* We export EOL... */
		cout<<endl;
		cout.flush();
	}

	/* Now, we continue our analysis on the map 'm0'. */
	cout << "\tThe maximum capacity of the map 'm0' is " << m0.max_size() << "." << endl;
	n = (uint)m0.count("Four");
	if (n == 0) { cout << "\tThe map 'm0' contains no association, involving the string 'Four'." << endl; }
	else { cout << "\tThe map 'm0' contains the association between the string 'Four' and the 'uint' value "<<m0["Four"]<<"."<<endl; }
	cout << "\tRetrieving the lower bound of the string 'Four' in the map 'm0' ... ";
	auto itl = m0.lower_bound("Four");
	cout << "ok. Found the string '" << itl->first << "', associated with the 'uint' value " << itl->second << "." << endl;
	cout << "\tRetrieving the upper bound of the string 'Four' in the map 'm0' ... ";
	auto itu = m0.upper_bound("Four");
	cout << "ok. Found the string '" << itu->first << "', associated with the 'uint' value " << itu->second << "." << endl;
	cout << endl;
	cout << "\tPress the RETURN key to continue ... ";
	cout.flush();
	cin.get();
	cout << endl;
	cout.flush();

	/* TASK #2 - Creating a copy of another map. */
	cout << "\tCreating the copy 'm1' of the existing map 'm0' (associations are copied in the reversed order with respect to the map 'm0') ... ";
	map<string, uint> m1(m0.crbegin(), m0.crend());
	cout<<"ok"<<endl;
	if (m1.empty() == true) cout << "\tThe new map 'm1' contains no association between a 'string' and an 'uint' value." << endl;
	else cout << "\tThe new map 'm1' contains " << m1.size() << " associations between a 'string' and an 'uint' value." << endl;
	if (m0 == m1) cout << "\tThe maps 'm0' and 'm1' contain exactly the same associations between a 'string' and an 'uint' value (with respect to the '==' operator)." << endl;
	else cout << "\tThe maps 'm0' and 'm1' do not contain exactly the same associations between a 'string' and an 'uint' value (with respect to the '==' operator)." << endl;
	cout << "\tThe maximum capacity of the map 'm1' is " << m1.max_size() << "." << endl;
	if (m1.count("Three") == 0) { cout << "\tThe map 'm1' contains no association, involving the string 'Three'." << endl; }
	else { cout<<"\tThe map 'm1' contains the association between the string 'Three' and the 'uint' value "<<m1["Three"]<<"."<<endl; }
	cout << "\tRetrieving the lower bound of the 'One' string in the map 'm1' ... ";
	itl=m1.lower_bound("One");
	cout << "ok. Found the string '" << itl->first << "', associated with the 'uint' value " << itl->second << "." << endl;
	cout << "\tRetrieving the upper bound of the 'One' string ... ";
	itu=m1.upper_bound("One");
	cout<<"ok. Found the string '"<<itu->first<<"', associated with the 'uint' value "<<itu->second<<"."<<endl;
	cout << endl;
	cout.flush();
	cout << "\tPress the RETURN key to continue ... ";
	cout.flush();
	cin.get();
	cout << endl;
	cout.flush();

	/* TASK #3 - Creating again a copy of another map. */
	cout << "\tCreating the copy 'm2' of the existing map 'm1' by using the '=' operator ... ";
	auto m2 = m1;
	cout << "ok" << endl;
	if (m1 == m2) cout << "\tThe maps 'm1' and 'm2' contain exactly the same associations between a 'string' and an 'uint' value (with respect to the '==' operator)." << endl;
	else cout << "\tThe maps 'm1' and 'm2' do not contain exactly the same associations between a 'string' and an 'uint' value (with respect to the '==' operator)." << endl;
	cout << "\tThe map 'm2' contains " << m2.size() << " associations between a 'string' and an 'uint' value." << endl << endl;
	auto it = m2.find("Four");
	if (it != m2.end())
	{
		cout << "\tThe map 'm2' contains the association between the string 'Four' and the 'uint' value " << m2["Four"]<<"."<<endl;
		cout << "\tRemoving the association, involving the string 'Four', from the map 'm2' ... ";
		m2.erase(it);
		cout<<"ok"<<endl;
		n = 0;
		cout << "\tThe map 'm2' contains the following " << m2.size() << " associations between a 'string' and an 'uint' value, enumerated in the forward direction:" << endl << endl;
		for (auto it = m2.cbegin();it != m2.cend();it++, n++)
		{
			cout << "\t\t-) the string '" << it->first << "' is associated with the 'uint' value " << it->second;
			if (n == m2.size() - 1) cout << ".";
			else cout << ";";
			cout << endl;
		}

		/* We export EOL... */
		cout << endl;
		cout.flush();
	}
	else cout << "\tThe map 'm2' contains no association, involving the string 'Four'" << endl;
	if (m1 == m2) cout << "\tThe maps 'm1' and 'm2' contain exactly the same associations between a 'string' and an 'uint' value (with respect to the '==' operator)." << endl;
	else cout << "\tThe maps 'm1' and 'm2' do not contain exactly the same associations between a 'string' and an 'uint' value (with respect to the '==' operator)." << endl;
	cout << endl;
	cout.flush();
	cout << "\tPress the RETURN key to continue ... ";
	cout.flush();
	cin.get();
	cout << endl;
	cout.flush();

	/* TASK #4 - Creating a new map 'm3' for performing the swapping operation. */
	cout << "\tCreating an empty map 'm3' for storing a bunch of associations between a 'string' and an 'uint' value ... ";
	map<string, uint> m3;
	cout << "ok" << endl;
	if (m3.empty() == true) cout << "\tThe new map 'm3' contains no association between a 'string' and an 'uint' value." << endl;
	else cout << "\tThe new map 'm3' contains " << m3.size() << " associations between a 'string' and an 'uint' value." << endl;
	if (m1.empty() == true) cout << "\tThe existing map 'm1' contains no association between a 'string' and an 'uint' value." << endl;
	else cout << "\tThe existing map 'm1' contains " << m1.size() << " associations between a 'string' and an 'uint' value." << endl;
	cout << "\tSwapping the content of the maps 'm1' and 'm3' ... ";
	m1.swap(m3);
	cout << "ok" << endl;
	if (m3.empty() == true) cout << "\tThe new map 'm3' contains no association between a 'string' and an 'uint' value." << endl;
	else cout << "\tThe new map 'm3' contains " << m3.size() << " associations between a 'string' and an 'uint' value." << endl;
	if (m1.empty() == true) cout << "\tThe existing map 'm1' contains no association between a 'string' and an 'uint' value." << endl << endl;
	else cout << "\tThe existing map 'm1' contains " << m1.size() << " associations between a 'string' and an 'uint' value." << endl << endl;
	cout << "\tPress the RETURN key to continue ... ";
	cout.flush();
	cin.get();
	cout << endl;

	/* TASK #5 - Allocating a new map 'm4' by using the custom function 'compareString()'. */
	cout << "\tAllocating a new map 'm4' for storing a bunch of associations between a 'string' and an 'uint' value by using the custom function 'compareStrings()' ... ";
	map< string, uint, bool(*)(const string&, const string&)> *m4 = nullptr;
	m4 = new map< string, uint, bool(*)(const string&, const string&)>(compareStrings);
	cout << "ok" << endl;
	cout << "\tAdding several associations to the new map 'm4' ... ";
	m4->emplace(string("Thirteen"), 13);
	m4->emplace(string("Fourteen"),14);
	m4->emplace_hint(m4->end(),string("Nine"),9);
	m4->emplace(string("One"),1);
	m4->emplace_hint(m4->end(),string("Ten"),10);
	cout<<"ok"<<endl;
	if (m4->empty() == true) cout << "\tThe new map 'm4' contains no association between a 'string' and an 'uint' value." << endl;
	else
	{
		cout << "\tThe new map 'm4' contains the following " << m4->size() << " associations between a 'string' and an 'uint' value, enumerated in the 'forward' direction (as they are stored):";
		cout << endl << endl;
		n = 0;
		for (auto it = m4->begin();it != m4->end();it++, n++)
		{
			cout << "\t\t-) the string '" << it->first << "' is associated with the 'uint' value " << it->second;
			if (n == m4->size() - 1) cout << ".";
			else cout << ";";
			cout << endl;
		}

		/* We export EOL... */
		cout << endl;
		cout.flush();
	}

	/* TASK #6 - allocating a new C-like array by using the allocator of the map 'm4' */
	cout << "\tPress the RETURN key to continue ... ";
	cout.flush();
	cin.get();
	cout << endl;
	cout << "\tAllocating a new C-like array of 6 locations (containing the pairs 'string'/'uint') by using the allocator of the map 'm4' ... ";
	std::pair<const string, uint>* p = m4->get_allocator().allocate(6);
	cout << "ok" << endl << "\tInitializing the locations of the new C-like array ... ";
	m4->get_allocator().construct(&p[0], make_pair<const string, uint>(string("Zero"), 0));
	m4->get_allocator().construct(&p[1], make_pair<const string, uint>(string("One"), 1));
	m4->get_allocator().construct(&p[2], make_pair<const string, uint>(string("Two"), 2));
	m4->get_allocator().construct(&p[3], make_pair<const string, uint>(string("Three"), 3));
	m4->get_allocator().construct(&p[4], make_pair<const string, uint>(string("Four"), 4));
	m4->get_allocator().construct(&p[5], make_pair<const string, uint>(string("Five"), 5));
	cout << "ok" << endl << "\tThe new allocated array contains the following associations between a 'string' and an 'uint' value:" << endl << endl;
	for (int i = 0;i<6;i++)
	{
		cout << "\t\t-) the string '" << p[i].first << "' is associated with the 'uint' value " << p[i].second;
		if (i<5) cout << ";" << endl;
		else cout << "." << endl;
	}

	/* Now, we deallocate the new C-like array 'p'. */
	cout << endl;
	cout << "\tDeallocating the new C-like array ... ";
	for (int i = 0;i<6;i++) m4->get_allocator().destroy(&p[i]);
	m4->get_allocator().deallocate(p, 6);
	cout << "ok" << endl << endl;
	p = nullptr;
	cout << "\tPress the RETURN key to continue ... ";
	cout.flush();
	cin.get();
	cout << endl;

	/* TASK #7 - Allocating a new map 'm5' by using a custom function for sorting the keys. */
	cout << "\tCreating a new multimap 'm5' for storing a bunch of associations between a 'string' and an 'uint' value by using the 'std::greater<string>' struct ... ";
	map<string, uint, std::greater<string> > m5;
	cout << "ok" << endl;
	cout << "\tAdding several associations to the new map 'm5' ... ";
	m5.emplace(string("Thirteen"), 13);
	m5.emplace(string("Fourteen"), 14);
	m5.emplace_hint(m5.end(), string("Nine"), 9);
	m5.emplace(string("One"), 1);
	m5.emplace_hint(m5.end(), string("Ten"), 10);
	m5["Fifteen"] = (uint)15;
	cout << "ok" << endl;
	if (m5.empty() == true) cout << "\tThe new multimap 'm5' contains no association between a 'string' and an 'uint' value." << endl;
	else
	{
		cout << "\tThe new multimap 'm5' contains the following " << m5.size() << " associations between a 'string' and an 'uint' value, enumerated in the 'reverse' direction (with respect to their storing order):";
		cout << endl << endl;
		n = 0;
		for (auto it = m5.rbegin();it != m5.rend();it++, n++)
		{
			cout << "\t\t-) the string '" << it->first << "' is associated with the 'uint' value " << it->second;
			if (n == m5.size() - 1) cout << ".";
			else cout << ";";
			cout << endl;
		}

		/* We export EOL... */
		cout << endl;
		cout.flush();
	}

	/* TASK 8 - Deallocating all maps, used in this test. */
	cout << "\tPress the RETURN key to continue ... ";
	cout.flush();
	cin.get();
	cout << endl;
	cout << "\tDeallocating all maps in this test ... ";
	m0.clear();
	m1.clear();
	m2.clear();
	m3.clear();
	if (m4 != nullptr) { m4->clear(); delete m4; }
	m4 = nullptr;
	m5.clear();
	cout << "ok" << endl << endl;
	cout << "\tPress the RETURN key to finish ... ";
	cin.get();
	#ifndef _MSC_VER
		cout << endl;
		cout.flush();
	#endif
	return EXIT_SUCCESS;
}

