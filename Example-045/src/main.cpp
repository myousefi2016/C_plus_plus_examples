/**********************************************************************************************
 * Examples in the C++ language (the test 'Example-045')
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), January 2017
 *
 * main.cpp - the source file, implementing the main function for the test 'Example-045'.
 **********************************************************************************************/
 
#include <iostream>
#include <fstream>
#include <chrono>
#include <random>
#include <cstdlib>
#include <string>
using namespace std;

/// The main function for the <i>Example-045</i> unit test.
int main(void)
{
	unsigned int seed1;
	string str;
	ofstream out;
	ifstream in;
	
	/* First, we construct a generator, such that its seed is automatically generated from the system clock. */
	cout<<endl<<"\tThis is the example 'Example-045' in the C++ language"<<endl<<endl;
    cout.flush();
    cout<<"\tConstructing a Shuffle-order generator engine 's1', such that its seed is automatically generated from the system clock ... ";
    seed1 = (unsigned int)std::chrono::system_clock::now().time_since_epoch().count();
    std::knuth_b s1(seed1);
    cout<<"ok"<<endl;
	cout<<"\tSystem clock: "<<seed1<<endl;
	cout<<"\tThe minimum random value, generated by the generator 's1', is: "<<s1.min()<<endl;
	cout<<"\tThe maximum random value, generated by the generator 's1', is: "<<s1.max()<<endl;
	cout<<"\tGenerating a random value with the generator 's1': "<<s1()<<endl<<endl;
	cout.flush();
	
	/* Now, we read a (custom) string, inserted by the user, to be used as the new seed. */
	cout<<"\tPlease, insert a string to be used as the new seed: ";
	cout.flush();
	getline(cin,str);
	if(!cin)
	{
		cout<<endl<<"PLEASE, INSERT A VALID STRING TO BE USED AS THE NEW SEED. THIS PROGRAM IS CLOSING ... "<<endl<<endl;
		cout.flush();
		return EXIT_FAILURE;
	}
	
	/* If we arrive here, then we can construct a new generator 's2' and update the existing generator 's1' with the new seed! */
	cout<<endl<<"\tConstructing another Shuffle-order generator engine 's2', based on the new seed ... ";
	cout.flush();
	std::seed_seq seed2 (str.begin(),str.end());
	std::knuth_b s2 (seed2);
	cout<<"ok"<<endl;
	cout<<"\tThe minimum random value, generated by the generator 's2', is: "<<s2.min()<<endl;
	cout<<"\tThe maximum random value, generated by the generator 's2', is: "<<s2.max()<<endl;
	cout<<"\tGenerating a random value with this generator 's2': "<<s2()<<endl<<endl;
	if(s1==s2) cout<<"\tThe generators 's1' and 's2' coincide (wrt the operator '==')"<<endl;
	else cout<<"\tThe generators 's1' and 's2' do not coincide (wrt the operator '==')"<<endl;
	if(s1!=s2) cout<<"\tThe generators 's1' and 's2' do not coincide (wrt the operator '!=')"<<endl<<endl;
	else cout<<"\tThe generators 's1' and 's2' coincide (wrt the operator '!=')"<<endl<<endl;
	cout.flush();
	cout<<"\tGenerating a random value with the generator 's1': "<<s1()<<endl;
	cout<<"\tUpdating the generator 's1' with the new seed (the same as the generator 's2') .. ";
	s1.seed(seed2);
	cout<<"ok"<<endl;
	if(s1==s2) cout<<"\tThe generators 's1' and 's2' coincide (wrt the operator '==')"<<endl;
	else cout<<"\tThe generators 's1' and 's2' do not coincide (wrt the operator '==')"<<endl;
	if(s1!=s2) cout<<"\tThe generators 's1' and 's2' do not coincide (wrt the operator '!=')"<<endl<<endl;
	else cout<<"\tThe generators 's1' and 's2' coincide (wrt the operator '!=')"<<endl<<endl;
	cout.flush();
	cout<<"\tGenerating a random value with the generator 's1': "<<s1()<<endl;
	cout.flush();
	cout<<"\tGenerating another random value with the generator 's1': "<<s1()<<endl;
	cout.flush();
	cout<<"\tGenerating a random value with the generator 's2': "<<s2()<<endl;
	cout.flush();
	if(s1==s2) cout<<"\tThe generators 's1' and 's2' coincide (wrt the operator '==')"<<endl;
	else cout<<"\tThe generators 's1' and 's2' do not coincide (wrt the operator '==')"<<endl;
	if(s1!=s2) cout<<"\tThe generators 's1' and 's2' do not coincide (wrt the operator '!=')"<<endl<<endl;
	else cout<<"\tThe generators 's1' and 's2' coincide (wrt the operator '!=')"<<endl<<endl;
	cout.flush();
	
	/* Finally, we validate the serialization operators! */
	cout<<"\tExporting the internal state of the generator 's1' on the 's1.txt' file (wrt the operator '<<') ... ";
	out.open("s1.txt");
	if(!out)
	{
		cout<<endl<<"\tCANNOT OPEN THE 's1.txt' FILE. THIS PROGRAM IS CLOSING ... "<<endl<<endl;
		cout.flush();
		return EXIT_FAILURE;
	}
	
	/* The 's1.txt' file is open! */
	out<<s1;
	out.close();
	cout<<"ok"<<endl<<endl<<"\tCreating another generator 's3' ... ";
	cout.flush();
	std::knuth_b s3;
	cout<<"ok"<<endl;
	cout.flush();
	if(s1==s3) cout<<"\tThe generators 's1' and 's3' coincide (wrt the operator '==')"<<endl;
	else cout<<"\tThe generators 's1' and 's3' do not coincide (wrt the operator '==')"<<endl;
	if(s1!=s3) cout<<"\tThe generators 's1' and 's3' do not coincide (wrt the operator '!=')"<<endl<<endl;
	else cout<<"\tThe generators 's1' and 's3' coincide (wrt the operator '!=')"<<endl<<endl;
	cout<<"\tSaving the internal state of the generator 's1' (from the 's1.txt' file) into the generator 's3' (wrt the operator '>>') ... ";
    in.open("s1.txt");
	if(!in)
	{
		cout<<endl<<"\tCANNOT OPEN THE 's1.txt' FILE. THIS PROGRAM IS CLOSING ... "<<endl<<endl;
		cout.flush();
		return EXIT_FAILURE;
	}
	
	/* Saving everything from the 's1.txt' file into the generator 's3'. */
	in>>s3;
	in.close();
	cout<<"ok"<<endl;
	cout.flush();
	if(s1==s3) cout<<"\tThe generators 's1' and 's3' coincide (wrt the operator '==')"<<endl;
	else cout<<"\tThe generators 's1' and 's3' do not coincide (wrt the operator '==')"<<endl;
	if(s1!=s3) cout<<"\tThe generators 's1' and 's3' do not coincide (wrt the operator '!=')"<<endl<<endl;
	else cout<<"\tThe generators 's1' and 's3' coincide (wrt the operator '!=')"<<endl<<endl;
	return EXIT_SUCCESS;    
}
