#pragma once
#include<iostream>
#include<string.h>
using namespace std;

class Domain8
{
	private:
		char *string8;
		int frequency;
		int size;
	public:
	Domain8();
	void UploadingDomain8();
	string GetFunction();
	char* GetString();
	int getsize();
	void SetFrequency(int f);
	int GetFrequency();
	void print();	
	~Domain8();
};
