#pragma once
#include<iostream>
#include<string.h>
using namespace std;
class Domain6
{
	private:
		char *string6;
		int frequency;
		int size;
	public:
	Domain6();
	void UploadingDomain6();
	string GetFunction();
	char* GetString();
	int getsize();
	void SetFrequency(int f);
	int GetFrequency();
	void print();	
	~Domain6();
};
