#include "Domain2.h"

#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h> 
#include <unistd.h>
#include <cstring>


Domain2::Domain2()
{
		string2= new char [200];
		frequency=0;
		size=0;
}
void Domain2::UploadingDomain2()
{
		ifstream Obj("Domain2.txt");
		int i=0;
		char c;
		while(!Obj.eof())
		{
			Obj>>string2[i];
			i++;
			size++;
		}
		Obj.close();
}
string Domain2::GetFunction()
{
		string s="HYDROLASE";
		return s;
}
char*  Domain2::GetString()
{
		return string2;
}
int  Domain2::getsize()
{
		return size;
}
void  Domain2::SetFrequency(int f)
{
		frequency=f;
}
int  Domain2::GetFrequency()
{
		return frequency;
}
void  Domain2::print()
{
    	ofstream out("output1.txt");
		int i=0;
		while(string2[i]!=0)
		{
		out<<string2[i];
		i++;
	    }
	    
		out<<"1NB3 Crystal structure of stefin A in complex with cathepsin H: N-terminal residues of inhibitors can adapt to the active sites of endo-and exopeptidases\n";
		out<<"Classification: HYDROLASE\n";
		out<<"Organism(s): Sus scrofa, Homo sapiens\n";
		out<<"Expression System: Escherichia coli";
}	
Domain2::~Domain2()
{
		if(string2!=0)
		{
			delete string2;
			string2=0;
		}
}

