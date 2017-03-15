/**************************************************************************************************
 * Examples in the C++ language (the 'Example-047' unit test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), March 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-047' unit test.
 **************************************************************************************************/
 
#include <iostream>
#include <fstream>
#include <chrono>
#include <random>
#include <cstdlib>
#include <string>
using namespace std;

/// The custom alias for modeling a specific <i>'Indepent bits engine'</i>.
typedef std::independent_bits_engine<std::mt19937,64,std::uint_fast64_t> ind_engine;

/// The main function for the <i>Example-047</i> unit test.
int main(void)
{
	unsigned int seed1;
	string str;
	ofstream out;
	ifstream in;

	/* This is the 'Example-047' unit test, where the generation of several pseudo-random values through a 'Independent bits engine' is tested! */
    cout<<endl<<"\tThis is the 'Example-047' unit test in the C++ language."<<endl<<endl;
    cout.flush();
    
    /* TASK #1 - we construct a Independent bits engine, such that its seed is automatically generated from the system clock. */
	cout<<"\tConstructing a Independent bits engine 'i1', such that its seed is automatically generated from the current system clock ... ";
	seed1 = (unsigned int)std::chrono::system_clock::now().time_since_epoch().count();
	ind_engine i1(seed1);
	cout<<"ok"<<endl;
	cout<<"\tThe current system clock is "<<seed1<<"."<<endl;
	cout<<"\tThe minimum random value, generated by the Independent bits engine 'i1', is "<<i1.min()<<"."<<endl;
	cout<<"\tThe maximum random value, generated by the Independent bits engine 'i1', is "<<i1.max()<<"."<<endl;
	cout<<"\tGenerating a random value with the Independent bits engine 'i1': "<<i1()<<"."<<endl<<endl;
	cout.flush();
    
    /* TASK #2 - we read a (custom) string, inserted by the user, to be used as the new seed. */
	cout<<"\tPlease, insert a string to be used as the new seed: ";
	cout.flush();
	getline(cin,str);
	if(!cin)
	{
		cout<<endl<<"PLEASE, INSERT A VALID STRING TO BE USED AS THE NEW SEED."<<endl<<endl<<"\tTHIS PROGRAM IS CLOSING ... "<<endl<<endl;
		cout.flush();
		return EXIT_FAILURE;
	}
	
	/* TASK #3 - if we arrive here, then we can construct a new Independent bits engine 'i2' and update the existing Independent bits engine 'i1' with the new seed! */
	cout<<endl<<"\tConstructing another Independent bits engine 'i2' (based on the new seed) ... ";
	cout.flush();
	std::seed_seq seed2 (str.begin(),str.end());
	ind_engine i2(seed2);
	cout<<"ok"<<endl;
	cout<<"\tThe minimum random value, generated by the Independent bits engine 'i2', is "<<i2.min()<<"."<<endl;
	cout<<"\tThe maximum random value, generated by the Independent bits engine 'i2', is "<<i2.max()<<"."<<endl;
	cout<<"\tGenerating a random value with this Independent bits engine 'i2': "<<i2()<<"."<<endl;
	if(i1==i2) cout<<"\tThe internal states of the Independent bits engines 'i1' and 'i2' coincide (with respect to the operator '==')"<<endl;
	else cout<<"\tThe internal states of the Independent bits engines 'i1' and 'i2' do not coincide (with respect to the operator '==')"<<endl;
	if(i1!=i2) cout<<"\tThe internal states of the Independent bits engines 'i1' and 'i2' do not coincide (with respect to the operator '!=')"<<endl<<endl;
	else cout<<"\tThe internal states of the Independent bits engines 'i1' and 'i2' coincide (with respect to the operator '!=')"<<endl<<endl;
	cout<<"\tGenerating a random value with the Independent bits engine 'i1': "<<i1()<<"."<<endl;
	cout<<"\tUpdating the Independent bits engine 'i1' with the new seed (the same as the Independent bits engine 'i2') .. ";
	i1.seed(seed2);
	cout<<"ok"<<endl;
	if(i1==i2) cout<<"\tThe internal states of the Independent bits engines 'i1' and 'i2' coincide (with respect to the operator '==')"<<endl;
	else cout<<"\tThe internal states of the Independent bits engines 'i1' and 'i2' do not coincide (with respect to the operator '==')"<<endl;
	if(i1!=i2) cout<<"\tThe internal states of the Independent bits engines 'i1' and 'i2' do not coincide (with respect to the operator '!=')"<<endl<<endl;
	else cout<<"\tThe internal states of the Independent bits engines 'i1' and 'i2' coincide (with respect to the operator '!=')"<<endl<<endl;
	cout.flush();
    
    /* TASK #4 - generating several random values in order to align the Independent bits engines 'i1' and 'i2'. */
	cout<<"\tGenerating a random value with the Independent bits engine 'i1': "<<i1()<<"."<<endl;
	cout<<"\tGenerating another random value with the Independent bits engine 'i1': "<<i1()<<"."<<endl;
	cout<<"\tGenerating a random value with the Independent bits engine 'i2': "<<i2()<<"."<<endl;
	if(i1==i2) cout<<"\tThe internal states of the Independent bits engines 'i1' and 'i2' coincide (with respect to the operator '==')"<<endl;
	else cout<<"\tThe internal states of the Independent bits engines 'i1' and 'i2' do not coincide (with respect to the operator '==')"<<endl;
	if(i1!=i2) cout<<"\tThe internal states of the Independent bits engines 'i1' and 'i2' do not coincide (with respect to the operator '!=')"<<endl<<endl;
	else cout<<"\tThe internal states of the Independent bits engines 'i1' and 'i2' coincide (with respect to the operator '!=')"<<endl<<endl;
	cout.flush();
	
	/* TASK #5 - we validate the serialization operators! */
	cout<<"\tExporting the internal state of the Independent bits engine 'i1' on the 'i1.txt' file (with respect to the operator '<<') ... ";
	out.open("i1.txt");
	if(!out)
	{
		cout<<endl<<"\tCANNOT OPEN THE 'i1.txt' FILE."<<endl<<endl<<"\tTHIS PROGRAM IS CLOSING ... "<<endl<<endl;
		cout.flush();
		return EXIT_FAILURE;
	}
	
	/* The 'i1.txt' file is open! */
	out<<i1;
	out.close();
	cout<<"ok"<<endl<<"\tCreating another Independent bits engine 'i3' ... ";
	cout.flush();
	ind_engine i3;
	cout<<"ok"<<endl;
	cout.flush();
	if(i1==i3) cout<<"\tThe internal states of the Independent bits engines 'i1' and 'i3' coincide (with respect to the operator '==')"<<endl;
	else cout<<"\tThe internal states of the Independent bits engines 'i1' and 'i3' do not coincide (with respect to the operator '==')"<<endl;
	if(i1!=i3) cout<<"\tThe internal states of the Independent bits engines 'i1' and 'i3' do not coincide (with respect to the operator '!=')"<<endl<<endl;
	else cout<<"\tThe internal states of the Independent bits engines 'i1' and 'i3' coincide (with respect to the operator '!=')"<<endl<<endl;
	cout.flush();
	cout<<"\tSaving the internal state of the Independent bits engine 'i1' (from the 'i1.txt' file) into the Independent bits engine 'i3' (with respect to the operator '>>') ... ";
	in.open("i1.txt");
	if(!in)
	{
		cout<<endl<<"\tCANNOT OPEN THE 'i1.txt' FILE."<<endl<<endl<<"\tTHIS PROGRAM IS CLOSING ... "<<endl<<endl;
		cout.flush();
		return EXIT_FAILURE;
	}
	
	/* Saving everything from the 'i1.txt' file into the Independent bits engine 'i3'. */
	in>>i3;
	in.close();
	cout<<"ok"<<endl;
	if(i1==i3) cout<<"\tThe internal states of the Independent bits engines 'i1' and 'i3' coincide (with respect to the operator '==')"<<endl;
	else cout<<"\tThe internal states of the Independent bits engines 'i1' and 'i3' do not coincide (with respect to the operator '==')"<<endl;
	if(i1!=i3) cout<<"\tThe internal states of the Independent bits engines 'i1' and 'i3' do not coincide (with respect to the operator '!=')"<<endl<<endl;
	else cout<<"\tThe internal states of the Independent bits engines 'i1' and 'i3' coincide (with respect to the operator '!=')"<<endl<<endl;
	cout.flush();
	return EXIT_SUCCESS;
}
