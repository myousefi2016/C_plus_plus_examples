/**************************************************************************************************
 * Examples in the C++ language (the 'Example-044' Test).
 *
 * GitHub repository: http://github.com/davidcanino/C_plus_plus_examples
 *
 * Created by David Canino (canino.david@gmail.com), June 2017
 *
 * main.cpp - the source file, implementing the main function for the 'Example-044' Test.
 **************************************************************************************************/

#include <cstdlib>
#include <limits>
#include <iostream>
#include <fstream>
#include <chrono>
#include <random>
#include <string>
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

/// The main function for the <i>'Example-044'</i> Test.
int main(void)
{
	unsigned int seed1;
	string str;
	ofstream out;
	ifstream in;
	
	/* This is the 'Example-044' Test, where the generation of several pseudo-random values through a 'lagged Fibonacci engine' is tested! */
    cout<<endl<<"\tThis is the 'Example-044' Test in the C++ language."<<endl<<endl;
    cout.flush();

	/* TASK #1 - we construct a lagged Fibonacci engine, such that its seed is automatically generated from the system clock. */
	cout<<"\tConstructing a lagged Fibonacci engine 'f1', such that its seed is automatically generated from the current system clock ... ";
	seed1 = (unsigned int)std::chrono::system_clock::now().time_since_epoch().count();
	std::ranlux24_base f1(seed1);
	cout<<"ok"<<endl;
	cout<<"\tThe current system clock is "<<seed1<<"."<<endl;
	cout<<"\tThe minimum random value, generated by the lagged Fibonacci engine 'f1', is "<<f1.min()<<"."<<endl;
	cout<<"\tThe maximum random value, generated by the lagged Fibonacci engine 'f1', is "<<f1.max()<<"."<<endl;
	cout<<"\tGenerating a random value with the lagged Fibonacci engine 'f1': "<<f1()<<"."<<endl<<endl;
	cout.flush();
	
	/* TASK #2 - we read a (custom) string, inserted by the user, to be used as the new seed. */
	cout<<"\tPlease, insert a string to be used as the new seed: ";
	cout.flush();
	getline(cin,str);
	if(!cin)
	{
		cin.clear();
		cin.clear();
		cout<<endl<<"PLEASE, YOU MUST INSERT A VALID STRING TO BE USED AS THE NEW SEED!"<<endl<<endl<<"\tTHIS PROGRAM IS CLOSING ... "<<endl<<endl;
		pause();
		return EXIT_FAILURE;
	}

	/* TASK #3 - if we arrive here, then we can construct a new lagged Fibonacci engine 'f2' and update the existing lagged Fibonacci engine 'f1' with the new seed! */
	cout<<endl<<"\tConstructing another lagged Fibonacci engine 'f2' (based on the new seed) ... ";
	cout.flush();
	std::seed_seq seed2 (str.begin(),str.end());
	std::ranlux24_base f2 (seed2);
	cout<<"ok"<<endl;
	cout<<"\tThe minimum random value, generated by the lagged Fibonacci engine 'f2', is "<<f2.min()<<"."<<endl;
	cout<<"\tThe maximum random value, generated by the lagged Fibonacci engine 'f2', is "<<f2.max()<<"."<<endl;
	cout<<"\tGenerating a random value with this lagged Fibonacci engine 'f2': "<<f2()<<"."<<endl;
	if(f1==f2) cout<<"\tThe internal states of the lagged Fibonacci engines 'f1' and 'f2' coincide (with respect to the operator '==')"<<endl;
	else cout<<"\tThe internal states of the lagged Fibonacci engines 'f1' and 'f2' do not coincide (with respect to the operator '==')"<<endl;
	if(f1!=f2) cout<<"\tThe internal states of the lagged Fibonacci engines 'f1' and 'f2' do not coincide (with respect to the operator '!=')"<<endl<<endl;
	else cout<<"\tThe internal states of the lagged Fibonacci engines 'f1' and 'f2' coincide (with respect to the operator '!=')"<<endl<<endl;
	cout<<"\tGenerating a random value with the lagged Fibonacci engine 'f1': "<<f1()<<"."<<endl;
	cout<<"\tUpdating the lagged Fibonacci engine 'f1' with the new seed (the same as the lagged Fibonacci engine 'f2') .. ";
	f1.seed(seed2);
	cout<<"ok"<<endl;
	if(f1==f2) cout<<"\tThe internal states of the lagged Fibonacci engines 'f1' and 'f2' coincide (with respect to the operator '==')"<<endl;
	else cout<<"\tThe internal states of the lagged Fibonacci engines 'f1' and 'f2' do not coincide (with respect to the operator '==')"<<endl;
	if(f1!=f2) cout<<"\tThe internal states of the lagged Fibonacci engines 'f1' and 'f2' do not coincide (with respect to the operator '!=')"<<endl<<endl;
	else cout<<"\tThe internal states of the lagged Fibonacci engines 'f1' and 'f2' coincide (with respect to the operator '!=')"<<endl<<endl;
	cout.flush();

	/* TASK #4 - generating several random values in order to align the lagged Fibonacci engines 'f1' and 'f2'. */
	cout<<"\tGenerating a random value with the lagged Fibonacci engine 'f1': "<<f1()<<"."<<endl;
	cout<<"\tGenerating another random value with the lagged Fibonacci engine 'f1': "<<f1()<<"."<<endl;
	cout<<"\tGenerating a random value with the lagged Fibonacci engine 'f2': "<<f2()<<"."<<endl;
	if(f1==f2) cout<<"\tThe internal states of the lagged Fibonacci engines 'f1' and 'f2' coincide (with respect to the operator '==')"<<endl;
	else cout<<"\tThe internal states of the lagged Fibonacci engines 'f1' and 'f2' do not coincide (with respect to the operator '==')"<<endl;
	if(f1!=f2) cout<<"\tThe internal states of the lagged Fibonacci engines 'f1' and 'f2' do not coincide (with respect to the operator '!=')"<<endl<<endl;
	else cout<<"\tThe internal states of the lagged Fibonacci engines 'f1' and 'f2' coincide (with respect to the operator '!=')"<<endl<<endl;
	cout.flush();

	/* TASK #5 - we validate the serialization operators! */
	cout<<"\tExporting the internal state of the lagged Fibonacci engine 'f1' on the 'f1.txt' file (with respect to the operator '<<') ... ";
	out.open("f1.txt");
	if(!out)
	{
		cin.clear();
		cin.clear();
		out.clear();
		out.close();
		cout<<endl<<"\tCANNOT OPEN THE 'f1.txt' FILE."<<endl<<endl<<"\tTHIS PROGRAM IS CLOSING ... "<<endl<<endl;
		pause();
		return EXIT_FAILURE;
	}

	/* The 'f1.txt' file is open! */
	out<<f1;
	out.close();
	cout<<"ok"<<endl<<"\tCreating another lagged Fibonacci engine 'f3' ... ";
	cout.flush();
	std::ranlux24_base f3;
	cout<<"ok"<<endl;
	cout.flush();
	if(f1==f3) cout<<"\tThe internal states of the lagged Fibonacci engines 'f1' and 'f3' coincide (with respect to the operator '==')"<<endl;
	else cout<<"\tThe internal states of the lagged Fibonacci engines 'f1' and 'f3' do not coincide (with respect to the operator '==')"<<endl;
	if(f1!=f3) cout<<"\tThe internal states of the lagged Fibonacci engines 'f1' and 'f3' do not coincide (with respect to the operator '!=')"<<endl<<endl;
	else cout<<"\tThe internal states of the lagged Fibonacci engines 'f1' and 'f3' coincide (with respect to the operator '!=')"<<endl<<endl;
	cout.flush();
	cout<<"\tSaving the internal state of the lagged Fibonacci engine 'f1' (from the 'f1.txt' file) into the lagged Fibonacci engine 'f3' (with respect to the operator '>>') ... ";
	in.open("f1.txt");
	if(!in)
	{
		cin.clear();
		cin.clear();
		out.clear();
		in.close();
		cout<<endl<<"\tCANNOT OPEN THE 'f1.txt' FILE."<<endl<<endl<<"\tTHIS PROGRAM IS CLOSING ... "<<endl<<endl;
		pause();
		return EXIT_FAILURE;
	}
	
	/* Saving everything from the 'f1.txt' file into the lagged Fibonacci engine 'f3'. */
	in>>f3;
	in.close();
	cout<<"ok"<<endl;
	if(f1==f3) cout<<"\tThe internal states of the lagged Fibonacci engines 'f1' and 'f3' coincide (with respect to the operator '==')"<<endl;
	else cout<<"\tThe internal states of the lagged Fibonacci engines 'f1' and 'f3' do not coincide (with respect to the operator '==')"<<endl;
	if(f1!=f3) cout<<"\tThe internal states of the lagged Fibonacci engines 'f1' and 'f3' do not coincide (with respect to the operator '!=')"<<endl<<endl;
	else cout<<"\tThe internal states of the lagged Fibonacci engines 'f1' and 'f3' coincide (with respect to the operator '!=')"<<endl<<endl;
	cout << "\tPress the RETURN key to finish ... ";
	cout.flush();
	cin.get();
	#ifndef _MSC_VER
		cout << endl;
		cout.flush();
	#endif	
	return EXIT_SUCCESS;
}

