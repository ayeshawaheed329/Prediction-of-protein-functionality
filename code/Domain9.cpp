#include "Domain9.h"

#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h> 
#include <unistd.h>
#include <cstring>


	Domain9::Domain9()
	{
		string9= new char [74];
		frequency = 0;
		size = 0;
	}
	void Domain9::UploadingDomain9()
	{
		ifstream Obj("Domain9.txt");
		int i=0;
		char c;
		while(!Obj.eof())
		{
			Obj>>string9[i];
			i++;
			size++;
		}
		Obj.close();
	}
	string Domain9::GetFunction()
	{
		string s="PROTEIN BINDING";
		return s;
	}
	void Domain9::print()
	{
		ofstream out("output1.txt");
		int i=0;
		while(string9[i]!=0)
		{
		out<<string9[i];
		i++;
	    }
	    
		out<<"1JML Conversion of Monomeric Protein L to an Obligate Dimer by Computational Protein Design\n";
		out<<"Classification: PROTEIN BINDING\n";
		out<<"Organism(s): Finegoldia magna\n";
		out<<"Expression System: Escherichia coli BL21(DE3";
	}	
	char* Domain9::GetString()
	{
		return string9;
	}
	int Domain9::getsize()
	{
		return size;
	}
	void Domain9::SetFrequency(int f)
	{
		frequency=f;
	}
	int Domain9::GetFrequency()
	{
		return frequency;
	}
	Domain9::~Domain9()
	{
		if(string9!=0)
		{
			delete string9;
			string9=0;
		}
	}

