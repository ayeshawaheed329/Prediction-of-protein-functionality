#include "Domain1.h"

#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h> 
#include <unistd.h>
#include <cstring>

using namespace std;

Domain1::Domain1()
{
	string1= new char [332];
	frequency=0;
	size=0;
}
void Domain1::UploadingDomain1()
{
	ifstream Obj("Domain1.txt");
	int i=0;
	char c;
	while(!Obj.eof())
	{
		Obj>>string1[i];
		i++;
		size++;
	}
	Obj.close();
	
}
char* Domain1::GetString()
{
	return string1;
}
int Domain1::getsize()
{
	return size;
}
void Domain1::SetFrequency(int f)
{
	frequency=f;
}
int Domain1::GetFrequency()
{
	return frequency;
}
string Domain1::GetFunction()
{
	string s="OXIDOREDUCTASE";
	return s;
}
void Domain1::print()
{
	ofstream out("output1.txt");
	int i=0;
	while(string1[i]!=0)
	{
	  out<<string1[i];
	  i++;
    }	
		out<<"1JK0 Ribonucleotide reductase Y2Y4 heterodimer\n";
		out<<"Classification: OXIDOREDUCTASE\n";
		out<<"Organism(s): Saccharomyces cerevisiae (strain ATCC 204508 / S288c)\n";
		out<<"Expression System: Escherichia coli BL21(DE3)";
}	
Domain1::~Domain1()
{
	if(string1!=0)
	{
		delete string1;
		string1=0;
	}
}



