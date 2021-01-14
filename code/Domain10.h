#pragma once
#include<iostream>
#include<string.h>
using namespace std;

class Domain10
{
	private:
		char *string10;
		int frequency ; 
		int size ;
	public:
	Domain10();
	void UploadingDomain10();
   	string GetFunction();
	char* GetString();
	int getsize();
	void SetFrequency(int f);
	int GetFrequency();
	void print();	
	~Domain10();
};
