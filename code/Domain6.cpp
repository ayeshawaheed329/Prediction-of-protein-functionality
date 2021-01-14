#include "Domain6.h"

#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h> 
#include <unistd.h>
#include <cstring>

	Domain6::Domain6()
	{
		string6= new char [224];
		frequency = 0;
		size = 0;
	}
	void Domain6::UploadingDomain6()
	{
		ifstream Obj("Domain6.txt");
		int i=0;
		char c;
		while(!Obj.eof())
		{
			Obj>>string6[i];
			i++;
			size++;
		}
		Obj.close();
	}
	string Domain6::GetFunction()
	{
		string s="IMMUNOGLOBULIN";
		return s;
	}
	char* Domain6::GetString()
	{
		return string6;
	}
	int Domain6::getsize()
	{
		return size;
	}
	void Domain6::SetFrequency(int f)
	{
		frequency=f;
	}
	int Domain6::GetFrequency()
	{
		return frequency;
	}
	void Domain6::print()
	{
		ofstream out("output1.txt");
		int i=0;
		while(string6[i]!=0)
		{
		out<<string6[i];
		i++;
	    }
		out<<"1JKF Holo 1L-myo-inositol-1-phosphate Synthase\n";
		out<<"Classification: ISOMERASE\n";
		out<<"Organism(s): Saccharomyces cerevisiae (strain ATCC 204508 / S288c)\n";
		out<<"Expression System: Escherichia coli";
	}	
	Domain6::~Domain6()
	{
		if(string6!=0)
		{
			delete string6;
			string6=0;
		}
	}

