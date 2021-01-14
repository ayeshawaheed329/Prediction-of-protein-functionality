#include "Domain7.h"

#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h> 
#include <unistd.h>
#include <cstring>



	Domain7::Domain7()
	{
		string7= new char [230];
		frequency = 0;
		size = 0;
	}
	void Domain7::UploadingDomain7()
	{
		ifstream Obj("Domain7.txt");
		int i=0;
		char c;
		while(!Obj.eof())
		{
			Obj>>string7[i];
			i++;
			size++;
		}
		Obj.close();
	}

    string Domain7::GetFunction()
	{
		string s="CATALYTIC ANTIBODY";
		return s;
	}
	char* Domain7::GetString()
	{
		return string7;
	}
	int Domain7::getsize()
	{
		return size;
	}
	void Domain7::SetFrequency(int f)
	{
		frequency=f;
	}
	int Domain7::GetFrequency()
	{
		return frequency;
	}
	void Domain7::print()
	{
		ofstream out("output1.txt");
		int i=0;
		while(string7[i]!=0)
		{
		out<<string7[i];
		i++;
	    }
		out<<"15C8 CATALYTIC ANTIBODY 5C8, FREE FAB\n";
		out<<"Classification: CATALYTIC ANTIBODY\n";
		out<<"Organism(s): Mus musculus\n";
		out<<"Expression System: Escherichia coli";
	}	
	Domain7::~Domain7()
	{
		if(string7!=0)
		{
			delete string7;
			string7=0;
		}
	}

