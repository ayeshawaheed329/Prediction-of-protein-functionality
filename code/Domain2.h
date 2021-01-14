#pragma once
#include<iostream>
#include<string.h>
using namespace std;
class Domain2
{
	private:
		char *string2;
		int frequency;
		int size;
	public:
	Domain2();
	void UploadingDomain2();
	string GetFunction();
	char* GetString();
	int getsize();
	void SetFrequency(int f);
	int GetFrequency();
	void print();
	~Domain2();
};
