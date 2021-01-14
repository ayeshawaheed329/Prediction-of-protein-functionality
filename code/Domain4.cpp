#include "Domain4.h"

#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h> 
#include <unistd.h>
#include <cstring>


	Domain4::Domain4()
	{
		string4= new char [400];
		frequency=0;
		size=0;
	}
	void Domain4::UploadingDomain4()
	{
		ifstream Obj("Domain4.txt");
		int i=0;
		char c;
		while(!Obj.eof())
		{
			Obj>>string4[i];
			i++;
			size++;
		}
		Obj.close();
	}
	char* Domain4::GetString()
	{
		return string4;
	}
	int Domain4::getsize()
	{
		return size;
	}
	 string Domain4::GetFunction()
	{
		string s="LIGASE";
		return s;
	}
	void Domain4::SetFrequency(int f)
	{
		frequency=f;
	}
	int Domain4::GetFrequency()
	{
		return frequency;
	}
	void Domain4::print()
	{
		ofstream out("output1.txt");
		int i=0;
		while(string4[i]!=0)
		{
		out<<string4[i];
		i++;
	    }
	    
		out<<"1JKF Holo 1L-myo-inositol-1-phosphate Synthase\n";
		out<<"Classification: ISOMERASE\n";
		out<<"Organism(s): Saccharomyces cerevisiae (strain ATCC 204508 / S288c)\n";
		out<<"Expression System: Escherichia coli";
	}	
	Domain4::~Domain4()
	{
		if(string4!=0)
		{
			delete string4;
			string4=0;
		}
	}

