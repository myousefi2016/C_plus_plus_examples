/**********************************************************************************************************************
 * Examples in the C++ language (the 'Example-066' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), June 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-066' Test.
 **********************************************************************************************************************/
#include <iostream>
#include <cstdlib>
#include <string>
#include <unordered_map>
using namespace std;
#ifndef uint
	typedef unsigned int uint;
#endif

/// The main function for the <i>'Example-066'</i> Test.
int main(void)
{
	uint n = 0;

	/* This is the 'Example-066' Test, where the 'unordered multimap' containers are validated. */
	cout << endl << "\tThis is the 'Example-066' Test in the C++ language." << endl << endl;
	cout.flush();
	
	/* TASK #1 - Creating an empty unordered multimap 'm0', containing no association. New associations will be added separately to the unordered multimap 'm0'. */
	cout << "\tCreating a new unordered multimap 'm0' for storing a bunch of associations between the students and their tests marks ... ";
	unordered_multimap<string, uint> m0;
	cout << "ok" << endl;
	if (m0.empty() == true) cout << "\tThe new unordered multimap 'm0' contains no association between the students and their tests marks." << endl;
	else cout << "\tThe new unordered multimap 'm0' contains " << m0.size() << " associations between the students and their tests marks." << endl;
	if(m0.bucket_count()==0) cout << "\tThe new unordered multimap 'm0' contains no bucket for storing associations between the students and their tests marks." << endl;
	else cout << "\tThe new unordered multimap 'm0' contains "<<m0.bucket_count()<<" buckets for storing associations between the students and their tests marks." << endl;
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
	if (m0.empty() == true) cout << "\tThe new unordered multimap 'm0' contains no association between the students and their tests marks." << endl;
	else
	{
		/* We export the associations in the not empty unordered multimap 'm0'. */
		cout << "\tThe new unordered multimap 'm0' contains the following " << m0.size() << " associations between the students and their tests marks:";
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
	
	/* Now, we continue our analysis on the unordered multimap 'm0'. */
	cout << "\tThe maximum capacity of the unordered multimap 'm0' is " << m0.max_size() << "." << endl<<endl;
	cout << "\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();
	
	/* TASK #2 - we analyze the buckets in the unordered multimap 'm0'. */
	cout <<"\t#buckets in the unordered multimap 'm0' is " << m0.bucket_count() << "." << endl<<endl;
	for(uint k=0;k<m0.bucket_count();k++)
	{
		cout<<"\t\t-) the bucket #"<<k<<" contains ";
		if(m0.bucket_size(k)==0)
		{
			cout<<"no association";
			if(k<m0.bucket_count()-1) cout<<";"<<endl;
			else cout<<"."<<endl;
		}
		else
		{
			if(m0.bucket_size(k)==1) cout<<"only the following association:"<<endl<<endl;
			else cout<<"the following "<<m0.bucket_size(k)<<" associations:"<<endl<<endl;
			n=0;
			for(auto it=m0.begin(k);it!=m0.end(k);it++,n++) 
	    	{ 
	    		cout << "\t\t\t-) the student '" << it->first << "' receives " << it->second << " as the mark of his/her test";
	    		if(n==m0.bucket_size(k)-1) cout<<"."<<endl;
	    		else cout<<";";
	    		cout<<endl; 
	    	}
		}
	}
	
	/* Now, we finalize this task! */
	cout<<endl<<"\tThe current load factor for the buckets in the ordered multimap 'm0' is "<<m0.load_factor()<<"."<<endl;
	cout<<"\tThe maximum load factor for the buckets in the ordered multimap 'm0' is "<<m0.max_load_factor()<<"."<<endl<<endl;
	cout << "\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();
	
	 /* TASK #3 - Creating a copy of another unordered multimap. */
	 cout << "\tCreating the copy 'm1' of the existing unordered multimap 'm0' ... ";
	unordered_multimap<string, uint> m1(m0.begin(), m0.end());
	cout<<"ok"<<endl;
	if (m1.empty() == true) cout << "\tThe new unordered multimap 'm1' contains no association between the students and their tests marks."<<endl;
	else cout << "\tThe new unordered multimap 'm1' contains " << m1.size() << " associations between the students and their tests marks." << endl;
	cout<<"\tThe unordered multimap 'm1' contains "<<m1.bucket_count()<<" buckets."<<endl;
	if (m0 == m1) cout << "\tThe unordered multimaps 'm0' and 'm1' contain exactly the same associations between the students and their tests marks (with respect to the '==' operator)." << endl;
	else cout << "\tThe unordered multimaps 'm0' and 'm1' do not contain exactly the same associations between the students and their tests marks (with respect to the '==' operator)." << endl;
	n = (uint)m1.count("Student #1");
	if (n == 0) { cout << "\tThe unordered multimap 'm1' contains no association, involving the student 'Student #1'." << endl; }
	else { cout << "\tThe unordered multimap 'm1' contains (at least) one association, involving the student 'Student #1' (in particular " << n << " associations)." << endl; }
	cout<<"\tAll associations, involving the student 'Student #1', are stored in the bucket #"<<m1.bucket(string("Student #1"))<<" of the unordered multimap 'm1'."<<endl;
	cout<<"\tAll associations, involving the student 'Student #2', are stored in the bucket #"<<m1.bucket(string("Student #2"))<<" of the unordered multimap 'm1'."<<endl;
	cout<<"\tAll associations, involving the student 'Student #3', are stored in the bucket #"<<m1.bucket(string("Student #3"))<<" of the unordered multimap 'm1'."<<endl<<endl;
	cout << "\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();
	
	/* TASK #4 - Creating again a copy of another unordered multimap. */
	cout << "\tCreating the copy 'm2' of the existing unordered multimap 'm1' by using the '=' operator ... ";
	auto m2 = m1;
	cout << "ok" << endl;
	if (m2.empty() == true) cout << "\tThe new unordered multimap 'm2' contains no association between the students and their tests marks."<<endl;
	else cout << "\tThe new unordered multimap 'm2' contains " << m2.size() << " associations between the students and their tests marks." << endl;
	cout<<"\tThe unordered multimap 'm2' contains "<<m2.bucket_count()<<" buckets."<<endl;
	cout<<"\tThe load factor for the new unordered multimap 'm2' is "<<m2.load_factor()<<"."<<endl;
	if (m1 != m2) cout << "\tThe unordered multimaps 'm1' and 'm2' do not contain exactly the same associations between the students and their tests marks (with respect to the '!=' operator)." << endl;
	else cout << "\tThe unordered multimaps 'm1' and 'm2' contain exactly the same associations between the students and their tests marks (with respect to the '!=' operator)." << endl;
	auto it = m2.find("Student #1");
	if (it != m2.end())
	{
		n = (uint)m2.count("Student #1");
		cout << "\tThe unordered multimap 'm2' contains at least one association, involving the student 'Student #1' (specifically, " << n << " associations)." << endl;
		do 
		{ 
			cout << "\tRemoving an association, involving the student 'Student #1', from the unordered multimap 'm2' ... ";
			m2.erase(it);
			cout << "ok" << endl;
		} 
		while ((it = m2.find("Student #1")) != m2.end());
		n = (uint)m2.count("Student #1");
		if (n == 0) cout << "\tThe unordered multimap 'm2' contains no association, involving the student 'Student #1'." << endl;
		else if(n==1) cout << "\tThe unordered multimap 'm2' contains only one association, involving the student 'Student #1'." << endl;
		else cout << "\tThe unordered multimap 'm2' contains "<<n<<" associations, involving the student 'Student #1'." << endl;
		cout << "\tThe unordered multimap 'm2' contains " << m2.size() << " associations between the students and their tests marks." << endl;
		if (m1 != m2) cout << "\tThe unordered multimaps 'm1' and 'm2' do not contain exactly the same associations between the students and their tests marks (with respect to the '!=' operator)." << endl;
		else cout << "\tThe unordered multimaps 'm1' and 'm2' contain exactly the same associations between the students and their tests marks (with respect to the '!=' operator)." << endl;
	}
	
	/* Now, we finalize this task! */
	cout << endl << "\tPress the RETURN key to continue ... ";
	cout.flush();
	cin.get();
	cout << endl;
	
	/* TASK #5 - analyzing the load factor for the unordered multimap 'm2', and rehashing its buckets. */
	cout<<"\tThe current load factor for the unordered multimap 'm2' is "<<m2.load_factor()<<"."<<endl;
	cout<<"\tThe unordered multimap 'm2' contains "<<m2.bucket_count()<<" buckets."<<endl<<endl;
	for(uint k=0;k<m2.bucket_count();k++)
	{
		cout<<"\t\t-) the bucket #"<<k<<" contains ";
		if(m2.bucket_size(k)==0)
		{
			cout<<"no association";
			if(k<m2.bucket_count()-1) cout<<";"<<endl;
			else cout<<"."<<endl;
		}
		else
		{
			if(m2.bucket_size(k)==1) cout<<"only the following association:"<<endl<<endl;
			else cout<<"the following "<<m2.bucket_size(k)<<" associations:"<<endl<<endl;
			n=0;
			for(auto it=m2.begin(k);it!=m2.end(k);it++,n++) 
	    	{ 
	    		cout << "\t\t\t-) the student '" << it->first << "' receives " << it->second << " as the mark of his/her test";
	    		if(n==m2.bucket_size(k)-1) cout<<"."<<endl;
	    		else cout<<";";
	    		cout<<endl; 
	    	}
		}
	}
	
	/* Now, we rehash all associations in the unordered multimap 'm2'. */
	cout<<endl<<"\tRequesting to rehash the associations in the unordered multimap 'm2' in order to have at least 5 buckets (if possible) ... ";
	m2.rehash(5);
	cout<<"ok"<<endl;
	cout<<"\tThe unordered multimap 'm2' contains "<<m2.bucket_count()<<" buckets, and the following " << m2.size() << " associations between the students and their tests marks:" << endl << endl;
	for(uint k=0;k<m2.bucket_count();k++)
	{
		cout<<"\t\t-) the bucket #"<<k<<" contains ";
		if(m2.bucket_size(k)==0)
		{
			cout<<"no association";
			if(k<m2.bucket_count()-1) cout<<";"<<endl;
			else cout<<"."<<endl;
		}
		else
		{
			if(m2.bucket_size(k)==1) cout<<"only the following association:"<<endl<<endl;
			else cout<<"the following "<<m2.bucket_size(k)<<" associations:"<<endl<<endl;
			n=0;
			for(auto it=m2.begin(k);it!=m2.end(k);it++,n++) 
	    	{ 
	    		cout << "\t\t\t-) the student '" << it->first << "' receives " << it->second << " as the mark of his/her test";
	    		if(n==m2.bucket_size(k)-1) cout<<"."<<endl;
	    		else cout<<";";
	    		cout<<endl; 
	    	}
		}
	}
	
	/* Now, we finalize this task! */
	cout<<endl<<"\tThe current load factor for the unordered multimap 'm2' is "<<m2.load_factor()<<"."<<endl<<endl;
	cout << "\tPress the RETURN key to continue ... ";
	cout.flush();
	cin.get();
	cout << endl;
	
	/* TASK #6 - Creating a new unordered multimap 'm3' for performing the swapping operation. */
	cout << "\tCreating an empty unordered multimap 'm3' for storing a bunch of associations between the students and their tests marks ... ";
	unordered_multimap<string,uint> m3;
	cout<<"ok"<<endl;
	if (m3.empty() == true) cout << "\tThe new unordered multimap 'm3' contains no association between the students and their tests marks." << endl;
	else cout<<"\tThe new unordered multimap 'm3' contains "<<m3.size()<<" associations between the students and their tests marks."<<endl;
	if(m1.empty()==true) cout<<"\tThe existing unordered multimap 'm1' contains no association between the students and their tests marks."<<endl;
	else cout<<"\tThe existing unordered multimap 'm1' contains "<<m1.size()<<" associations between the students and their tests marks."<<endl;
	cout << "\tSwapping the content of the unordered multimaps 'm1' and 'm3' ... ";
	m1.swap(m3);
	cout<<"ok"<<endl;
	if (m3.empty() == true) cout << "\tThe new unordered multimap 'm3' contains no association between the students and their tests marks." << endl;
	else cout<<"\tThe new unordered multimap 'm3' contains "<<m3.size()<<" associations between the students and their tests marks."<<endl;
	if(m1.empty()==true) cout<<"\tThe existing unordered multimap 'm1' contains no association between the students and their tests marks."<<endl<<endl;
	else cout<<"\tThe existing unordered multimap 'm1' contains "<<m1.size()<<" associations between the students and their tests marks."<<endl<<endl;
	cout << "\tPress the RETURN key to continue ... ";
	cout.flush();
	cin.get();
	cout << endl;
	
	/* TASK #7 - Allocating a new unordered multimap 'm4'. */
	cout << "\tAllocating a new unordered multimap 'm4' for storing a bunch of associations between the students and their tests marks ... ";
	unordered_multimap< string, uint > *m4 = nullptr;
	m4 = new unordered_multimap< string, uint >();
	cout << "ok" << endl;
	cout << "\tAdding several associations to the new unordered multimap 'm4' ... ";
	m4->emplace(string("Student #4"), 18);
	m4->emplace(string("Student #6"), 25);
	m4->emplace_hint(m4->end(), string("Student #4"), 26);
	m4->emplace_hint(m4->end(), string("Student #5"), 28);
	m4->emplace_hint(m4->end(), string("Student #5"), 21);
	m4->emplace_hint(m4->end(), string("Student #4"), 24);
	cout << "ok" << endl;
	if (m4->empty() == true) cout << "\tThe new unordered multimap 'm4' contains no association between the students and their tests marks." << endl;
	else
	{
		cout << "\tThe new unordered multimap 'm4' contains the following " << m4->size() << " associations between the students and their tests marks:";
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
	
	/* TASK #8 - allocating a new C-like array by using the allocator of the unordered multimap 'm4' */
	cout << "\tPress the RETURN key to continue ... ";
	cout.flush();
	cin.get();
	cout << endl;
	cout<<"\tAllocating a new C-like array of 6 locations (containing the pairs 'string'/'uint') by using the allocator of the unordered multimap 'm4' ... ";
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

	/* TASK #9 - Deallocating all unordered multimaps, used in this test. */
	cout<<"\tDeallocating all unordered multimaps in this test ... ";
	m0.clear();
	m1.clear();
	m2.clear();
	m3.clear();
	if(m4 != nullptr) { m4->clear(); delete m4; }
	m4=nullptr;
	cout << "ok" << endl << endl;
	cout << "\tPress the RETURN key to finish ... ";
	cin.get();
	#ifndef _MSC_VER
		cout << endl;
		cout.flush();
	#endif
	return EXIT_SUCCESS;
}
