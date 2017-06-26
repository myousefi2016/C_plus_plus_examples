/**********************************************************************************************************************
 * Examples in the C++ language (the 'Example-067' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), June 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-067' Test.
 **********************************************************************************************************************/

#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <limits>
using namespace std;

/// This function simulates a pause while this test runs.
void pause()
{
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	cin.clear();
	cout << "\tPress the RETURN key to finish ... ";
	cout.flush();
	cin.get();
	#ifndef _MSC_VER
		cout << endl;
		cout.flush();
	#endif
}

/// The main function for the <i>'Example-067'</i> Test.
int main(void)
{
	/* This is the 'Example-067' Test, where the 'string' containers are validated. */
	cout << endl << "\tThis is the 'Example-067' Test in the C++ language." << endl << endl;
	cout.flush();
	
	/* TASK #1 - creating an empty 'string' container 's0'. */
	cout<<"\tCreating a new 'string' container 's0' ... ";
	string s0;
	cout<<"ok"<<endl;
	if(s0.empty()==true) cout<<"\tThe new 'string' container 's0' is empty."<<endl;
	else cout<<"\tThe new 'string' container 's0' is not empty."<<endl;
	cout<<"\tThe 'string' container 's0' stores "<<s0.size()<<" character(s)."<<endl;
	cout<<"\tThe capacity of the 'string' container 's0' is "<<s0.capacity()<<" character(s)."<<endl;
	cout<<"\tResizing the length of the 'string' container 's0' ... ";
	s0.resize(10);
	cout<<"ok"<<endl;
	cout<<"\tThe 'string' container 's0' stores "<<s0.size()<<" character(s)."<<endl;
	cout<<"\tShrinking to fit the capacity and the size of the 'string' container 's0' ... ";
	s0.shrink_to_fit();
	cout<<"ok"<<endl;
	cout<<"\tThe 'string' container 's0' contains "<<s0.length()<<" character(s)."<<endl;
	cout<<"\tThe capacity of the 'string' container 's0' is "<<s0.capacity()<<" character(s)."<<endl;
	cout<<"\tThe maximum dimension of the 'string' container 's0' is "<<s0.max_size()<<" character(s)."<<endl<<endl;
	cout << "\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();
	
	/* TASK #2 - creating another 'string' container 's1'. */
	cout<<"\tCreating a new 'string' container 's1' ... ";
	string s1 (100,'x');
	cout<<"ok"<<endl;
	if(s1.empty()==true) cout<<"\tThe new 'string' container 's1' is empty."<<endl;
	else cout<<"\tThe new 'string' container 's1' is not empty."<<endl;
	cout<<"\tThe 'string' container 's1' stores "<<s1.size()<<" character(s)."<<endl;
	cout<<"\tThe capacity of the 'string' container 's1' is "<<s1.capacity()<<" character(s)."<<endl;
	cout<<"\tResizing the length of the 'string' container 's1' ... ";
	s1.resize(15);
	cout<<"ok"<<endl;
	cout<<"\tThe 'string' container 's1' stores "<<s1.size()<<" character(s)."<<endl;
	cout<<"\tThe capacity of the 'string' container 's1' is "<<s1.capacity()<<" character(s)."<<endl;
	cout<<"\tShrinking to fit the capacity and the size of the 'string' container 's1' ... ";
	s1.shrink_to_fit();
	cout<<"ok"<<endl;
	cout<<"\tThe 'string' container 's1' stores "<<s1.size()<<" character(s)."<<endl;
	cout<<"\tThe capacity of the 'string' container 's1' is "<<s1.capacity()<<" character(s)."<<endl;
	int n=0;
	cout<<"\tThe 'string' container 's1' contains the following characters:";
	for(auto it=s1.cbegin();it!=s1.end();it++,n++)
	{
		cout<<" "<<"'"<<(*it)<<"'";
		if(n>=s1.length()-1) cout<<"."<<endl<<endl;
	}
	
	/* If we arrive here, we can finalize this task! */
	cout << "\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();
	
	/* TASK #3 - creating a copy 's2' of the 'string' container 's1'. */
	cout<<"\tCreating a copy 's2' of the 'string' container 's1' ... ";
	auto s2=s1;
	cout<<"ok"<<endl;
	if(s2.empty()==true) cout<<"\tThe new 'string' container 's2' is empty."<<endl;
	else cout<<"\tThe new 'string' container 's2' is not empty."<<endl;
	cout<<"\tThe 'string' container 's2' stores "<<s2.size()<<" character(s)."<<endl;
	cout<<"\tThe first character in the 'string' container 's2' is '"<<s2.front()<<"'."<<endl;
	cout<<"\tThe last character in the 'string' container 's2' is '"<<s2.back()<<"'."<<endl;
	if(s1==s2) cout<<"\tThe 'string' containers 's1' and 's2' contain the same sequence of characters (with respect to the '==' operator)."<<endl;
	else cout<<"\tThe 'string' containers 's1' and 's2' do not contain the same sequence of characters (with respect to the '==' operator)."<<endl;
	if(s1.compare(s2)==0) cout<<"\tThe 'string' containers 's1' and 's2' contain the same sequence of characters (with respect to the 'compare()' member function)."<<endl;
	else cout<<"\tThe 'string' containers 's1' and 's2' do not contain the same sequence of characters (with respect to the 'compare()' member function)."<<endl;
	if(s1!=s2) cout<<"\tThe 'string' containers 's1' and 's2' do not contain the same sequence of characters (with respect to the '!=' operator)."<<endl;
	else cout<<"\tThe 'string' containers 's1' and 's2' contain the same sequence of characters (with respect to the '!=' operator)."<<endl;
	if( s1.length()==strlen(s2.c_str()))
	{
		if(memcmp(s2.c_str(),s1.data(), s1.length() ) == 0) cout<<"\tThe 'string' containers 's1' and 's2' contain the same sequence of characters (with respect to the 'memcmp()' function, and the 'data()' and the 'c_str()' member functions)."<<endl;
		else cout<<"\tThe 'string' containers 's1' and 's2' do not contain the same sequence of characters (with respect to the 'memcmp()' function, and the 'data()' and the 'c_str()' member functions)."<<endl;
	}
	else cout<<"\tThe 'string' containers 's1' and 's2' do not contain the same sequence of characters (with respect to the 'memcmp()' function, and the 'data()' and the 'c_str()' member functions)."<<endl;
	cout<<"\tRemoving the last character '"<<*(s1.rbegin())<<"' in the 'string' container 's2' (currently with "<<s2.size()<<" characters) ... ";
	s2.pop_back();
	cout<<"ok"<<endl;
	cout<<"\tThe new content of the 'string' container 's2' consists of the following "<<s2.size()<<" characters: '"<<s2<<"'."<<endl;
	cout<<"\tConcatenating a new character 'z' to the 'string' container 's2' ... ";
	s2+='z';
	cout<<"ok"<<endl;
	cout<<"\tThe new content of the 'string' container 's2' consists of the following "<<s2.size()<<" characters: '"<<s2<<"'."<<endl;
	cout<<"\tThe first character in the 'string' container 's2' is '"<<s2.front()<<"'."<<endl;
	cout<<"\tThe last character in the 'string' container 's2' is '"<<s2.back()<<"'."<<endl;
	cout<<"\tSwapping the first and the last characters in the 'string' container 's2' ... ";
	swap_ranges(s2.begin(),s2.begin()+1,s2.rbegin());
	cout<<"ok"<<endl;
	cout<<"\tThe new content of the 'string' container 's2' consists of the following "<<s2.size()<<" characters: '"<<s2<<"'."<<endl;
	cout<<"\tThe new first character in the 'string' container 's2' is '"<<s2.front()<<"'."<<endl;
	cout<<"\tThe new last character in the 'string' container 's2' is '"<<s2.back()<<"'."<<endl<<endl;
	cout << "\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();
	
	/* TASK #4 - creating a copy 's3' of the 'string' container 's2'. */
	cout<<"\tCreating a copy 's3' of the 'string' container 's2' ... ";
	auto s3=string(s2.begin(),s2.end());
	cout<<"ok"<<endl;
	if(s3==s2) cout<<"\tThe 'string' containers 's2' and 's3' contain the same sequence of characters (with respect to the '==' operator)."<<endl;
	else cout<<"\tThe 'string' containers 's2' and 's3' do not contain the same sequence of characters (with respect to the '==' operator)."<<endl;
	cout<<"\tModifying some characters in the 'string' container 's3' ... ";
	for(int k=0;k<4;k++) s3[k]='a';
	s3[4]='3';
	s3.replace(s3.begin()+5,s3.end(),"new string");
	cout<<"ok"<<endl;
	cout<<"\tThe new 'string' container 's3': '"<<s3<<"'."<<endl;
	cout<<"\tThe 'string' container 's3' contains the following "<<s3.length()<<" characters:"<<endl<<endl;
	for(int k=0;k<s3.length();k++)
	{
		cout<<"\t\t-) the character of position "<<k<<" in the 'string' container 's3' is '"<<s3.at(k);
		if(k<s3.length()-1) cout<<"';"<<endl;
		else cout<<"'."<<endl<<endl;
	}
	
	/* We continue our task! */
	cout<<"\tThe first character in the 'string' container 's3' is '"<<*(s3.begin())<<"'."<<endl;
	cout<<"\tThe last character in the 'string' container 's3' is "<<*(s3.crbegin())<<"'."<<endl<<endl;
	cout << "\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();
	
	/* TASK #5 - creating a copy 's4' of the 'string' container 's3'. */
	cout<<"\tCreating a copy 's4' of the 'string' container 's3' ... ";
	auto s4=string(s3.c_str());
	cout<<"ok"<<endl;
	cout<<"\tAppending several characters to the 'string' container 's4' ... ";
	s4.append(" with a");
	s4+=" duplicated stri";
	s4.push_back('n');
	s4.push_back('g');
	cout<<"ok"<<endl;
	cout<<"\tThe updated 'string' container 's4' contains the following "<<s4.length()<<" characters: '"<<s4<<"'."<<endl;
	cout<<"\tThe reversed characters in the 'string' container 's4' are: '";
	n=0;
	for(auto it=s4.crbegin();it!=s4.crend(); it++,n++)
	{
		cout<<(*it);
		if(n>=s4.size()-1) cout<<"'."<<endl<<endl;
	} 
	
	/* Now, we continue to perform this task. */
	std::size_t found=std::string::npos;
	unsigned long pos=0;
	cout<<"\tLooking for all substrings 'string' in the 'string' container 's4' (in the forward direction):"<<endl<<endl;
	do
	{
		found = s4.find("string",pos);
  		if (found!=std::string::npos) 
  		{
  			cout<<"\t\t-) Found a substring 'string', starting at position "<<found<<" in the 'string' container 's4' (substring '"+s4.substr(found,string("string").length() )+"')."<<endl;
  			pos=found+string("string").length();
  		}
	}
	while(found!=std::string::npos);
	cout<<endl;
	cout<<"\tLooking for all substrings 'string' in the 'string' container 's4' (in the reverse direction):"<<endl<<endl;
	found=std::string::npos;
	pos=s4.length()-1;
	do
	{
		found = s4.rfind("string",pos);
  		if (found!=std::string::npos) 
  		{
  			cout<<"\t\t-) Found a substring 'string', starting at position "<<found<<" in the 'string' container 's4' (substring '"+s4.substr(found,string("string").length() )+"')."<<endl;
  			pos=found-1;
  		}
	}
	while(found!=std::string::npos);
	cout<<endl;
	found=std::string::npos;
	cout<<"\tLooking for the first occurrence of the character 's' in the 'string' container 's4' ... ";
	found=s4.find_first_of("s");
	cout<<"ok"<<endl;
	if(found!=std::string::npos) { cout<<"\tThe first occurrence of the character 's' in the 'string' container 's4' starts at position "<<found<<" (character '"+s4.substr(found,string("s").length() )+"')."<<endl; }
	else { cout<<"\tThe 'string' container 's4' does not contain the character 's'."<<endl; }
	cout<<"\tLooking for the last occurrence of the character 's' in the 'string' container 's4' ... ";
	found=s4.find_last_of("s");
	cout<<"ok"<<endl;
	if(found!=std::string::npos) { cout<<"\tThe last occurrence of the character 's' in the 'string' container 's4' starts at position "<<found<<" (character '"+s4.substr(found,string("s").length() )+"')."<<endl; }
	else { cout<<"\tThe 'string' container 's4' does not contain the character 's'."<<endl; }
	cout<<"\tLooking for the first character, different from the character 'a', in the 'string' container 's4' ... ";
	found=s4.find_first_not_of("a");
	cout<<"ok"<<endl;
	if(found!=std::string::npos) { cout<<"\tThe first character, different from the character 'a', in the 'string' container 's4' is at position "<<found<<" (character '"+s4.substr(found,string("a").length() )+"')."<<endl; }
	else { cout<<"\tThe 'string' container 's4' contains only characters 'a'."<<endl; }
	cout<<"\tLooking for the last character, different from the character 'a', in the 'string' container 's4' ... ";
	found=s4.find_last_not_of("a");
	cout<<"ok"<<endl;
	if(found!=std::string::npos) { cout<<"\tThe last character, different from the character 'a', in the 'string' container 's4' is at position "<<found<<" (character '"+s4.substr(found,string("a").length() )+"')."<<endl<<endl; }
	else { cout<<"\tThe 'string' container 's4' contains only characters 'a'."<<endl<<endl; }
	cout << "\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();
	
	/* TASK #6 - creating a new 'string' container 's5' for performing the swap operations! */
	cout<<"\tCreating a new 'string' container 's5' ... ";
	string s5;
	s5.reserve(100);
	cout<<"ok"<<endl;
	if(s5.empty()) cout<<"\tThe new 'string' container 's5' is empty."<<endl;
	else cout<<"\tThe new 'string' container 's5' is not empty, and contains "<<s5.size()<<" characters."<<endl;
	cout<<"\tThe capacity of the 'string' container 's5' is "<<s5.capacity()<<"."<<endl;
	if(s4.empty()) cout<<"\tThe existing 'string' container 's4' is empty."<<endl;
	else cout<<"\tThe existing 'string' container 's4' is not empty, and contains the following "<<s4.size()<<" characters: '"<<s4<<"'."<<endl;
	cout<<"\tSwapping the content of the 'string' containers 's4' and 's5' ... ";
	s4.swap(s5);
	cout<<"ok"<<endl;
	if(s4.empty()) cout<<"\tThe existing 'string' container 's4' is empty."<<endl;
	else cout<<"\tThe existing 'string' container 's4' is not empty, and contains the following "<<s4.size()<<" characters: '"<<s4<<"'."<<endl;
	if(s5.empty()) cout<<"\tThe existing 'string' container 's5' is empty."<<endl;
	else cout<<"\tThe existing 'string' container 's5' is not empty, and contains the following "<<s5.size()<<" characters: '"<<s5<<"'."<<endl;
	cout<<"\tThe reverse content of the existing 'string' container 's5' consists of the following "<<s5.size()<<" characters: '";
	for(auto it=s5.rbegin();it!=s5.rend();it++) { cout<<(*it); }
	cout<<"'."<<endl;
	cout<<"\tRemove the first 5 characters from the 'string' container 's5' ... ";
	s5.erase(s5.begin(),s5.begin()+5);
	cout<<"ok"<<endl;
	if(s5.empty()) cout<<"\tThe existing 'string' container 's5' is empty."<<endl;
	else cout<<"\tThe existing 'string' container 's5' is not empty, and contains the following "<<s5.size()<<" characters: '"<<s5<<"'."<<endl;
	cout<<"\tAssigning again the content of the 'string' container 's5' ... ";
	s5.assign("This is an example sentence.");
	cout<<"ok"<<endl;
	if(s5.empty()) cout<<"\tThe existing 'string' container 's5' is empty."<<endl;
	else cout<<"\tThe existing 'string' container 's5' is not empty, and contains the following "<<s5.size()<<" characters: '"<<s5<<"'."<<endl;
	cout<<"\tRemoving several characters from the 'string' container 's5' ... ";
	s5.erase(10,8);
	s5.erase (s5.begin()+9);
	s5.erase (s5.begin()+5, s5.end()-9);
	cout<<"ok"<<endl;
	if(s5.empty()) cout<<"\tThe existing 'string' container 's5' is empty."<<endl;
	else cout<<"\tThe existing 'string' container 's5' is not empty, and contains the following "<<s5.size()<<" characters: '"<<s5<<"'."<<endl<<endl;
	cout<<"\tPlease, insert a not empty sequence of characters (thus, the content of a 'string' container): ";
	s0.clear();
	cin>>s0;
	if(!cin)
	{
		cin.clear();
		cin.clear();
		cout<<endl<<"PLEASE, YOU MUST INSERT A VALID STRING!"<<endl<<endl<<"\tTHIS PROGRAM IS CLOSING ... "<<endl<<endl;
		pause();
		return EXIT_FAILURE;
	}
	
	/* Now, we finalize this task! */
	if(s0.empty()) cout<<"\tThe new 'string' container is empty."<<endl;
	else cout<<"\tThe new 'string' container is not empty, and contains the following "<<s0.size()<<" characters: '"<<s0<<"'."<<endl;
	cout<<"\tPlease, insert a (possibly not empty) sequence of characters (thus, the content of a 'string' container): ";
	s0.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	cin.clear();
	getline(cin,s0);
	if(!cin)
	{
		cin.clear();
		cin.clear();
		cout<<endl<<"PLEASE, YOU MUST INSERT A VALID STRING!"<<endl<<endl<<"\tTHIS PROGRAM IS CLOSING ... "<<endl<<endl;
		pause();
		return EXIT_FAILURE;
	}
	
	/* Now, we finalize this task! */
	if(s0.empty()) cout<<"\tThe new 'string' container is empty."<<endl<<endl;
	else cout<<"\tThe new 'string' container is not empty, and contains the following "<<s0.size()<<" characters: '"<<s0<<"'."<<endl<<endl;
	cout << "\tPress the RETURN key to continue ... ";
	cin.get();
	cout << endl;
	cout.flush();
	
	/* TASK #7 - allocating a new 'string' container 's6'. */
	cout<<"\tAllocating a new 'string' container 's6' ... ";
	string *s6=nullptr;
	s6=new string("to be question");
	cout<<"ok"<<endl;
	cout<<"\tThe initial content of the 'string' container 's6' is '"<<(*s6)<<"'."<<endl;
	s2="the ";
	s3="or not to be";
	cout<<"\tAdding and inserting several characters sequences by using many versions of the 'insert()' member function ... ";
	s6->insert(6,s2);
	s6->insert(6,s3,3,4); 
	s6->insert(10,"that is cool",8);
	s6->insert(10,"to be ");
	s6->insert(15,1,':');
	string::iterator it=s6->insert(s6->begin()+5,',');
	s6->insert (s6->end(),1,' ');
	s6->insert (s6->end(),3,'.');
	s6->insert(it+2,s3.begin(),s3.begin()+3);
	cout<<"ok"<<endl;
	cout<<"\tThe final content of the 'string' container 's6' consists of the following "<<s6->size()<<" characters '"<<(*s6)<<"'."<<endl;
	cout<<"\tCopying the content of the 'string' container 's6' into a new C-like array of "<<s6->size()<<" characters (created by the allocator of the 'string' container 's6') ... ";
	char *buffer=s6->get_allocator().allocate(s6->length()+1);
	unsigned long l=s6->copy(buffer,s6->length());
	buffer[l]='\0';
	cout<<"ok"<<endl<<"\tThe new C-like array contains the following "<<l<<" characters: '"<<buffer<<"'."<<endl;
	cout<<"\tDeallocating the new C-like array ... ";
	s6->get_allocator().deallocate(buffer,s6->length()+1);
	cout<<"ok"<<endl<<endl;
	buffer=nullptr;
	cout << "\tPress the RETURN key to continue ... ";
	cout.flush();
	cin.get();
	cout << endl;
	
	/* TASK #8 - deallocating all 'string' containers in this test! */
	cout<<"\tDeallocating all 'string' containers in this test ... ";
	s0.clear();
	s1.clear();
	s2.clear();
	s3.clear();
	s4.clear();
	s5.clear();
	if(s6!=nullptr) { delete s6; s6=nullptr; }
	cout<<"ok"<<endl<<endl;
	cout << "\tPress the RETURN key to finish ... ";
	cin.get();
	#ifndef _MSC_VER
		cout << endl;
		cout.flush();
	#endif
	return EXIT_SUCCESS;	
}
