/**************************************************************************************************
 * Examples in the C++ language (the 'Example-065' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), June 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-065' Test.
 **************************************************************************************************/

#include <unordered_map>
#include <iostream>
using namespace std;
#ifndef uint
	typedef unsigned int uint;
#endif

/// The main function for the <i>'Example-065'</i> Test.
int main(void)
{
	
	/* This is the 'Example-065' Test, where the 'unordered_map' containers are validated. */
	cout<<endl<<"\tThis is the 'Example-065' Test in the C++ language."<<endl<<endl;
	cout.flush();
	
	/* TASK #1 - Creating an empty unordered map 'm0', containing no association. New associations will be added separately to the unordered map 'm0'. */
	cout<<"\tCreating a new unordered map 'm0' for storing associations between a 'string' and an 'uint' value ... ";
	unordered_map<string,uint> m0;
	cout<<"ok"<<endl;
	if(m0.empty()==true) cout<<"\tThe new unordered map 'm0' contains no association between a 'string' and an 'uint' value."<<endl;
	else cout<<"\tThe new unordered map 'm0' contains "<<m0.size()<<" associations between a 'string' and an 'uint' value."<<endl;
	cout<<"\tThe load factor for the new unordered map 'm0' is "<<m0.load_factor()<<"."<<endl;
	uint n=(uint)m0.bucket_count();
	if(n==0) cout<<"\tThe unordered map 'm0' has no bucket."<<endl;
	else if(n==1) cout<<"\tThe unordered map 'm0' has only one bucket."<<endl;
	else cout<<"\tThe unordered map 'm0' has "<<n<<" buckets."<<endl;
	cout<<"\tAdding several associations between a 'string' and an 'uint' value ... ";
	m0["One"]=(uint)1;
	m0["Two"]=(uint)2;
	m0["Eight"]=(uint)8;
	m0["Eleven"]=(uint)11;
	m0.insert(std::pair<string,uint>("Five",5));
	m0.insert(m0.begin(),std::pair<string,uint>("Four",4));
	cout<<"ok"<<endl;
	if (m0.empty() == true) cout << "\tThe new unordered map 'm0' contains no association between a 'string' and an 'uint' value." << endl;
	else
	{
		/* We export the associations in the not empty unordered map 'm0'. */
		cout<<"\tThe new unordered map 'm0' contains the following "<<m0.size()<<" associations between a 'string' and an 'uint' value:"<<endl<<endl;
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
	
	/* Now, we continue our analysis on the unordered map 'm0'. */
	cout << "\tThe maximum capacity of the unordered map 'm0' is " << m0.max_size() << "." << endl;
	n = (uint)m0.count("Four");
	if (n == 0) { cout << "\tThe unordered map 'm0' contains no association, involving the string 'Four'." << endl<<endl; }
	else { cout << "\tThe unordered map 'm0' contains the association between the string 'Four' and the 'uint' value "<<m0["Four"]<<"."<<endl<<endl; }
	cout << "\tPress the RETURN key to continue ... ";
	cout.flush();
	cin.get();
	cout << endl;
	cout.flush();
	
	/* TASK #2 - now, we analyze the buckets in the unordered map 'm0'. */
	cout<<"\tThe maximum buckets number in the unordered map 'm0' is "<<m0.max_bucket_count()<<"."<<endl;
	cout<<"\tThe unordered map 'm0' contains "<<m0.bucket_count()<<" buckets."<<endl<<endl;
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
	    		cout<<"\t\t\t-) the string '"<<it->first<<"' is associated with the 'uint' value "<<it->second; 
	    		if(n==m0.bucket_size(k)-1) cout<<"."<<endl;
	    		else cout<<";";
	    		cout<<endl; 
	    	}
		}
	}
	
	/* Now, we finalize this task! */
	cout<<"\tThe load factor for the unordered map 'm0' is "<<m0.load_factor()<<"."<<endl;
	cout<<"\tThe maximum load factor for the unordered map 'm0' is "<<m0.max_load_factor()<<"."<<endl<<endl;
	cout << "\tPress the RETURN key to continue ... ";
	cout.flush();
	cin.get();
	cout << endl;
	cout.flush();
	
	/* TASK #3 - Creating a copy of another unordered map. */
	cout << "\tCreating the copy 'm1' of the existing unordered map 'm0' ... ";
	unordered_map<string, uint> m1(m0.begin(), m0.end());
	cout<<"ok"<<endl;
	if (m1.empty() == true) cout << "\tThe new unordered map 'm1' contains no association between a 'string' and an 'uint' value." << endl;
	else cout << "\tThe new unordered map 'm1' contains " << m1.size() << " associations between a 'string' and an 'uint' value." << endl;
	cout<<"\tThe unordered map 'm1' contains "<<m1.bucket_count()<<" buckets."<<endl;
	if (m0 == m1) cout << "\tThe unordered maps 'm0' and 'm1' contain exactly the same associations between a 'string' and an 'uint' value (with respect to the '==' operator)." << endl;
	else cout << "\tThe unordered maps 'm0' and 'm1' do not contain exactly the same associations between a 'string' and an 'uint' value (with respect to the '==' operator)." << endl;
	if (m1.count("Three") == 0) { cout << "\tThe unordered map 'm1' contains no association, involving the string 'Three'." << endl; }
	else { cout<<"\tThe unordered map 'm1' contains the association between the string 'Three' and the 'uint' value "<<m1.at("Three")<<"."<<endl; }
	if (m1.find("Eight")==m1.end()) { cout << "\tThe unordered map 'm1' contains no association, involving the string 'Eight'." << endl<<endl; }
	else { cout<<"\tThe unordered map 'm1' contains the association between the string 'Eight' and the 'uint' value "<<m1.at("Eight")<<"."<<endl<<endl; }
	cout<<"\tThe association, involving the string 'One', is stored in the bucket #"<<m1.bucket(string("One"))<<" of the unordered map 'm1'."<<endl;
	cout<<"\tThe association, involving the string 'Two', is stored in the bucket #"<<m1.bucket(string("Two"))<<" of the unordered map 'm1'."<<endl;
	cout<<"\tThe association, involving the string 'Eight', is stored in the bucket #"<<m1.bucket(string("Eight"))<<" of the unordered map 'm1'."<<endl;
	cout<<"\tThe association, involving the string 'Eleven', is stored in the bucket #"<<m1.bucket(string("Eleven"))<<" of the unordered map 'm1'."<<endl;
	cout<<"\tThe association, involving the string 'Five', is stored in the bucket #"<<m1.bucket(string("Five"))<<" of the unordered map 'm1'."<<endl;
	cout<<"\tThe association, involving the string 'Four', is stored in the bucket #"<<m1.bucket(string("Four"))<<" of the unordered map 'm1'."<<endl<<endl;
	cout << "\tPress the RETURN key to continue ... ";
	cout.flush();
	cin.get();
	cout << endl;
	cout.flush();
	
	/* TASK #4 - Creating again a copy of another map. */
	cout << "\tCreating the copy 'm2' of the existing unordered map 'm1' by using the '=' operator ... ";
	auto m2 = m1;
	cout << "ok" << endl;
	if (m1 == m2) cout << "\tThe unordered maps 'm1' and 'm2' contain exactly the same associations between a 'string' and an 'uint' value (with respect to the '==' operator)." << endl;
	else cout << "\tThe unordered maps 'm1' and 'm2' do not contain exactly the same associations between a 'string' and an 'uint' value (with respect to the '==' operator)." << endl;
	cout << "\tThe unordered map 'm2' contains " << m2.size() << " associations between a 'string' and an 'uint' value." << endl << endl;
	auto it = m2.find("Four");
	if (it != m2.end())
	{
		cout << "\tThe unordered map 'm2' contains the association between the string 'Four' and the 'uint' value " << m2["Four"]<<"."<<endl;
		cout << "\tRemoving the association, involving the string 'Four', from the unordered map 'm2' ... ";
		m2.erase(it);
		cout<<"ok"<<endl;
		n = 0;
		cout<<"\tThe unordered map 'm2' contains "<<m2.bucket_count()<<" buckets, and the following " << m2.size() << " associations between a 'string' and an 'uint' value:" << endl << endl;
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
	    			cout<<"\t\t\t-) the string '"<<it->first<<"' is associated with the 'uint' value "<<it->second; 
	    			if(n==m2.bucket_size(k)-1) cout<<"."<<endl;
	    			else cout<<";";
	    			cout<<endl; 
	    		}
			}
		}
		
		/* We export EOL... */
		cout << endl;
		cout.flush();
	}
	else cout << "\tThe unordered map 'm2' contains no association, involving the string 'Four'" << endl;
	if (m1 == m2) cout << "\tThe unordered maps 'm1' and 'm2' contain exactly the same associations between a 'string' and an 'uint' value (with respect to the '==' operator)." << endl<<endl;
	else cout << "\tThe unordered maps 'm1' and 'm2' do not contain exactly the same associations between a 'string' and an 'uint' value (with respect to the '==' operator)." << endl<<endl;
	cout<<"\tThe current load factor for the unordered map 'm2' is "<<m2.load_factor()<<"."<<endl;
	cout<<"\tRequesting to rehashing the associations in the unordered map 'm2' in order to have at least 5 buckets (if possible) ... ";
	m2.rehash(5);
	cout<<"ok"<<endl;
	cout<<"\tThe unordered map 'm2' contains "<<m2.bucket_count()<<" buckets, and the following " << m2.size() << " associations between a 'string' and an 'uint' value:" << endl << endl;
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
	    		cout<<"\t\t\t-) the string '"<<it->first<<"' is associated with the 'uint' value "<<it->second; 
	    		if(n==m2.bucket_size(k)-1) cout<<"."<<endl;
	    		else cout<<";";
	    		cout<<endl; 
	    	}
		}
	}
		
	/* We export EOL... */
	cout << endl;
	cout.flush();
	cout<<"\tThe new load factor for the unordered map 'm2' is "<<m2.load_factor()<<"."<<endl<<endl;
	cout << "\tPress the RETURN key to continue ... ";
	cout.flush();
	cin.get();
	cout << endl;
	cout.flush();
	
	/* TASK #5 - Creating a new unordered map 'm3' for performing the swapping operation. */
	cout << "\tCreating an empty unordered map 'm3' for storing a bunch of associations between a 'string' and an 'uint' value ... ";
	unordered_map<string, uint> m3;
	cout << "ok" << endl;
	if (m3.empty() == true) cout << "\tThe new unordered map 'm3' contains no association between a 'string' and an 'uint' value." << endl;
	else cout << "\tThe new unordered map 'm3' contains " << m3.size() << " associations between a 'string' and an 'uint' value." << endl;
	if (m2.empty() == true) cout << "\tThe existing unordered map 'm2' contains no association between a 'string' and an 'uint' value." << endl;
	else cout << "\tThe existing unordered map 'm2' contains " << m2.size() << " associations between a 'string' and an 'uint' value." << endl;
	cout << "\tSwapping the content of the unordered maps 'm2' and 'm3' ... ";
	m2.swap(m3);
	cout << "ok" << endl;
	if (m3.empty() == true) cout << "\tThe new unordered map 'm3' contains no association between a 'string' and an 'uint' value." << endl;
	else cout << "\tThe new unordered map 'm3' contains " << m3.size() << " associations between a 'string' and an 'uint' value." << endl;
	if (m2.empty() == true) cout << "\tThe existing unordered map 'm2' contains no association between a 'string' and an 'uint' value." << endl << endl;
	else cout << "\tThe existing unordered map 'm2' contains " << m2.size() << " associations between a 'string' and an 'uint' value." << endl << endl;
	cout << "\tPress the RETURN key to continue ... ";
	cout.flush();
	cin.get();
	cout << endl;
	
	/* TASK #6 - allocating a new unordered map 'm4' for storing a bunch of associations between a 'string' and an 'uint' value. */
	cout << "\tAllocating a new unordered map 'm4' for storing a bunch of associations between a 'string' and an 'uint' value ... ";
	unordered_map< string, uint> *m4 = nullptr;
	m4 = new unordered_map< string, uint>();
	cout << "ok" << endl;
	cout << "\tAdding several associations to the new unordered map 'm4' ... ";
	m4->emplace(string("Thirteen"), 13);
	m4->emplace(string("Fourteen"),14);
	m4->emplace_hint(m4->end(),string("Nine"),9);
	m4->emplace(string("One"),1);
	m4->emplace_hint(m4->end(),string("Ten"),10);
	cout<<"ok"<<endl;
	cout<<"\tThe buckets number for the new unordered map 'm4' is "<<m4->bucket_count()<<"."<<endl;
	n=0;
	if (m4->empty() == true) cout << "\tThe new unordered map 'm4' contains no association between a 'string' and an 'uint' value." << endl;
	else
	{
		/* We export the associations in the not empty unordered map 'm4'. */
		cout<<"\tThe new unordered map 'm4' contains the following "<<m4->size()<<" associations between a 'string' and an 'uint' value:"<<endl<<endl;
		for(auto it=m4->cbegin();it!=m4->cend();it++,n++) 
	    { 
	    	cout<<"\t\t-) the string '"<<it->first<<"' is associated with the 'uint' value "<<it->second; 
	    	if(n==m4->size()-1) cout<<".";
	    	else cout<<";";
	    	cout<<endl; 
	    }
  	
		/* We export EOL... */
		cout<<endl;
		cout.flush();
	}
	
	/* Now, we finalize this task. */
	cout<<"\tThe load factor for the new unordered map 'm4' is "<<m4->load_factor()<<"."<<endl<<endl;
	cout << "\tPress the RETURN key to continue ... ";
	cout.flush();
	cin.get();
	cout << endl;
	
	/* TASK #7 - allocating a new C-like array by using the allocator of the unordered map 'm4' */
	cout << "\tAllocating a new C-like array of 6 locations (containing the pairs 'string'/'uint') by using the allocator of the unordered map 'm4' ... ";
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

	/* TASK 8 - Deallocating all unordered maps, used in this test. */
	cout << "\tDeallocating all unordered maps in this test ... ";
	m0.clear();
	m1.clear();
	m2.clear();
	m3.clear();
	if (m4 != nullptr) { m4->clear(); delete m4; }
	m4 = nullptr;
	cout << "ok" << endl << endl;
	cout << "\tPress the RETURN key to finish ... ";
	cin.get();
	#ifndef _MSC_VER
		cout << endl;
		cout.flush();
	#endif
	return EXIT_SUCCESS;
}
