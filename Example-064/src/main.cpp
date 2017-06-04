/**************************************************************************************************
 * Examples in the C++ language (the 'Example-064' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), June 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-064' Test.
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

/// The main function for the <i>'Example-064'< / i> Test.
int main(void)
{
	uint n = 0;

	/* This is the 'Example-064' Test, where the 'multimap' containers are validated. */
	cout << endl << "\tThis is the 'Example-064' Test in the C++ language." << endl << endl;
	cout.flush();

	/* TASK #1 - Creating an empty multimap 'm0', containing no association. New associations will be added separately to the multimap 'm0'. */
	cout << "\tCreating a new multimap 'm0' for storing a bunch of associations between the students and their tests marks ... ";
	multimap<string, uint> m0;
	cout << "ok" << endl;
	if (m0.empty() == true) cout << "\tThe new multimap 'm0' contains no association between the students and their tests marks." << endl;
	else cout << "\tThe new multimap 'm0' contains " << m0.size() << " associations between the students and their tests marks." << endl;
	cout << "\tAdding several associations between the students and their tests marks ... ";
	m0.insert(pair<string, uint>(string("Student #1"), 30));
	m0.insert(pair<string, uint>(string("Student #1"), 29));
	m0.insert(pair<string, uint>(string("Student #2"), 18));
	m0.insert(pair<string, uint>(string("Student #3"), 20));
	m0.insert(pair<string, uint>(string("Student #2"), 29));
	m0.insert(pair<string, uint>(string("Student #3"), 27));
	m0.insert(pair<string, uint>(string("Student #1"), 27));
	m0.insert(pair<string, uint>(string("Student #1"), 28));
	cout<<"ok"<<endl;
	if (m0.empty() == true) cout << "\tThe new multimap 'm0' contains no association between the students and their tests marks." << endl;
	else
	{
		/* We export the associations in the not empty multimap 'm0'. */
		cout << "\tThe new multimap 'm0' contains the following " << m0.size() << " associations between the students and their tests marks, enumerated in the 'forward' direction (as they are stored):";
		cout<< endl << endl;
		for (auto it = m0.cbegin();it != m0.cend();it++, n++)
		{
			cout << "\t\t-) the student '" << it->first << "' receives " << it->second << " as the mark of his/her test";
			if (n == m0.size() - 1) cout << ".";
			else cout << ";";
			cout << endl;
		}

		/* We export EOL... */
		cout<<endl;
		cout.flush();
	}

	/* Now, we continue our analysis on the multimap 'm0'. */
	cout << "\tThe maximum capacity of the multimap 'm0' is " << m0.max_size() << "." << endl;
	n = (uint)m0.count("Student #1");
	if (n == 0) { cout << "\tThe multimap 'm0' contains no association, involving the student 'Student #1'." << endl; }
	else { cout << "\tThe multimap 'm0' contains (at least) one association, involving the student 'Student #1' (in particular " << n << " associations)." << endl; }
	cout << "\tRetrieving the lower bound of the student 'Student #1' in the multimap 'm0' ... ";
	auto itl = m0.lower_bound("Student #1");
	cout << "ok. Found the student '" << itl->first << "', associated with the test mark " << itl->second << "." << endl;
	cout << "\tRetrieving the upper bound of the student 'Student #2' in the multimap 'm0' ... ";
	auto itu = m0.upper_bound("Student #2");
	cout << "ok. Found the student '" << itu->first << "', associated with the test mark " << itu->second << "." << endl;
	cout << endl;
	cout << "\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();

	/* TASK #2 - Creating a copy of another multimap. */
	cout<<"\tCreating the copy 'm1' of the existing multimap 'm0' (associations are copied in the reversed order with respect to the multimap 'm0') ... ";
	multimap<string,uint> m1(m0.crbegin(),m0.crend());
	cout<<"ok"<<endl;
	if (m1.empty() == true) cout << "\tThe new multimap 'm1' contains no association between the students and their tests marks." << endl;
	else
	{
		cout << "\tThe new multimap 'm1' contains the following " << m1.size() << " associations between the students and their tests marks, enumerated in the 'forward' direction (as they are stored):";
		cout<< endl << endl;
		n = 0;
		for (auto it = m1.cbegin();it != m1.cend();it++, n++)
		{
			cout << "\t\t-) the student '" << it->first << "' receives " << it->second << " as the mark of his/her test";
			if (n == m1.size() - 1) cout << ".";
			else cout << ";";
			cout << endl;
		}

		/* We export EOL... */
		cout << endl;
		cout.flush();
	}

	/* Now, we continue our analysis on the multimap 'm1'. */
	if (m0 == m1) cout << "\tThe multimaps 'm0' and 'm1' contain exactly the same associations between the students and their tests marks (with respect to the '==' operator)." << endl;
	else cout<<"\tThe multimaps 'm0' and 'm1' do not contain exactly the same associations between the students and their tests marks (with respect to the '==' operator)."<<endl;
	cout << "\tThe maximum capacity of the multimap 'm1' is " << m1.max_size() << "." << endl;
	n = (uint)m1.count("Student #1");
	if( n == 0) { cout << "\tThe multimap 'm1' contains no association, involving the student 'Student #1'." << endl; }
	else { cout<<"\tThe multimap 'm1' contains (at least) an association, involving the student 'Student #1' (in particular "<<n<<" associations)."<<endl; }
	cout << "\tRetrieving the lower bound of the student 'Student #1' in the multimap 'm1' ... ";
	itl=m1.lower_bound("Student #1");
	cout<<"ok. Found the student '"<<itl->first<<"', associated with the test mark "<<itl->second<<"."<<endl;
	cout << "\tRetrieving the upper bound of the student 'Student #2' in the multimap 'm1' ... ";
	itu=m1.upper_bound("Student #2");
	cout<<"ok. Found the student '"<<itu->first<<"', associated with the test mark "<<itu->second<<"."<<endl;
	cout<<endl;
	cout << "\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();

	/* TASK #3 - Creating again a copy of another multimap. */
	cout << "\tCreating the copy 'm2' of the existing multimap 'm1' by using the '=' operator ... ";
	auto m2=m1;
	cout<<"ok"<<endl;
	if (m1 == m2) cout << "\tThe multimaps 'm1' and 'm2' contain exactly the same associations between the students and their tests marks (with respect to the '==' operator)." << endl << endl;
	else cout << "\tThe multimaps 'm1' and 'm2' do not contain exactly the same associations between the students and their tests marks (with respect to the '==' operator)." << endl << endl;
	cout << "\tThe multimap 'm2' contains " << m2.size() << " associations between the students and their tests marks." << endl << endl;
	auto it = m2.find("Student #1");
	if (it != m2.end())
	{
		n = (uint)m2.count("Student #1");
		cout << "\tThe multimap 'm2' contains at least one association, involving the student 'Student #1' (specifically, " << n << " associations)." << endl;
		do 
		{ 
			cout << "\tRemoving an association, involving the student 'Student #1', from the multimap 'm2' ... ";
			m2.erase(it);
			cout << "ok" << endl;
		} 
		while ((it = m2.find("Student #1")) != m2.end());
		n = (uint)m2.count("Student #1");
		if (n == 0) cout << "\tThe multimap 'm2' contains no association, involving the student 'Student #1'." << endl;
		else if(n==1) cout << "\tThe multimap 'm2' contains only one association, involving the student 'Student #1'." << endl;
		else cout << "\tThe multimap 'm2' contains "<<n<<" associations, involving the student 'Student #1'." << endl;
		cout << "\tThe multimap 'm2' contains " << m2.size() << " associations between the students and their tests marks." << endl << endl;
		if (m1 == m2) cout << "\tThe multimaps 'm1' and 'm2' contain exactly the same associations between the students and their tests marks (with respect to the '==' operator)." << endl << endl;
		else cout << "\tThe multimaps 'm1' and 'm2' do not contain exactly the same associations between the students and their tests marks (with respect to the '==' operator)." << endl << endl;
	}

	/* TASK #4 - Creating a new multimap 'm3' for performing the swapping operation. */
	cout << "\tPress the RETURN key to continue ... ";
	cout.flush();
	cin.get();
	cout << endl;
	cout << "\tCreating an empty multimap 'm3' for storing a bunch of associations between the students and their tests marks ... ";
	multimap<string,uint> m3;
	cout<<"ok"<<endl;
	if (m3.empty() == true) cout << "\tThe new multimap 'm3' contains no association between the students and their tests marks." << endl;
	else cout<<"\tThe new multimap 'm3' contains "<<m3.size()<<" associations between the students and their tests marks."<<endl;
	if(m1.empty()==true) cout<<"\tThe existing multimap 'm1' contains no association between the students and their tests marks."<<endl;
	else cout<<"\tThe existing multimap 'm1' contains "<<m1.size()<<" associations between the students and their tests marks."<<endl;
	cout << "\tSwapping the content of the multimaps 'm1' and 'm3' ... ";
	m1.swap(m3);
	cout<<"ok"<<endl;
	if (m3.empty() == true) cout << "\tThe new multimap 'm3' contains no association between the students and their tests marks." << endl;
	else cout << "\tThe new multimap 'm3' contains " << m3.size() << " associations between the students and their tests marks." << endl;
	if (m1.empty() == true) cout << "\tThe multimap 'm1' contains no association between the students and their tests marks." << endl << endl;
	else cout << "\tThe multimap 'm1' contains " << m1.size() << " associations the students and their tests marks." << endl << endl;
	cout << "\tPress the RETURN key to continue ... ";
	cout.flush();
	cin.get();
	cout << endl;

	/* TASK #5 - Allocating a new multimap 'm4' by using the custom function 'compareString()'. */
	cout << "\tAllocating a new multimap 'm4' for storing a bunch of associations between the students and their tests marks by using the custom function 'compareStrings()' ... ";
	multimap< string, uint, bool(*)(const string&, const string&)> *m4 = nullptr;
	m4 = new multimap< string, uint, bool(*)(const string&, const string&)>(compareStrings);
	cout << "ok" << endl;
	cout << "\tAdding several associations to the new multimap 'm4' ... ";
	m4->emplace(string("Student #4"), 18);
	m4->emplace(string("Student #6"), 25);
	m4->emplace_hint(m4->end(), string("Student #4"), 26);
	m4->emplace_hint(m4->end(), string("Student #5"), 28);
	m4->emplace_hint(m4->end(), string("Student #5"), 21);
	m4->emplace_hint(m4->end(), string("Student #4"), 24);
	cout << "ok" << endl;
	if (m4->empty() == true) cout << "\tThe new multimap 'm4' contains no association between the students and their tests marks." << endl;
	else
	{
		cout << "\tThe new multimap 'm4' contains the following " << m4->size() << " associations between the students and their tests marks, enumerated in the 'forward' direction (as they are stored):";
		cout<< endl << endl;
		n = 0;
		for (auto it = m4->begin();it != m4->end();it++, n++)
		{
			cout << "\t\t-) the student '" << it->first << "' receives " << it->second << " as the mark of his/her test";
			if (n == m4->size() - 1) cout << ".";
			else cout << ";";
			cout << endl;
		}

		/* We export EOL... */
		cout << endl;
		cout.flush();
	}

	/* TASK #6 - allocating a new C-like array by using the allocator of the multimap 'm4' */
	cout << "\tPress the RETURN key to continue ... ";
	cout.flush();
	cin.get();
	cout << endl;
	cout<<"\tAllocating a new C-like array of 6 locations (containing the pairs 'string'/'uint') by using the allocator of the multimap 'm4' ... ";
	std::pair<const string,uint>* p = m4->get_allocator().allocate(6);
	cout<<"ok"<<endl<<"\tInitializing the locations of the new C-like array ... ";
	m4->get_allocator().construct(&p[0],make_pair<const string,uint>(string("Zero"),0));
	m4->get_allocator().construct(&p[1],make_pair<const string,uint>(string("One"),1));
	m4->get_allocator().construct(&p[2],make_pair<const string,uint>(string("Two"),2));
	m4->get_allocator().construct(&p[3],make_pair<const string,uint>(string("Three"),3));
	m4->get_allocator().construct(&p[4],make_pair<const string,uint>(string("Four"),4));
	m4->get_allocator().construct(&p[5],make_pair<const string,uint>(string("Five"),5));
	cout<<"ok"<<endl<<"\tThe new allocated array contains the following associations between a 'string' and an 'uint' value:"<<endl<<endl;
	for(int i=0;i<6;i++) 
	{
		cout<<"\t\t-) the string '"<<p[i].first<<"' is associated with the 'uint' value "<<p[i].second;
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
	cout << "\tPress the RETURN key to continue ... ";
	cout.flush();
	cin.get();
	cout << endl;

	/* TASK #7 - Allocating a new multimap 'm5' by using a custom function for sorting the keys. */
	cout << "\tCreating a new multimap 'm5' for storing a bunch of associations between the students and their tests marks by using the 'std::greater<string>' struct ... ";
	multimap<string, uint, std::greater<string> > m5;
	cout << "ok" << endl;
	cout << "\tAdding several associations to the new multimap 'm5' ... ";
	m5.emplace(string("Student #4"), 18);
	m5.emplace(string("Student #6"), 25);
	m5.emplace_hint(m5.end(), string("Student #4"), 26);
	m5.emplace_hint(m5.end(), string("Student #5"), 28);
	m5.emplace_hint(m5.end(), string("Student #5"), 21);
	m5.emplace_hint(m5.end(), string("Student #4"), 24);
	cout << "ok" << endl;
	if (m5.empty() == true) cout << "\tThe new multimap 'm5' contains no association between the students and their tests marks." << endl;
	else
	{
		cout << "\tThe new multimap 'm5' contains the following " << m5.size() << " associations between the students and their tests marks, enumerated in the 'reverse' direction (with respect to their storing order):";
		cout<< endl << endl;
		n = 0;
		for (auto it = m5.rbegin();it != m5.rend();it++, n++)
		{
			cout << "\t\t-) the student '" << it->first << "' receives " << it->second << " as the mark of his/her test";
			if (n == m5.size() - 1) cout << ".";
			else cout << ";";
			cout << endl;
		}

		/* We export EOL... */
		cout << endl;
		cout.flush();
	}

	/* TASK 8 - Deallocating all multimaps, used in this test. */
	cout << "\tPress the RETURN key to continue ... ";
	cout.flush();
	cin.get();
	cout << endl;
	cout<<"\tDeallocating all multimaps and other auxiliary data structures in this test ... ";
	m0.clear();
	m1.clear();
	m2.clear();
	m3.clear();
	if(m4 != nullptr) { m4->clear(); delete m4; }
	m4=nullptr;
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

