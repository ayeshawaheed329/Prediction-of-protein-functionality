#include "Domain8.h"

#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h> 
#include <unistd.h>
#include <cstring>


	Domain8::Domain8()
	{
		string8= new char [31];
		frequency = 0;
		size  = 0;
	}
	

	void Domain8::UploadingDomain8()
	{
		ifstream Obj("Domain8.txt");
		int i=0;
		char c;
		while(!Obj.eof())
		{
			Obj>>string8[i];
			i++;
			size++;
		}
		Obj.close();
	}
	string 	Domain8::GetFunction()
	{
		string s="TOXIN";
		return s;
	}
	char* Domain8::GetString()
	{
		return string8;
	}
	int Domain8::getsize()
	{
		return size;
	}
	void Domain8::SetFrequency(int f)
	{
		frequency=f;
	}
	int	Domain8::GetFrequency()
	{
		return frequency;
	}
	void 	Domain8::print()
	{
		ofstream out("output1.txt");
		int i=0;
		while(string8[i]!=0)
		{
		out<<string8[i];
		i++; 
	    }
	    
		out<<"1ACW SOLUTION NMR STRUCTURE OF P01, A NATURAL SCORPION PEPTIDE\n";
		out<<"Classification: TOXIN\n";
		out<<"Organism(s): Androctonus mauritanicus mauritanicus\n";
	}	
	Domain8::~Domain8()
	{
		if(string8!=0)
		{
			delete string8;
			string8=0;
		}
	}

