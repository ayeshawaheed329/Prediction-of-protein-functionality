#pragma once
#include<iostream>
#include<string.h>
using namespace std;
class Domain5
{
	private:
		char *string5;
		int frequency;
		int size = 0;
	public:
	Domain5();
	void UploadingDomain5();
	string GetFunction();
	char* GetString();
	int getsize();
	void SetFrequency(int f);
	int GetFrequency();
	void print();	
	~Domain5();
};
