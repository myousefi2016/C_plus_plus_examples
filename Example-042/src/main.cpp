/**************************************************************************************************
 * Examples in the C++ language (the 'Example-042' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), April 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-042' Test.
 **************************************************************************************************/
 
#include <iostream>
#include <fstream>
#include <chrono>
#include <random>
#include <cstdlib>
#include <string>
using namespace std;

/// The main function for the <i>'Example-042'</i> Test.
int main(void)
{
	unsigned int seed1;
	string str;
	ofstream out;
	ifstream in;

	/* This is the 'Example-042' Test, where the generation of several pseudo-random values through a 'linear congruential engine' is tested! */
    cout<<endl<<"\tThis is the 'Example-042' Test in the C++ language."<<endl<<endl;
    cout.flush();
    
    /* TASK #1 - we construct a linear congruential engine, such that its seed is automatically generated from the system clock. */
	cout<<"\tConstructing a linear congruential engine 'g1', such that its seed is automatically generated from the current system clock ... ";
	seed1 = (unsigned int)std::chrono::system_clock::now().time_since_epoch().count();
	std::minstd_rand0 g1 (seed1);
	cout<<"ok"<<endl;
	cout<<"\tThe current system clock is: "<<seed1<<"."<<endl;
	cout<<"\tThe minimum random value, generated by the linear congruential engine 'g1', is "<<g1.min()<<"."<<endl;
	cout<<"\tThe maximum random value, generated by the linear congruential engine 'g1', is "<<g1.max()<<"."<<endl;
	cout<<"\tGenerating a random value with the linear congruential engine 'g1': "<<g1()<<"."<<endl<<endl;
	cout.flush();
	
	/* TASK #2 - we read a (custom) string, inserted by the user, to be used as the new seed. */
	cout<<"\tPlease, insert a string to be used as the new seed: ";
	cout.flush();
	getline(cin,str);
	if(!cin)
	{
		cout<<endl<<"PLEASE, YOU MUST INSERT A VALID STRING TO BE USED AS THE NEW SEED!"<<endl<<endl<<"\tTHIS PROGRAM IS CLOSING ... "<<endl<<endl;
		cout.flush();
		return EXIT_FAILURE;
	}
	
	/* TASK #3 - if we arrive here, then we can construct a new engine 'g2' and update the existing engine 'g1' with the new seed! */
	cout<<endl<<"\tConstructing another linear congruential engine 'g2' (based on the new seed) ... ";
	cout.flush();
	std::seed_seq seed2 (str.begin(),str.end());
	minstd_rand0 g2 (seed2);
	cout<<"ok"<<endl;
	cout<<"\tThe minimum random value, generated by the linear congruential engine 'g2', is "<<g2.min()<<"."<<endl;
	cout<<"\tThe maximum random value, generated by the linear congruential engine 'g2', is "<<g2.max()<<"."<<endl;
	cout<<"\tGenerating a random value with this engine 'g2': "<<g2()<<"."<<endl;
	if(g1==g2) cout<<"\tThe internal states of the linear congruential engines 'g1' and 'g2' coincide (with respect to the operator '==')"<<endl;
	else cout<<"\tThe internal states of the linear congruential engines 'g1' and 'g2' do not coincide (with respect to the operator '==')"<<endl;
	if(g1!=g2) cout<<"\tThe internal states of the linear congruential engines 'g1' and 'g2' do not coincide (with respect to the operator '!=')"<<endl<<endl;
	else cout<<"\tThe internal states of the linear congruential engines 'g1' and 'g2' coincide (with respect to the operator '!=')"<<endl<<endl;
	cout<<"\tGenerating a random value with the linear congruential engine 'g1': "<<g1()<<"."<<endl;
	cout<<"\tUpdating the linear congruential engine 'g1' with the new seed (the same as the linear congruential engine 'g2') .. ";
	g1.seed(seed2);
	cout<<"ok"<<endl;
	if(g1==g2) cout<<"\tThe internal states of the linear congruential engines 'g1' and 'g2' coincide (with respect to the operator '==')"<<endl;
	else cout<<"\tThe internal states of the linear congruential engines 'g1' and 'g2' do not coincide (with respect to the operator '==')"<<endl;
	if(g1!=g2) cout<<"\tThe internal states of the linear congruential engines 'g1' and 'g2' do not coincide (with respect to the operator '!=')"<<endl<<endl;
	else cout<<"\tThe internal states of the linear congruential engines 'g1' and 'g2' coincide (with respect to the operator '!=')"<<endl<<endl;
	cout.flush();

	/* TASK #4 - generating several random values in order to align the linear congruential engines 'g1' and 'g2'. */
	cout<<"\tGenerating a random value with the linear congruential engine 'g1': "<<g1()<<"."<<endl;
	cout<<"\tGenerating another random value with the linear congruential engine 'g1': "<<g1()<<"."<<endl;
	cout<<"\tGenerating a random value with the linear congruential engine 'g2': "<<g2()<<"."<<endl;
	if(g1==g2) cout<<"\tThe internal states of the linear congruential engines 'g1' and 'g2' coincide (with respect to the operator '==')"<<endl;
	else cout<<"\tThe internal states of the linear congruential engines 'g1' and 'g2' do not coincide (with respect to the operator '==')"<<endl;
	if(g1!=g2) cout<<"\tThe internal states of the linear congruential engines 'g1' and 'g2' do not coincide (with respect to the operator '!=')"<<endl<<endl;
	else cout<<"\tThe internal states of the linear congruential engines 'g1' and 'g2' coincide (with respect to the operator '!=')"<<endl<<endl;
	cout.flush();
	
	/* TASK #5 - we validate the serialization operators! */
	cout<<"\tThe last random value, generated by the linear congruential engine 'g1' (with respect to the operator '<<') is "<<g1<<"."<<endl;
	cout<<"\tExporting the internal state of the linear congruential engine 'g1' on the 'g1.txt' file (with respect to the operator '<<') ... ";
	out.open("g1.txt");
	if(!out)
	{
		cout<<endl<<"\tCANNOT OPEN THE 'g1.txt' FILE."<<endl<<endl<<"\tTHIS PROGRAM IS CLOSING ... "<<endl<<endl;
		cout.flush();
		return EXIT_FAILURE;
	}
	
	/* The 'g1.txt' file is open! */
	out<<g1;
	out.close();
	cout<<"ok"<<endl<<"\tCreating another linear congruential engine 'g3' ... ";
	cout.flush();
	minstd_rand0 g3;
	cout<<"ok"<<endl;
	cout.flush();
	if(g1==g3) cout<<"\tThe internal states of the linear congruential engines 'g1' and 'g3' coincide (with respect to the operator '==')"<<endl;
	else cout<<"\tThe internal states of the linear congruential engines 'g1' and 'g3' do not coincide (with respect to the operator '==')"<<endl;
	if(g1!=g3) cout<<"\tThe internal states of the linear congruential engines 'g1' and 'g3' do not coincide (with respect to the operator '!=')"<<endl<<endl;
	else cout<<"\tThe internal states of the linear congruential engines 'g1' and 'g3' coincide (with respect to the operator '!=')"<<endl<<endl;
	cout.flush();
	cout<<"\tSaving the internal state of the linear congruential engine 'g1' (from the 'g1.txt' file) into the linear congruential engine 'g3' (with respect to the operator '>>') ... ";
	in.open("g1.txt");
	if(!in)
	{
		cout<<endl<<"\tCANNOT OPEN THE 'g1.txt' FILE."<<endl<<endl<<"\tTHIS PROGRAM IS CLOSING ... "<<endl<<endl;
		cout.flush();
		return EXIT_FAILURE;
	}
	
	/* Saving everything from the 'g1.txt' file into the linear congruential engine 'g3'. */
	in>>g3;
	in.close();
	cout<<"ok"<<endl;
	if(g1==g3) cout<<"\tThe internal states of the linear congruential engines 'g1' and 'g3' coincide (with respect to the operator '==')"<<endl;
	else cout<<"\tThe internal states of the linear congruential engines 'g1' and 'g3' do not coincide (with respect to the operator '==')"<<endl;
	if(g1!=g3) cout<<"\tThe internal states of the linear congruential engines 'g1' and 'g3' do not coincide (with respect to the operator '!=')"<<endl<<endl;
	else cout<<"\tThe internal states of the linear congruential engines 'g1' and 'g3' coincide (with respect to the operator '!=')"<<endl<<endl;
	cout.flush();
	return EXIT_SUCCESS;
}
