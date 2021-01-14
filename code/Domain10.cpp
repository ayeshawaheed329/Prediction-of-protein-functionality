#include "Domain10.h"

#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h> 
#include <unistd.h>
#include <cstring>

	Domain10::Domain10()
	{
		string10= new char [103];
		frequency = 0;
		size = 0;
	}
	void 	Domain10::UploadingDomain10()
	{
		ifstream Obj("Domain10.txt");
		int i=0;
		char c;
		while(!Obj.eof())
		{
			Obj>>string10[i];
			i++;
			size++;
		}
		Obj.close();
	}
   	string 	Domain10::GetFunction()
	{
		string s="GROWTH FACTOR";
		return s;
	}

	char* Domain10::GetString()
	{
		return string10;
	}
	int Domain10::getsize()
	{
		return size;
	}
	void Domain10::SetFrequency(int f)
	{
		frequency=f;
	}
	int Domain10::GetFrequency()
	{
		return frequency;
	}
	void 	Domain10::print()
	{
		ofstream out("output1.txt");
		int i=0;
		while(string10[i]!=0)
		{
		out<<string10[i];
		i++;
	    }
	    
		out<<"1HJD Melanoma inhibitory activity (MIA) protein\n";
		out<<"Classification: GROWTH FACTOR\n";
		out<<"Organism(s): Homo sapiens\n";
		out<<"Expression System: Escherichia coli";
	}	
	Domain10::~Domain10()
	{
		if(string10!=0)
		{
			delete string10;
			string10=0;
		}
	}

