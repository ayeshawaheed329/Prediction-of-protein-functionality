#include "Domain5.h"

#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h> 
#include <unistd.h>
#include <cstring>

	Domain5::Domain5()
	{
		string5= new char [10];
		frequency=0;
		size = 0;
	}
	void Domain5::UploadingDomain5()
	{
		ifstream Obj("Domain5.txt");
		int i=0;
		char c;
		while(!Obj.eof())
		{
			Obj>>string5[i];
			i++;
			size++;
		}
		Obj.close();
	}
	string Domain5::GetFunction()
	{
		string s="TRANSFERASE/RNA";
		return s;
	}
	char* Domain5::GetString()
	{
		return string5;
	}
	int Domain5::getsize()
	{
		return size;
	}
	void Domain5::SetFrequency(int f)
	{
		frequency=f;
	}
	int Domain5::GetFrequency()
	{
		return frequency;
	}
	void Domain5::print()
	{
		ofstream out("output1.txt");
		int i=0;
		while(string5[i]!=0)
		{
		out<<string5[i];
		i++;
	    }
	    
		out<<"1NB7 HC-J4 RNA polymerase complexed with short RNA template strand\n";
		out<<"Classification: TRANSFERASE/RNA\n";
		out<<"Organism(s): Hepatitis C virus genotype 1b (strain HC-J4)\n";
		out<<"Expression System: Escherichia coli BL21";
	}	
	Domain5::~Domain5()
	{
		if(string5!=0)
		{
			delete string5;
			string5=0;
		}
	}

