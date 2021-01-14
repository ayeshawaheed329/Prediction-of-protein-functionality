#pragma once
#include<iostream>
#include<string.h>
using namespace std;


class Protein
{
	private:
		char *Data;
		int Psize;
	public:
	Protein();
    void FillingData(char c,int i);
	void print();
	char* GetString();
	int FindingFrequency(string pat,string txt);
	void computeLPSArray(string pat, int M, int lps[]);
	~Protein();
}; 
