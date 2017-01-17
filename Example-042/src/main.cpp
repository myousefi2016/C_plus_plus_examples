/**********************************************************************************************
 * Examples in the C++ language (the test 'Example-042')
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), January 2017
 *
 * main.cpp - the source file, implementing the main function for the test 'Example-042'.
 **********************************************************************************************/
 
#include <iostream>
#include <fstream>
#include <chrono>
#include <random>
#include <cstdlib>
#include <string>
using namespace std;

/// The main function for the <i>Example-042</i> unit test.
int main(void)
{
	unsigned int seed1;
	string str;
	ofstream out;
	ifstream in;
	
	/* First, we construct a generator, such that its seed is automatically generated from the system clock. */
	cout<<endl<<"\tThis is the example 'Example-042' in the C++ language"<<endl<<endl;
    cout.flush();
	cout<<"\tConstructing a linear congruential engine 'g1', such that its seed is automatically generated from the system clock ... ";
	seed1 = (unsigned int)std::chrono::system_clock::now().time_since_epoch().count();
	std::minstd_rand0 g1 (seed1);
	cout<<"ok"<<endl;
	cout<<"\tSystem clock: "<<seed1<<endl;
	cout<<"\tThe minimum random value, generated by the generator 'g1', is: "<<g1.min()<<endl;
	cout<<"\tThe maximum random value, generated by the generator 'g1', is: "<<g1.max()<<endl;
	cout<<"\tGenerating a random value with the generator 'g1': "<<g1()<<endl<<endl;
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
	
	/* If we arrive here, then we can construct a new generator 'g2' and update the existing generator 'g1' with the new seed! */
	cout<<endl<<"\tConstructing another linear congruential engine 'g2', based on the new seed ... ";
	cout.flush();
	std::seed_seq seed2 (str.begin(),str.end());
	minstd_rand0 g2 (seed2);
	cout<<"ok"<<endl;
	cout<<"\tThe minimum random value, generated by the generator 'g2', is: "<<g2.min()<<endl;
	cout<<"\tThe maximum random value, generated by the generator 'g2', is: "<<g2.max()<<endl;
	cout<<"\tGenerating a random value with this generator 'g2': "<<g2()<<endl<<endl;
	if(g1==g2) cout<<"\tThe generators 'g1' and 'g2' coincide (wrt the operator '==')"<<endl;
	else cout<<"\tThe generators 'g1' and 'g2' do not coincide (wrt the operator '==')"<<endl;
	if(g1!=g2) cout<<"\tThe generators 'g1' and 'g2' do not coincide (wrt the operator '!=')"<<endl<<endl;
	else cout<<"\tThe generators 'g1' and 'g2' coincide (wrt the operator '!=')"<<endl<<endl;
	cout.flush();
	cout<<"\tGenerating a random value with the generator 'g1': "<<g1()<<endl;
	cout<<"\tUpdating the generator 'g1' with the new seed (the same as the generator 'g2') .. ";
	g1.seed(seed2);
	cout<<"ok"<<endl;
	if(g1==g2) cout<<"\tThe generators 'g1' and 'g2' coincide (wrt the operator '==')"<<endl;
	else cout<<"\tThe generators 'g1' and 'g2' do not coincide (wrt the operator '==')"<<endl;
	if(g1!=g2) cout<<"\tThe generators 'g1' and 'g2' do not coincide (wrt the operator '!=')"<<endl<<endl;
	else cout<<"\tThe generators 'g1' and 'g2' coincide (wrt the operator '!=')"<<endl<<endl;
	cout.flush();
	cout<<"\tGenerating a random value with the generator 'g1': "<<g1()<<endl;
	cout.flush();
	cout<<"\tGenerating another random value with the generator 'g1': "<<g1()<<endl;
	cout.flush();
	cout<<"\tGenerating a random value with the generator 'g2': "<<g2()<<endl;
	cout.flush();
	if(g1==g2) cout<<"\tThe generators 'g1' and 'g2' coincide (wrt the operator '==')"<<endl;
	else cout<<"\tThe generators 'g1' and 'g2' do not coincide (wrt the operator '==')"<<endl;
	if(g1!=g2) cout<<"\tThe generators 'g1' and 'g2' do not coincide (wrt the operator '!=')"<<endl<<endl;
	else cout<<"\tThe generators 'g1' and 'g2' coincide (wrt the operator '!=')"<<endl<<endl;
	cout.flush();
	
	/* Finally, we validate the serialization operators! */
	cout<<"\tLast random value, generated by the generator 'g1' (wrt the operator '<<'): "<<g1<<endl;
	cout<<"\tExporting the internal state of the generator 'g1' on the 'g1.txt' file (wrt the operator '<<') ... ";
	out.open("g1.txt");
	if(!out)
	{
		cout<<endl<<"\tCANNOT OPEN THE FILE 'g1.txt'. THIS PROGRAM IS CLOSING ... "<<endl<<endl;
		cout.flush();
		return EXIT_FAILURE;
	}
	
	/* The file 'g1.txt' is open! */
	out<<g1;
	out.close();
	cout<<"ok"<<endl<<endl<<"\tCreating another generator 'g3' ... ";
	cout.flush();
	minstd_rand0 g3;
	cout<<"ok"<<endl;
	cout.flush();
	if(g1==g3) cout<<"\tThe generators 'g1' and 'g3' coincide (wrt the operator '==')"<<endl;
	else cout<<"\tThe generators 'g1' and 'g3' do not coincide (wrt the operator '==')"<<endl;
	if(g1!=g3) cout<<"\tThe generators 'g1' and 'g3' do not coincide (wrt the operator '!=')"<<endl<<endl;
	else cout<<"\tThe generators 'g1' and 'g3' coincide (wrt the operator '!=')"<<endl<<endl;
	cout<<"\tSaving the internal state of the generator 'g1' (from the file 'g1.txt') into the generator 'g3' (wrt the operator '>>') ... ";
	in.open("g1.txt");
	if(!in)
	{
		cout<<endl<<"\tCANNOT OPEN THE FILE 'g1.txt'. THIS PROGRAM IS CLOSING ... "<<endl<<endl;
		cout.flush();
		return EXIT_FAILURE;
	}
	
	/* Saving everything from the file 'g1.txt' into the generator 'g3'. */
	in>>g3;
	in.close();
	cout<<"ok"<<endl;
	cout.flush();
	if(g1==g3) cout<<"\tThe generators 'g1' and 'g3' coincide (wrt the operator '==')"<<endl;
	else cout<<"\tThe generators 'g1' and 'g3' do not coincide (wrt the operator '==')"<<endl;
	if(g1!=g3) cout<<"\tThe generators 'g1' and 'g3' do not coincide (wrt the operator '!=')"<<endl<<endl;
	else cout<<"\tThe generators 'g1' and 'g3' coincide (wrt the operator '!=')"<<endl<<endl;
	return EXIT_SUCCESS;
}
