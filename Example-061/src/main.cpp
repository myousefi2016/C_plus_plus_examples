/******************************************************************************************************************************
 * Examples in the C++ language (the 'Example-061' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), June 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-061' Test.
 *****************************************************************************************************************************/

#include <cstdlib>
#include <iostream>
#include <unordered_set>
using namespace std;

/// The main function for the <i>'Example-061'</i> Test.
int main(void)
{
	int n=0;

	/* This is the 'Example-061' Test, where the 'unordered set' containers are validated. */
    cout<<endl<<"\tThis is the 'Example-061' Test in the C++ language."<<endl<<endl;
    cout.flush();
    
    /* TASK #1 - validating the empty constructor for the unordered sets. */
    cout<<"\tCreating an empty unordered set 's0' of 'long' values ... ";
 	cout.flush();
 	unordered_set<long> s0;
 	cout<<"ok"<<endl;
 	cout<<"\t#values in the unordered set 's0' is "<<s0.size()<<"."<<endl;
    if(s0.empty()==true) cout<<"\tThe unordered set 's0' is empty."<<endl;
 	else cout<<"\tThe unordered set 's0' is not empty."<<endl;
 	cout<<"\tThe unordered set 's0' contains "<<s0.bucket_count()<<" buckets."<<endl<<endl;
	cout << "\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();
    
    /* TASK #2 - validating the constructor, which takes into the account a range of 'long' values. */
 	long ls[]= {50,30,20,10,40};
  	cout<<"\tCreating the unordered set 's1' by starting from a range of 'long' values ... ";
  	unordered_set<long> s1 (ls,ls+5);
  	cout<<"ok"<<endl;
  	cout<<"\t#values in the unordered set 's1' is "<<s1.size()<<"."<<endl;
  	if(s1.empty()==true) cout<<"\tThe unordered set 's1' is empty."<<endl;
 	else cout<<"\tThe unordered set 's1' is not empty."<<endl;
  	cout<<"\tThe maximum capacity of the unordered set 's1' is "<<s1.max_size()<<"."<<endl;
  	cout<<"\tThe unordered set 's1' contains "<<s1.bucket_count()<<" buckets."<<endl;
  	cout<<"\tEnumerating the 'long' values in the unordered set 's1':";
  	for(auto it=s1.cbegin();it!=s1.cend();it++) cout<<" "<<(*it);
  	cout<<"."<<endl<<endl;
  	cout << "\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();
    
    /* TASK #3 - validating the constructor, which creates a copy of an existing unordered set of 'long' values. */
  	cout<<"\tCreating a new unordered set 's2' as the copy of the unordered set 's1' ... ";
  	unordered_set<long> s2=unordered_set<long>(s1);
  	cout<<"ok"<<endl;
  	cout<<"\t#values in the unordered set 's2' is "<<s2.size()<<"."<<endl;
  	if(s2.empty()==true) cout<<"\tThe unordered set 's2' is empty."<<endl;
 	else cout<<"\tThe unordered set 's2' is not empty."<<endl;
 	if(s2!=s1) cout<<"\tThe 'long' values in the unordered sets 's1' and 's2' do not coincide position by position (with respect to the '!=' operator)."<<endl;
 	else cout<<"\tThe 'long' values in the unordered sets 's1' and 's2' coincide position by position (with respect to the '!=' operator)."<<endl;
 	cout<<"\tThe unordered set 's2' contains "<<s2.bucket_count()<<" buckets:"<<endl<<endl;
 	for(int k=0;k<s2.bucket_count();k++)
 	{
 		cout<<"\t\t-) the bucket #"<<k<<" contains ";
 		if(s2.bucket_size(k)==0)
		{
			cout<<"no 'long' value";
			if(k<s2.bucket_count()-1) cout<<";"<<endl;
			else cout<<"."<<endl;
		}
		else
		{
			if(s2.bucket_size(k)==1) cout<<"only the following 'long' value: ";
			else cout<<"the following "<<s2.bucket_size(k)<<" 'long' values: ";
			n=0;
			for(auto it=s2.begin(k);it!=s2.end(k);it++,n++) 
	    	{
	    		cout<<(*it);
	    		if(n==s2.bucket_size(k)-1) cout<<"."<<endl;
	    		else cout<<",";
	    	}
		}
 	}
 	
 	/* Now, we finalize this task! */
	cout<<endl<<"\tThe current load factor for the buckets in the unordered set 's2' is "<<s2.load_factor()<<"."<<endl;
 	cout<<"\tThe maximum load factor for the buckets in the unordered set 's2' is "<<s2.max_load_factor()<<"."<<endl;
 	cout<<"\tThe maximum number of the buckets in the unordered set 's2' is "<<s2.max_bucket_count()<<"."<<endl<<endl;
  	cout << "\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();
	
	/* TASK #4 - validating the constructor, which creates a copy of an existing unordered set of 'long' values. */
  	cout<<"\tCreating a new unordered set 's3' as the copy of the unordered set 's2' ... ";
  	unordered_set<long> s3=unordered_set<long>(s2.begin(),s2.end());
  	cout<<"ok"<<endl;
  	cout<<"\t#values in the unordered set 's3' is "<<s3.size()<<"."<<endl;
    if(s3.empty()==true) cout<<"\tThe unordered set 's3' is empty."<<endl;
 	else cout<<"\tThe unordered set 's3' is not empty."<<endl;
 	if(s2==s3) cout<<"\tThe 'long' values in the unordered sets 's2' and 's3' coincide position by position (with respect to the '==' operator)."<<endl;
 	else cout<<"\tThe 'long' values in the unordered sets 's2' and 's3' do not coincide position by position (with respect to the '==' operator)."<<endl;
 	if(s3.count(45)==0) cout<<"\tThe unordered set 's3' does not contain the 'long' value 45."<<endl;
 	else cout<<"\tThe unordered set 's3' contains the 'long' value 45."<<endl;
 	if(s3.count(20)==0) cout<<"\tThe unordered set 's3' does not contain the 'long' value 20."<<endl;
 	else cout<<"\tThe unordered set 's3' contains the 'long' value 20 in the bucket #"<<s3.bucket(20)<<"."<<endl;
	cout<<"\tRequesting to rehash the 'long' values in the unordered set 's3' in order to have at least 10 buckets (if possible) ... ";
	s3.rehash(10);
	cout<<"ok"<<endl;
	cout<<"\tThe unordered set 's3' contains "<<s3.bucket_count()<<" buckets, and the following " << s3.size() << " 'long' values:" << endl << endl;
	for(int k=0;k<s3.bucket_count();k++)
 	{
 		cout<<"\t\t-) the bucket #"<<k<<" contains ";
 		if(s3.bucket_size(k)==0)
		{
			cout<<"no 'long' value";
			if(k<s3.bucket_count()-1) cout<<";"<<endl;
			else cout<<"."<<endl;
		}
		else
		{
			if(s3.bucket_size(k)==1) cout<<"only the following 'long' value: ";
			else cout<<"the following "<<s3.bucket_size(k)<<" 'long' values: ";
			n=0;
			for(auto it=s3.begin(k);it!=s3.end(k);it++,n++) 
	    	{
	    		cout<<(*it);
	    		if(n==s3.bucket_size(k)-1) cout<<"."<<endl;
	    		else cout<<",";
	    	}
		}
 	}
 	
 	/* Now, we finalize this task! */
	cout<<endl<<"\tThe current load factor for the buckets in the unordered set 's3' is "<<s3.load_factor()<<"."<<endl;
	if(s3.count(20)==0) cout<<"\tThe unordered set 's3' does not contain the 'long' value 20."<<endl;
 	else cout<<"\tThe unordered set 's3' contains the 'long' value 20 in the bucket #"<<s3.bucket(20)<<"."<<endl<<endl;
  	cout << "\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();
	
	/* TASK #5 - Creating a new unordered set 's4' for performing the swapping operation. */
	cout << "\tCreating an empty unordered set 's4' for storing a bunch of 'long' values ... ";
	unordered_set<long> s4;
	cout<<"ok"<<endl;
	if (s4.empty() == true) cout << "\tThe new unordered set 's4' contains no 'long' value." << endl;
	else cout<<"\tThe new unordered set 's4' contains "<<s4.size()<<" 'long' values."<<endl;
	if (s3.empty() == true) cout << "\tThe existing unordered set 's3' contains no 'long' value." << endl;
	else cout<<"\tThe existing unordered set 's3' contains "<<s3.size()<<" 'long' values."<<endl;
	cout << "\tSwapping the content of the unordered sets 's3' and 's4' ... ";
	s3.swap(s4);
	cout<<"ok"<<endl;
	if (s3.empty() == true) cout << "\tThe existing unordered set 's3' contains no 'long' value." << endl;
	else cout<<"\tThe existing unordered set 's3' contains "<<s3.size()<<" 'long' values."<<endl;
	if (s4.empty() == true) cout << "\tThe new unordered set 's4' contains no 'long' value." << endl;
	else
	{
		cout<<"\tThe new unordered set 's4' contains "<<s4.size()<<" 'long' values, organized into "<<s4.bucket_count()<<" buckets:"<<endl<<endl;
		for(int k=0;k<s4.bucket_count();k++)
	 	{
	 		cout<<"\t\t-) the bucket #"<<k<<" contains ";
	 		if(s4.bucket_size(k)==0)
			{
				cout<<"no 'long' value";
				if(k<s4.bucket_count()-1) cout<<";"<<endl;
				else cout<<"."<<endl;
			}
			else
			{
				if(s4.bucket_size(k)==1) cout<<"only the following 'long' value: ";
				else cout<<"the following "<<s4.bucket_size(k)<<" 'long' values: ";
				n=0;
				for(auto it=s4.begin(k);it!=s4.end(k);it++,n++) 
		    	{
		    		cout<<(*it);
		    		if(n==s4.bucket_size(k)-1) cout<<"."<<endl;
		    		else cout<<",";
		    	}
			}
	 	}
	 	
	 	/* Now, we remove the 'long' value 20 from the unordered set 's4'. */
	 	cout<<endl<<"\tThe current load factor for the buckets in the unordered set 's4' is "<<s4.load_factor()<<"."<<endl;
	 	auto it = s4.find(20);
		if (it != s4.end())
		{
	 		cout<<"\tThe unordered set 's4' contains the 'long' value 20 in the bucket #"<<s4.bucket(20)<<"."<<endl;
	 		cout << "\tRemoving the 'long' value 20 from the unordered set 's4' ... ";
			s4.erase(it);
			cout << "ok" << endl;
			if(s4.count(20)==0) cout<<"\tThe unordered set 's4' does not contain the 'long' value 20."<<endl;
 			else cout<<"\tThe unordered set 's4' contains the 'long' value 20 in the bucket #"<<s4.bucket(20)<<"."<<endl;
	 		cout<<"\tThe unordered set 's4' contains "<<s4.size()<<" 'long' values, organized into "<<s4.bucket_count()<<" buckets:"<<endl<<endl;
	 		for(int k=0;k<s4.bucket_count();k++)
		 	{
		 		cout<<"\t\t-) the bucket #"<<k<<" contains ";
		 		if(s4.bucket_size(k)==0)
				{
					cout<<"no 'long' value";
					if(k<s4.bucket_count()-1) cout<<";"<<endl;
					else cout<<"."<<endl;
				}
				else
				{
					if(s4.bucket_size(k)==1) cout<<"only the following 'long' value: ";
					else cout<<"the following "<<s4.bucket_size(k)<<" 'long' values: ";
					n=0;
					for(auto it=s4.begin(k);it!=s4.end(k);it++,n++) 
			    	{
			    		cout<<(*it);
			    		if(n==s4.bucket_size(k)-1) cout<<"."<<endl;
			    		else cout<<",";
			    	}
				}
		 	}
		}
		else cout<<"\tThe unordered set 's4' does not contain the 'long' value 20."<<endl;
	}
	
	/* Now, we finalize this task! */
	cout<<endl<<"\tThe current load factor for the buckets in the unordered set 's4' is "<<s4.load_factor()<<"."<<endl<<endl;
  	cout << "\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();
	
	/* TASK #6 - allocating a new unordered set 's5' and adding several 'long' values. */
	unordered_set<long> *s5=nullptr;
	cout<<"\tAllocating a new empty unordered set 's5' ... ";
	s5=new unordered_set<long>();
	cout<<"ok"<<endl;
	cout<<"\tAdding several 'long' values to the new unordered set 's5' ... ";
	for(int k=0;k<4;k++) s5->insert(k);
	s5->emplace(23);
	s5->emplace(44);
	s5->emplace_hint(s5->end(),77);
	s5->emplace(22);
	s5->emplace_hint(s5->begin(),11);
	cout<<"ok"<<endl;
	cout<<"\tThe new unordered set 's5' contains "<<s5->size()<<" 'long' values, organized into "<<s5->bucket_count()<<" buckets:"<<endl<<endl;
	for(int k=0;k<s5->bucket_count();k++)
	{
		cout<<"\t\t-) the bucket #"<<k<<" contains ";
		 if(s5->bucket_size(k)==0)
		{
			cout<<"no 'long' value";
			if(k<s5->bucket_count()-1) cout<<";"<<endl;
			else cout<<"."<<endl;
		}
		else
		{
			if(s5->bucket_size(k)==1) cout<<"only the following 'long' value: ";
			else cout<<"the following "<<s5->bucket_size(k)<<" 'long' values: ";
			n=0;
			for(auto it=s5->begin(k);it!=s5->end(k);it++,n++) 
			{
				cout<<(*it);
			    if(n==s5->bucket_size(k)-1) cout<<"."<<endl;
			    else cout<<",";
			}
		}
	}
	
	/* Now, we finalize this task! */
	cout<<endl<<"\tThe current load factor for the buckets in the unordered set 's5' is "<<s5->load_factor()<<"."<<endl<<endl;
	cout << "\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();
	
	/* TASK #7 - allocating a new C-like array by using the allocator of the unordered set 's5' */
 	cout<<"\tAllocating a new C-like array of 7 locations by using the allocator of the unordered set 's5' ... ";
 	long *p = s5->get_allocator().allocate(7);
 	cout<<"ok"<<endl<<"\tInitializing the locations of the new C-like array ... ";
 	for(long i=0;i<7;i++) s5->get_allocator().construct(&p[i],i);
 	cout<<"ok"<<endl<<"\tThe 'long' values in the new allocated array are:";
 	for(long i=0;i<7;i++) cout<<" "<<*(p+i);
 	cout<<"."<<endl;
 	cout<<"\tDeallocating the new C-like array ... ";
 	for(long i=0;i<7;i++) s5->get_allocator().destroy(&p[i]);
 	s5->get_allocator().deallocate(p,7);
 	cout<<"ok"<<endl<<endl;
 	p=nullptr;
 	cout<<"\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();
	
	/* TASK #8: deallocating all unordered sets in this test. */
 	cout<<"\tDeallocating all unordered sets in this test ... ";
 	s0.clear();
	s1.clear();
	s2.clear();
	s3.clear();
	s4.clear();
	if(s5!=nullptr) { s5->clear(); delete s5; s5=nullptr; }
	cout<<"ok"<<endl<<endl;
	cout << "\tPress the RETURN key to finish ... ";
	cin.get();
	#ifndef _MSC_VER
		cout << endl;
		cout.flush();
	#endif
	return EXIT_SUCCESS;    
}