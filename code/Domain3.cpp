#include "Domain1.h"

#include "Domain3.h"

#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h> 
#include <unistd.h>
#include <cstring>

using namespace std;

    Domain3::Domain3()
	{
		string3= new char [200];
		frequency=0;
		size=0;
	}
	void Domain3::UploadingDomain3()
	{
		ifstream Obj("Domain3.txt");
		int i=0;
		char c;
		while(!Obj.eof())
		{
			Obj>>string3[i];
			i++;
			size++;
		}
		Obj.close();
	}
    string Domain3::GetFunction()
	{
		string s="DNA";
		return s;
	}

	void Domain3::print()
	{
		int i=0;
		ofstream out("output1.txt");
		while(string3[i]!=0)
		{
		 out<<string3[i];
		i++;
	    }
	    
		out<<"1JKB HUMAN LYSOZYME MUTANT WITH GLU 35 REPLACED BY ALA\n";
		out<<"Classification: LYSOZYME\n";
		out<<"Organism(s): Homo sapiens\n";
		out<<"Expression System: Saccharomyces cerevisiae";
	}	
	char* Domain3::GetString()
	{
		return string3;
	}
	int Domain3::getsize()
	{
		return size;
	}
	void Domain3::SetFrequency(int f)
	{
		frequency=f;
	}
	int Domain3::GetFrequency()
	{
		return frequency;
	}
	Domain3::~Domain3()
	{
		if(string3!=0)
		{
			delete string3;
			string3=0;
		}
	}

